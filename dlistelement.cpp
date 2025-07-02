#include "dlistelement.h"

DListElement::DListElement()
{
}

DListElement::DListElement(DataGate *d)
{
    // inhalt = d;
    this->setInhalt(d);
}

void DListElement::setPrev(DListElement *e)
{
    prev = e;
}

void DListElement::setNext(DListElement *e)
{
    next = e;
}

DListElement *DListElement::getPrev()
{
    return prev;
}

DListElement *DListElement::getNext()
{
    return next;
}

void DListElement::setInhalt(DataGate *d)
{
    inhalt = d;
}

DataGate *DListElement::getInhalt()
{
    return inhalt;
}
