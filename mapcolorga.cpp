#include "mapcolorga.h"
#include "mainscene.h"

#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <set>
#include <string>
#include <map>

using namespace std;

MapColorGA::MapColorGA() {
    myGenerations = 0;
    myMutations = 0;
    myCrossing = 0;
    myInitPop = 0;

    myColors.clear();
    myPopulation.clear();
}

MapColorGA::MapColorGA(int population, int crossing, int generations, int mutations, int genes) {
    myGenerations = generations;
    myMutations = mutations;
    myCrossing = crossing;
    myInitPop = population;
    myGenes = genes;

    myColors.clear();
    myPopulation.clear();
}

MapColorGA::~MapColorGA() {
    myPopulation.clear();
}

int MapColorGA::roulette() {
    vector<double> percentage;  // vector porcentagem da fatia roleta
    multimap<int, string>::iterator it;

    // calcula porcentagem para cada fitness de um determinado cromossomo
    for(it = myPopulation.begin(); it != myPopulation.end(); ++it)
        percentage.push_back( (100 * it->first) / MainScene::getAdjMatrix().size() );

    double random = rand()%100;

    // retorna indice do cromossomo do valor sorteado corresponde à fatia da roleta
    if(random < percentage[0]) return 0;                // primeiro valor da porcentagem
    if(random >= percentage[percentage.size()-1]) return percentage.size()-1;  // ultimo valor da porcentagem

    // verifica intervalos (ex.: [14.5% , 25%[ )
    for(unsigned int i = 1; i < percentage.size(); i++)
        if(random >= percentage[i-1] && random < percentage[i])
            return i;

    return -1;
}

// TODO tornar metodo crossing private novamente
void MapColorGA::crossing() {

    // loop dos cruzamentos
    for(int i = 0; i < myCrossing; i++) {

        int rand1, rand2;

        // sorteia dois numeros aleatorios correspondentes aos pais a serem escolhidos
        do {
            rand1 = roulette();
            rand2 = roulette();
        } while(rand1 == rand2);

        int middle = myGenes / 2;

        string son1, son2;

        // Dois iterator para os pais
        multimap<int, string>::iterator father1 = myPopulation.begin();
        multimap<int, string>::iterator father2 = myPopulation.begin();

        // "gambiarra" para pegar o n-énesimo pai1 e pai2 sorteados
        // motivo: não há operator+ em multimap
        // sugestão: sobrecarregá-lo
        for(int j = 0; j < rand1; j++) ++father1;
        for(int j = 0; j < rand2; j++) ++father2;

        // cromossomo do filho 1 = [do inicio até a metade dos genes do pai 1] + [da metade até o fim dos genes do pai 2]
        son1.insert(son1.begin(), father1->second.begin(), father1->second.begin() + middle);
        son1.insert(son1.end(), father2->second.begin() + middle, father2->second.end());

        // cromossomo no filho 2 = [do inicio até a metade dos genes do pai 2] + [da metade até o fim dos genes do pai 1]
        son2.insert(son2.begin(), father2->second.begin(), father2->second.begin() + middle);
        son2.insert(son2.end(), father1->second.begin() + middle, father1->second.end());

        // insere os filhos no multimap mySons e inicializa seus fitness com -1
        mySons.insert( pair<int, string>(calculateFitness(son1), son1) );
        mySons.insert( pair<int, string>(calculateFitness(son2), son2) );
    }
}

void MapColorGA::mutation() {
    set<int> numbers;
    set<int>::iterator it;

    if(myMutations > myCrossing*2) return;

    // gerando numeros nao repetidos sorteados a sofrerem mutação
    while( numbers.size() < (unsigned int) myMutations )
        numbers.insert(rand() % (myCrossing*2));

    it = numbers.begin();

    for(int i = 0; i < myMutations; i++) {
        // gene sorteado a sofrer mutação
        multimap<int, string>::iterator itMap = mySons.begin();
        int geneRand = rand() % myGenes;

        // "gambiarra" para acessar o n-ésimo filho a sofrer mutação
        for(int j = 0; j < *it; j++) ++itMap;

        int colorRand;

        // evita que a mesma cor do vertice seja trocada pelo mesmo valor
        // ou seja, garante que ocorre a mutação desse gene aleatório
        do {
            colorRand = rand() % myColors.size();
        } while (itMap->second[geneRand] == myColors[colorRand] + 48);

        // troca a cor do gene (vertice)
        itMap->second[geneRand] = myColors[colorRand] + 48;
        ++it;

        mySons.insert( pair<int, string>(calculateFitness(itMap->second), itMap->second) );
        mySons.erase(itMap);
    }
}

void MapColorGA::initPopulation() {
    myPopulation.clear();

    for(int i = 0; i < myInitPop ; i++) {
        string chromossome;

        for(int j = 0; j < myGenes; j++) {
            int pos = rand() % myColors.size();
            chromossome.push_back( myColors.at(pos) + 48 );
        }
        myPopulation.insert( pair<int, string>(calculateFitness(chromossome), chromossome) );
    }
}

int MapColorGA::calculateFitness(string chromossome) {

    multimap<int, int> matrix = MainScene::getAdjMatrix();

    int sumFitGene = 0;

    // loop do cromossomo
    multimap<int, int>::iterator it = matrix.begin();

    for(int j = 0; j < myGenes; j++) {

        // "fitness" parcial de cada gene, ou seja, vertices adjacentes a este vertice
        int aux = matrix.count(j);
        int count = aux;

        while(count--) {
            if( chromossome[ it->first ] == chromossome[ it->second ] )
                aux--;
            ++it;
        }
        sumFitGene += aux;
    }

    return sumFitGene;
}

void MapColorGA::selection() {
    multimap<int, string>::iterator it;

    for(it = mySons.begin(); it != mySons.end(); ++it)
        myPopulation.insert( pair<int, string>(it->first, it->second) );

    for(int i = 0; i < myCrossing*2; i++) {
        it = myPopulation.begin();
        myPopulation.erase(it);
        it++;
    }
    mySons.clear();
}

void MapColorGA::printPopulation(int k) {
    multimap<int, string>::reverse_iterator it;

    if(k == -1) cout << "População parcial" << endl;
    else {
        if(k == myGenerations) cout << "Não achei solução ótima! :(" << endl;
        else cout << "Achei na "<< k+1 << "ª geração!" << endl;

        cout << "População final" << endl;
    }
    int i = 0;
    cout << "Genes: " << endl;
    for(it = myPopulation.rbegin(); it != myPopulation.rend(); ++it) {
        cout << "cr[" << ++i << "]         " << it->second << "      " << (*it).first << endl;
    }
}

void MapColorGA::printParcialResult(int i) {
    cout << "Geração nº " << i+1 << endl;
    printPopulation(-1);
    //sleep(1);
    //system("clear");
}

