#ifndef TWOSTACKS_H
#define TWOSTACKS_H
#include "twoStacksADT.h"

template <class T>
class twoStacks : public twoStacksADT<T>
{
private:
    T *arr;
    void deepcopy(const twoStacks<T> &other);

public:
    twoStacks(int);
    ~twoStacks();
    twoStacks(const twoStacks<T> &other);
    twoStacks<T> &operator=(const twoStacks<T> &other);
    void push1(T);
    void push2(T);
    T pop1();
    T pop2();
};

#endif