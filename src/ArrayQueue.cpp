#include <iostream>
#include "ArrayQueue.hpp"

ArrayQueue::ArrayQueue(int maxQueueSize) : maxQueueSize(maxQueueSize)
{
    Front = -1;
    Rear = -1;
}

ArrayQueue::~ArrayQueue() {}

bool ArrayQueue::isEmpty()
{
    if (Front == -1 && Rear == -1)
        return true;
    else
        return false;
}

bool ArrayQueue::isFull()
{
    if (Rear == maxQueueSize - 1)
        return true;
    else
        return false;
}

void ArrayQueue::enqueue(int element)
{
    if (!isFull())
    {
        if (isEmpty())
            Front++;

        data[++Rear] = element;
    }
    else
    {
        std::cout << "Queue is Full\n";
        std::exit(1);
    }
}

void ArrayQueue::dequeue()
{
    if (!isEmpty())
    {
        if (Front == Rear)
        {
            Front = -1;
            Rear = -1;
        }
        else
        {
            ++Front;
        }
    }
    else
    {
        std::cout << "Queue is empty\n";
        std::exit(1);
    }
}

int ArrayQueue::front()
{
    if (!isEmpty())
        return data[Front];
}

int ArrayQueue::back()
{
    if (!isEmpty())
        return data[Rear];
}