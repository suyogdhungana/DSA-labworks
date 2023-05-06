#ifndef LINKEDLISTQUEUE_H
#define LINKEDLISTQUEUE_H

#include "Queue.hpp"
#include "LinkedList.hpp"

class LinkedListQueue : public Queue
{
private:
    LinkedList list;

public:
    LinkedListQueue();
    ~LinkedListQueue();

    bool isEmpty();

    void enqueue(int element);
    void dequeue();

    int front();
    int back();
};

#endif
