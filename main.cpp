#include "LinkedList.hpp"

int main()
{
    LinkedList list;
    list.addToHead(7);
    list.addToHead(10);
    list.addToTail(5);

    list.traverse();

    Node *ouputPtr;
    list.retrieve(5, ouputPtr);
    list.add(2, ouputPtr);

    list.traverse();

    list.removeFromHead();
    list.traverse();

    list.removeFromTail();
    list.traverse();

    list.remove(5);
    list.traverse();
}