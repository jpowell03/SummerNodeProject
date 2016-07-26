//
//  NodeController.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "NodeController.h"
#include "DataNode.cpp"     // only because its a template file.  can only do this once for the hole projet
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

void NodeController :: start()
{
    tryNodes();
    // nex line for synictest
}



