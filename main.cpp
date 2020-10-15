#include <iostream>
#include "twoStacks.h"
#include "twoStacks.cpp"
#include "twoStacksADT.h"
#include "point.h"
using namespace std;

int main()
{
    twoStacks<int> ts(10);
    ts.push1(1);
    ts.push1(3);
    ts.push1(5);
    ts.push2(2);
    ts.push2(4);
    ts.push2(6);

    cout << "pop from stack1: " << ts.pop1() << endl;
    cout << "pop from stack2: " << ts.pop2() << endl;

    twoStacks<point> points(10);
    points.push1(point(1, 1));
    points.push1(point(3, 3));
    points.push1(point(5, 5));
    points.push2(point(2, 2));
    points.push2(point(4, 4));
    points.push2(point(6, 6));

    cout << "pop from stack1: " << points.pop1() << endl;
    cout << "pop from stack2: " << points.pop2() << endl;

        return 0;
}