#include <iostream>
#include "ArrayStack.hpp"

ArrayStack::ArrayStack(int size) : maxStacksize(size)
{
    topIndex = -1;
}

ArrayStack::~ArrayStack() {}

bool ArrayStack::isEmpty()
{
    return topIndex == -1;
}

bool ArrayStack::isFull()
{
    return topIndex == maxStacksize - 1;
}

void ArrayStack::push(int element)
{
    if (!isFull())
    {
        data[++topIndex] = element;
    }
    else
    {
        std::cout << "Stack is full\n";
    }
}

int ArrayStack::pop()
{
    if (!isEmpty())
    {
        return data[topIndex--];
    }
    else
    {
        std::cout << "Stack is empty\n";
        std::exit(1);
    }
}

int ArrayStack::top()
{
    if (!isEmpty())
    {
        return data[topIndex];
    }
    else
    {
        std::cout << "Stack is empty\n";
        std::exit(1);
    }
}