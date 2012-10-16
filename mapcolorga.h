/****************************************************************************
** Aplicação utilizando algoritmos genéticos, foi utilizada como critério
** de avaliação para a disciplina de Inteligẽncia Artificial
**
** Ciência da Computação
** Universidade Federal do Tocantins - UFT/Palmas
**
** MapColorGA foi desenvolvido para a demonstração de algoritmos genéticos
** para resolver o problema de coloração de grafos.
** A parte interativa foi baseada no exemplo que a Nokia disponibiliza
** juntamente com o Qt e pode ser acessada neste link:
** http://doc.qt.nokia.com/4.7-snapshot/graphicsview-diagramscene.html
**
** Peço se você for utilizar este software mantenha o nome dos autores.
** Se for alterá-lo, adicione seu nome e mande um e-mail para
** herynson@gmail.com descrevendo as alterações.
**
**
** Desenvolvido por:
**                   Herinson Rodrigues
**                   Marcos Raylan
**
** Contato: Herinson Rodrigues (herynson@gmail.com)
**          Marcos Raylan (marcos_raylan@hotmail.com)
**
**
****************************************************************************/

#ifndef MAPCOLORGA_H_
#define MAPCOLORGA_H_

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>

#include "mainscene.h"
#include "mainwindow.h"

using namespace std;

class MapColorGA {

public:

    MapColorGA();
    MapColorGA(int population, int crossing, int generations, int mutations, int genes);
    ~MapColorGA();

    /** @fn vector<string> getMyPopulation() const
        @brief Retorna vetor com a população de cromossomos
        @param Nenhum
        @return Vetor que representa a população
    **/
    multimap<int, string>& getMyPopulation()
        { return myPopulation; }

    int getPopulation() const
        { return myPopulation.size(); }

    int getMutations() const
        { return myMutations; }

    int getCrossing() const
        { return myCrossing; }

    int getGenerations() const
        { return myGenerations; }

    int getGenes() const
        { return myGenes; }

    vector<int> getColors() const
        { return myColors; }

    void printParcialResult(int);

    /** @fn void print_population()
        @brief Função imprime população (modo texto)
        @param Nenhum
        @return Nenhum
    **/
    void printPopulation(int);

    /** @fn void init_population(vector<string>)
        @brief Inicializa população com valores aleatórios para seus genes
        @param max população inicial
        @return Nenhum
    **/
    void initPopulation();

    /** @fn void crossing()
        @brief Função cruzamento
        @param Nenhum
        @return Nenhum
    **/
    void crossing();

    /** @fn void mutation(int k)
        @brief Função mutação
        @param Nenhum
        @return Nenhum
    **/
    void mutation();

    int calculateFitness(string chromossome);

    void selection();

    void setMyGenes(int genes)
        { myGenes = genes; }

    void setInitPop(int population)
        { myInitPop = population; }

    void setMutations(int mutations)
        { myMutations =  mutations; }

    void setGenerations(int generations)
        { myGenerations =  generations; }

    void setColors(vector<int> colors)
        { myColors =  colors; }

    void setCrossing(int crossing)
        { myCrossing =  crossing; }

private:
    int myMutations, myGenerations, myInitPop;
    int myCrossing, myGenes;
    vector<int> myColors;

    multimap<int, string> myPopulation;
    multimap<int, string> mySons;

    /** @fn int roulette()
        @brief Função roleta
        @param Nenhum
        @return Indice do cromossomo sorteado
    **/
    int roulette();
};

#endif

