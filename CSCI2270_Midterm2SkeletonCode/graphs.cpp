//
// Created by aanvi on 4/10/19.
//

#include <iostream>
#include "graphs.hpp"

using namespace std;

Graph::Graph()
{

}

Graph::~Graph()
{

}

void Graph::addEdge(int v1, int v2)
{
    Edges[v1].push_back(v2);
}

void Graph::addVertex(int id)
{

}