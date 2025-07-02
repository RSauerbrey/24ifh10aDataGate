#include "dlist.h"

DList::DList()
{
    first = nullptr;
    last = nullptr;
}

void DList::setFirst(DListElement *e)
{
    first = e;
}

void DList::setLast(DListElement *e)
{
    last = e;
}

DListElement *DList::getFirst()
{
    return first;
}

DListElement *DList::getLast()
{
    return last;
}

void DList::pushFront(DataGate *s)
{
    DListElement* tmp = new DListElement(s);

    if (first == nullptr && last == nullptr)
    {
        first = tmp;
        last = tmp;
    }
    else
    {
        tmp->setNext(first);
        first = tmp;
    }
}

DataGate *DList::popFront()
{
    return nullptr;
}

void DList::pushBack(DataGate *s)
{
    DListElement* tmp = new DListElement(s);

    if (first == nullptr && last == nullptr)
    {
        first = tmp;
        last = tmp;
    }
    else
    {
        tmp->setPrev(last);
        last = tmp;
    }
}

DataGate *DList::popBack()
{
    return nullptr;
}
