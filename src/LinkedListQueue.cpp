#include <iostream>
#include "LinkedListQueue.hpp"

LinkedListQueue::LinkedListQueue() {}

LinkedListQueue::~LinkedListQueue() {}

bool LinkedListQueue::isEmpty()
{
    return list.isEmpty();
}

void LinkedListQueue::enqueue(int element)
{
    list.addToTail(element);
}

void LinkedListQueue::dequeue()
{
    list.removeFromHead();
}

int LinkedListQueue::front()
{
    return list.head();
}

int LinkedListQueue::back()
{
    return list.tail();
}