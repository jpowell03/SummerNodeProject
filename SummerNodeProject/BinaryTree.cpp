//
//  BinaryTree.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "BinaryTree.h"
#include <iostream>
using namespace std;

template<class Type>
BinaryTree<Type>::BinaryTree()
{
    root = nullptr;
}

template<class Type>
void BinaryTree<Type>::insert(Type data)
{
    BinaryTreeNode<Type> * insertedNode = new BinaryTreeNode<Type>(data);
    root = insert(insertedNode, root);
//    cout << "root " << root << endl;
    
}

template<class Type>
BinaryTreeNode<Type> * BinaryTree<Type>::insert(BinaryTreeNode<Type> * insertedNode, BinaryTreeNode<Type> * currentRootNode)
{
    /*if(root == nullptr)
    {
        root = insertedNode;
        cout << "root node " << root << endl;
        cout << "insert Data " << insertedNode->getNodeData() << endl;
    }
    else*/
    if(currentRootNode == nullptr)
    {
        return insertedNode;
        //currentRootNode = insertedNode;
        //cout << "insert Data " << currentRootNode->getNodeData() << endl;
    }
    else if(insertedNode->getNodeData() < currentRootNode->getNodeData())
    {
        //cout << "inserted left\n";
        //insert(insertedNode, currentRootNode->getLeftChild());
        currentRootNode->setLeftChild(insert(insertedNode, currentRootNode->getLeftChild()));
    }
    else if(insertedNode->getNodeData() > currentRootNode->getNodeData())
    {
        //cout << "inserted right\n";
        //insert(insertedNode, currentRootNode->getRightChild());
        currentRootNode->setRightChild(insert(insertedNode, currentRootNode->getRightChild()));
    }
    return currentRootNode;

}

template<class Type>
void BinaryTree<Type>::preOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        cout << currentNode->getNodeData() << ", ";
        preOrderTraversal(currentNode->getLeftChild());
        preOrderTraversal(currentNode->getRightChild());
    }
}

template<class Type>
void BinaryTree<Type>::postOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        postOrderTraversal(currentNode->getLeftChild());
        postOrderTraversal(currentNode->getRightChild());
        cout << currentNode->getNodeData() << ", ";
    }
}

template<class Type>
void BinaryTree<Type>::inOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        inOrderTraversal(currentNode->getLeftChild());
        cout << currentNode->getNodeData() << ", ";
        inOrderTraversal(currentNode->getRightChild());
    }
}

template<class Type>
int BinaryTree<Type>::calculateSize()
{
    
}

template<class Type>
bool BinaryTree<Type>::remove(Type data)
{
    
}

template<class Type>
BinaryTreeNode<Type> * BinaryTree<Type>::getRoot()
{
    return root;
}