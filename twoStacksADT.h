#ifndef TWOSTACKSADT_H
#define TWOSTACKSADT_H

#include <iostream>
using namespace std;

template <class T>
class twoStacksADT
{
protected:
    int top1, top2;
    int size;

public:
    virtual ~twoStacksADT() { cout << "destroy base" << endl; }
    virtual void push1(T) = 0;
    virtual void push2(T) = 0;
    virtual T pop1() = 0;
    virtual T pop2() = 0;
};

#endif