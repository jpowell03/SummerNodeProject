//
//  DataNode.h
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef DataNode_h
#define DataNode_h

#include <stdio.h>

template<class Type>
class DataNode
{
private:
    Type nodeData;
    DataNode * next;
    
public:
    DataNode();
    DataNode(Type nodeData);
    void setNodeData(Type nData);
    void setNext(DataNode * nxt);
    Type getNodeData();
    DataNode * getNext();
    
    
    
};

#endif /* DataNode_h */
