#include <iostream>
#include "LinkedListStack.hpp"

LinkedListStack::LinkedListStack() {}

LinkedListStack::~LinkedListStack() {}

bool LinkedListStack::isEmpty()
{
    return list.isEmpty();
}

void LinkedListStack::push(int element)
{
    list.addToHead(element);
}

int LinkedListStack::pop()
{
    if (!isEmpty())
    {
        int temp = list.head();
        list.removeFromHead();
        return temp;
    }
    else
    {
        std::cout << "List is empty\n";
        std::exit(1);
    }
}

int LinkedListStack::top()
{
    if (!isEmpty())
    {
        return list.head();
    }
    else
    {
        std::cout << "List is empty\n";
        std::exit(1);
    }
}
