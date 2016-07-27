//
//  SummerList.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/27/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "SummerList.h"

template<class Type>
SummerList<Type>::SummerList()
{
    size = 0;
    front= nullptr;
    end = nullptr;
}

template<class Type>
Type SummerList<Type>::getFromIndex(int index)
{
    
}

template<class Type>
void SummerList<Type> :: addAtIndex(int index, Type data)
{
    assert(index >= 0 && index <= size);
    DataNode<Type> * indexPointer = front;
    
    DataNode<Type> * newNode = new DataNode<Type>(data);
    

    if(index == 0)
    {
        newNode->setNext(indexPointer);
        front = newNode;
    }
    else if(index == size-1)
    {
        end->setNext(newNode);
        end = newNode;
    }
    else
    {
        for(int position = 0; position < index - 1; position++)
        {
            indexPointer = indexPointer->getNodePointer();
        }
        
        newNode->setNext(indexPointer->getNext());
        //DataNode<Type> * temp = indexPointer->getNext();
        //newNode->setNext(temp);
        
        indexPointer->setNext(newNode);   // setNext == setNodePointer
    }
}


template<class Type>
Type SummerList<Type> :: getFirst()
{
    
}

template<class Type>
Type SummerList<Type> :: getLast()
{
    
}

template<class Type>
void SummerList<Type> :: sort()
{
    
};

template<class Type>
void SummerList<Type> :: setAtIndex(int index, Type data)
{
    
}
template<class Type>
int SummerList<Type> :: getSize()
{
    
}

template<class Type>
void SummerList<Type> :: add(Type data)
{
    
}

template<class Type>
void SummerList<Type> :: addAtFront(Type data)
{
    
}

template<class Type>
Type SummerList<Type> :: remove(int index)
{
    
}

template<class Type>
bool SummerList<Type> :: contains(Type data)
{
    
}
