#include <iostream>
#include "LinkedList.hpp"

LinkedList::LinkedList()
{
    HEAD = nullptr;
    TAIL = nullptr;
}

LinkedList::~LinkedList() {}

bool LinkedList::isEmpty()
{
    if (HEAD == nullptr && TAIL == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void LinkedList::addToHead(int data)
{
    Node *newNode = new Node(data, HEAD);

    HEAD = newNode;
    if (TAIL == nullptr)
    {
        TAIL = HEAD;
    }
}

void LinkedList::addToTail(int data)
{
    Node *newNode = new Node(data);

    if (TAIL == nullptr)
    {
        TAIL = newNode;
        HEAD = TAIL;
    }
    else
    {
        TAIL->next = newNode;
        TAIL = newNode;
    }
}

void LinkedList::add(int data, Node *pred)
{
    Node *newNode = new Node(data);
    newNode->next = pred->next;
    pred->next = newNode;
}

void LinkedList::traverse()
{
    Node *p = HEAD;
    while (p != nullptr)
    {
        std::cout << p->info << "\t";
        p = p->next;
    }
    std::cout << "\n";
}

void LinkedList::removeFromHead()
{
    if (!isEmpty())
    {
        Node *nodeToDelete = HEAD;
        HEAD = HEAD->next;
        delete nodeToDelete;

        if (HEAD == nullptr)
        {
            TAIL = nullptr;
        }
    }
    else
    {
        std::cout << "List is empty\n";
    }
}

void LinkedList::removeFromTail()
{
    Node *nodeToDelete = TAIL;

    if (!isEmpty())
    {
        if (HEAD == TAIL)
        {
            HEAD = TAIL = nullptr;
        }
        else
        {
            Node *pred = HEAD;
            while (pred->next != TAIL)
            {
                pred = pred->next;
            }
            TAIL = pred;
        }
    }
    else
    {
        std::cout << "List is empty\n";
    }
    delete nodeToDelete;
}

void LinkedList::remove(int data)
{
    if (!isEmpty())
    {
        if (HEAD->info == data)
        {
            removeFromHead();
        }
        else
        {
            Node *temp = HEAD->next;
            Node *prev = HEAD;

            while (temp != nullptr)
            {
                if (temp->info == data)
                    break;
                else
                {
                    prev = prev->next;
                    temp = temp->next;
                }
            }

            if (temp != nullptr)
            {
                prev->next = temp->next;
                delete temp;
                if (prev->next = nullptr)
                    TAIL = prev;
            }
        }
    }
}

bool LinkedList::retrieve(int data, Node *outputPtr)
{
    Node *p = HEAD;
    while (p != nullptr || p->info != data)
    {
        p = p->next;
    }
    if (p == nullptr)
    {
        return false;
    }
    else
    {
        outputPtr = p;
        return true;
    }
}

bool LinkedList::search(int data)
{
    Node *p = HEAD;
    while (p != TAIL)
    {
        if (p->info == data)
            break;
        p = p->next;
    }
    if (p->info == data)
    {
        return true;
    }
    else
    {
        return false;
    }
}