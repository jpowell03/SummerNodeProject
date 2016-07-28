//
//  BinaryTreeNode.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "BinaryTreeNode.h"


template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : DataNode<Type>()
{                                     //call the supper class contructor
    leftChild = nullptr;
    rightChild = nullptr;
    parent = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : DataNode<Type>(data)
{                                     //call the supper class contructor
    leftChild = nullptr;
    rightChild = nullptr;
    parent = nullptr;
    //this->setNodeData(data); This is not needed because of : DataNode<Type>(data) above
    
}
template<class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type>::getLeftChild()
{
    return leftChild;
}

template<class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type>::getRightChild()
{
    return rightChild;
}

template<class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type>::getParent()
{
    return parent;
}

template<class Type>
void BinaryTreeNode<Type>::setRightChild(BinaryTreeNode<Type> * rightChild)
{
    this->rightChild = rightChild;
}

template<class Type>
void BinaryTreeNode<Type>::setLeftChild(BinaryTreeNode<Type> * leftChild)
{
    this->leftChild = leftChild;
}

template<class Type>
void BinaryTreeNode<Type>::setParent(BinaryTreeNode<Type> * parent)
{
    this->parent = parent;
}
