//
//  NodeController.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "NodeController.h"
#include "DataNode.cpp"     // only because its a template file.  can only do this once for the hole project
#include "SummerArray.cpp"
#include "BinaryTree.cpp"
#include <string>
#include <iostream>
using namespace std;


void NodeController :: tryNodes()
{
    DataNode<int> numberNode;
    DataNode<string> wordNode;
    numberNode.setNodeData(345);
    cout << numberNode.getNodeData() << endl;
}

void NodeController :: tryArray()
{
    SummerArray<int> testArray(4);
}

void NodeController:: tryTree()
{
    BinaryTree<int> sampleTree;
    sampleTree.insert(7);
    sampleTree.insert(5);
    sampleTree.insert(213);
    sampleTree.insert(-129);
    sampleTree.insert(5);
    sampleTree.insert(123124);
    sampleTree.insert(0);
    
    cout<< "The in order traversal\n";
    sampleTree.inOrderTraversal(sampleTree.getRoot());
    cout << endl << endl;

    cout<< "The pre order traversal\n";
    sampleTree.preOrderTraversal(sampleTree.getRoot());
    cout << endl << endl;
    
    cout<< "The post order traversal\n";
    sampleTree.postOrderTraversal(sampleTree.getRoot());
    cout << endl << endl;
    
    cout << "Size of tree = " << sampleTree.getSize() << endl;
}

void NodeController :: start()
{
    //tryNodes();
    //tryArray();

    tryTree();
    // next line for synictest
}



