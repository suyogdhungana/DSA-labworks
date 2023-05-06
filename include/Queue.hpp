#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
public:
    Queue() {}
    ~Queue() {}

    virtual void enqueue(int element) = 0;
    virtual void dequeue() = 0;

    virtual bool isEmpty() = 0;

    virtual int front() = 0;
    virtual int back() = 0;
};

#endif