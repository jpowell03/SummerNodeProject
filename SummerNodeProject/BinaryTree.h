//
//  BinaryTree.h
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef BinaryTree_h
#define BinaryTree_h

#include <stdio.h>
#include "BinaryTreeNode.h"

template <class Type>
class BinaryTree
{
private:
    BinaryTreeNode<Type> * root;
    void insert(BinaryTreeNode<Type> * insertedNode, BinaryTreeNode<Type> * currentRootNode);
public:
    BinaryTree();
    void insert(Type data);
    void preOrderTraversal();
    void postOrderTraversal();
    void inOrderTraversal();
    int calculateSize();
    bool remove(Type data);
};

#endif /* BinaryTree_h */
