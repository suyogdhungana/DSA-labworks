#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include "Stack.hpp"

class ArrayStack : public Stack
{
private:
    int topIndex;
    int *data;
    int maxStacksize;

public:
    ArrayStack(int maxStackSize);
    ~ArrayStack();

    bool isEmpty();
    bool isFull();

    void push(int element);
    int pop();

    int top();
};

#endif