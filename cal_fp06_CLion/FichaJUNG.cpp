#include <cstdio>
#include "graphviewer.h"
#include <fstream>
#include <iostream>
#include <sstream>

void exercicio1();
void exercicio2();
void exercicio3();


void exercicio1()
{
// TODO: Implement here exercise 1!
    GraphViewer *gv = new GraphViewer(600, 600, true);
    gv->createWindow(600, 600);
    gv->defineVertexColor("blue");
    gv->defineEdgeColor("black");
    gv->addNode(0);
    gv->rearrange();
    gv->addNode(1);
    gv->rearrange();
    gv->addEdge(0,0,1,EdgeType::UNDIRECTED);
}

void exercicio2()
{
// TODO: Implement here exercise 2!
// ...
}

void exercicio3()
{
// TODO: Implement here exercise 3!
// To read map files, use relative paths:
// Vertices data: "../resources/mapa1/nos.txt"
// Edges data: "../resources/mapa1/arestas.txt"
// ...
}

int main() {
    /*
     * Uncomment the line below to run Exercise 1
     */
    exercicio1();

    /*
      * Uncomment the line below to run Exercise 2
      */
    //exercicio2();

    /*
      * Uncomment the line below to run Exercise 3
      */
	//
	//exercicio3();

	getchar();
	return 0;
}
