#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#include "Queue.hpp"

class ArrayQueue : public Queue
{
private:
    int Front;
    int Rear;
    int *data;
    int maxQueueSize;

public:
    ArrayQueue(int maxQueueSize);
    ~ArrayQueue();

    bool isEmpty();
    bool isFull();

    void enqueue(int element);
    void dequeue();

    int front();
    int back();
};

#endif