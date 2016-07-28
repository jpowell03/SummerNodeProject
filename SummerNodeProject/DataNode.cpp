//
//  Node.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "DataNode.h"
#include <iostream>
using namespace std;

template<class Type>
DataNode<Type>::DataNode()
{
    this->next = nullptr;
    
}

template<class Type>
DataNode<Type>::DataNode(Type nodeData)
{
    this->nodeData = nodeData;
    this->next = nullptr;
}

template<class Type>
void DataNode<Type>::setNodeData(Type nData)
{
    this->nodeData = nData;
}

template<class Type>
void DataNode<Type>::setNext(DataNode<Type> * nxt)
{
    this->next = nxt;
}

template<class Type>
Type DataNode<Type>::getNodeData()
{
    return nodeData;
}

template<class Type>
DataNode<Type> * DataNode<Type>::getNext()
{
    return next;
}

