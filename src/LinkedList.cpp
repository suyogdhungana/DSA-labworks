#include "LinkedList.h"

LinkedList::LinkedList()
{
    HEAD = NULL;
    TAIL = NULL;
}

LinkedList::~LinkedList() {}

bool LinkedList::isEmpty()
{
    if (HEAD == NULL && TAIL == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}