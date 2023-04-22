#include "LinkedList.hpp"

int main()
{
    LinkedList list;

    list.addToHead(7);  // 7
    list.addToHead(10); // 10    7
    list.addToTail(5);  // 10    7     5

    list.traverse();

    Node *outputPtr = list.retrieve(7);
    list.add(2, outputPtr); // 10   7   2   5

    list.traverse();

    list.removeFromHead(); // 7   2   5
    list.traverse();

    list.remove(2); // 7    5
    list.traverse();

    list.removeFromTail(); // 7
    list.traverse();
}