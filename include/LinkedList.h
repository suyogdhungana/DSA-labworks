#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class Node
{
public:
    int info;
    Node *next;

    Node() {}
    Node(int data) : info(data) {}
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

    void removeFromHead();
    void removeFromTail();
    void remove(int data);

    void traverse();

    Node head();
    Node tail();
};

#endif