//
//  SummerArray.hpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/27/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef SummerArray_h
#define SummerArray_h

#include <stdio.h>
#include "DataNode.h"

template<class Type>
class SummerArray
{
private:
    int length;
    bool * modifiedNodes;
    DataNode<Type> * front;
    DataNode<Type> * end;
    
public:
    SummerArray(int length);
    Type getFromIndex(int position);
    Type getFirst();
    Type getLast();
    void setAtIndex(int position, Type data);
    int getLength();

    void sort();
    void resize(int newSize);
    int getUnsedNodes();
    
};

#endif /* SummerArray_h */
