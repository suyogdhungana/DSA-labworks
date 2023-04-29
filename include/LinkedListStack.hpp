#ifndef LINKEDLISTSTACK_H
#define LINKEDLISTSTACK_H

#include "Stack.hpp"
#include "LinkedList.hpp"

class LinkedListStack : public Stack, public LinkedList
{
private:
    LinkedList list;

public:
    LinkedListStack();
    ~LinkedListStack();

    bool isEmpty();

    void push(int element);
    int pop();

    int top();
};

#endif