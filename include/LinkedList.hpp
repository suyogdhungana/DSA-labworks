#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node
{
public:
    int info;
    Node *next;

    Node() : next(nullptr) {}
    Node(int data) : info(data), next(nullptr) {}
    Node(int data, Node *next) : info(data), next(next) {}
    ~Node() {}
};

class LinkedList
{
public:
    Node *HEAD;
    Node *TAIL;

    LinkedList();
    ~LinkedList();

    bool isEmpty();

    void addToHead(int data);
    void addToTail(int data);
    void add(int data, Node *pred);

    void traverse();

    void removeFromHead();
    void removeFromTail();
    void remove(int data);

    bool retrieve(int data, Node *outputPtr);
    bool search(int data);
};

#endif