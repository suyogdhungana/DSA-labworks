#ifndef STACK_H
#define STACK_H

class Stack
{
public:
    Stack() {}
    ~Stack() {}

    virtual void push(int element) = 0;
    virtual int pop() = 0;

    virtual bool isEmpty() = 0;

    virtual int top() = 0;
};

#endif