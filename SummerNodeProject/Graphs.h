//
//  Graphs.h
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/29/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef Graphs_h
#define Graphs_h

#include <stdio.h>

template<class Type>
class Graphs
{
private:
    static const int MAXIMUM = 20;
    bool edges[MAXIMUM][MAXIMUM]; // This is the adjacency matrix
    Type labels[MAXIMUM];
    int currentSize;
    void depthFirstTraversal(Graphs<Type> graph, int vertex, bool markedVertices[]);
    
public:
    Graphs();
    virtual ~Graphs();
    
    void addVertex(const Type& label);
    void addEdge(int source, int target);
    void removeEdge(int source, int target);
    Type& operator[] (int vertex);
    int size() const;
    bool isEdge(int source, int target) const;
    std::set<int> neighbors(int vertex) const;
    Type operator[] (int vertex) const;
    
};

#endif /* Graphs_h */
