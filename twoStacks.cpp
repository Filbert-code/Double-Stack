#include "twoStacks.h"
#include <iostream>
using namespace std;

template <class T>
twoStacks<T>::twoStacks(int size)
{
    this->size = size;
    arr = new T[size];
    this->top1 = -1;
    this->top2 = size;
}

template <class T>
twoStacks<T>::~twoStacks()
{
    delete[] arr;
}

template <class T>
void twoStacks<T>::push1(T item)
{
    if (this->top1 < this->top2 - 1)
    {
        this->top1++;
        arr[this->top1] = item;
    }
    else
    {
        cout << "stack overflow";
        exit(1);
    }
}

template <class T>
void twoStacks<T>::push2(T item)
{
    if (this->top1 < this->top2 - 1)
    {
        this->top2--;
        arr[this->top2] = item;
    }
    else
    {
        cout << "stack overflow";
        exit(1);
    }
}

template <class T>
T twoStacks<T>::pop1()
{
    if (this->top1 >= 0)
    {
        T item = arr[this->top1];
        this->top1--;
        return item;
    }
    else
    {
        cout << "index out of bounds";
        exit(1);
    }
}

template <class T>
T twoStacks<T>::pop2()
{
    if (this->top2 < this->size)
    {
        T item = arr[this->top2];
        this->top2++;
        return item;
    }
    else
    {
        cout << "index out of bounds";
        exit(1);
    }
}

template <class T>
void twoStacks<T>::deepcopy(const twoStacks<T> &other)
{
    this->size = other.size;
    this->top1 = other.top1;
    this->top2 = other.top2;

    this->arr = new T[this->size];
    for (int i = 0; i < this->size; i++)
    {
        this->arr[i] = other.arr[i];
    }
}

template <class T>
twoStacks<T>::twoStacks(const twoStacks<T> &other)
{
    deepcopy();
}

template <class T>
twoStacks<T> &twoStacks<T>::operator=(const twoStacks<T> &other)
{
    if (this != &other)
    {
        deepcopy(other);
    }
    return *this;
}