/*
---------------------------------------
         arrayListType<Type>
---------------------------------------
+min() : Type
+min() : Type
+removeAll(Type)
+removeAt(int)
+extArrayList(int)
---------------------------------------
 */
#pragma once
#ifndef EXTARRAYLIST_H_
#define EXTARRAYLIST_H_
#include <iostream>
#include "arrayList.h"
 
template <class Type>
class extArrayList : public arrayListType<Type>
{
public:
	Type min();
	Type max();
	void removeAll(Type);
	void removeAt(int);
	extArrayList<Type>(int size = 100) : arrayListType<Type>(size) {};

};

template <class Type>
void extArrayList<Type>::removeAt(int location)
{
    //data validation
    if (location < 0 || location >= this->length)
        std::cerr << "The location of the item to be removed "
        << "is out of range" << std::endl;
    else
    {    //Implementation
        this->replaceAt(location, this->list[this->length - 1]);
        this->length--;
    }
}

template <class Type>
Type extArrayList<Type>::min()
{
    Type minElement = this->list[0];
    for (int i = 1; i < this->length; i++)
    {
            if (minElement > this->list[i])
                minElement = this->list[i];
    }
    return minElement;
}

template <class Type>
Type extArrayList<Type>::max()
{
    Type maxElement = this->list[0];
    for (int i = 1; i < this->length; i++)
    {
            if (maxElement < this->list[i])
                maxElement = this->list[i];
    }
    return maxElement;
}

template <class Type>
void extArrayList<Type>::removeAll(Type arr)
{
    for (int i = 0; i < this->maxSize; i++)
    {
        if (this->list[i] == arr)
            this->removeAt(i);
    }
}
#endif