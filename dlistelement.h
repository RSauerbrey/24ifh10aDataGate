#ifndef DLISTELEMENT_H
#define DLISTELEMENT_H
#include "datagate.h"

class DListElement
{
private:
    DListElement* prev = nullptr;
    DListElement* next = nullptr;
    DataGate* inhalt;
public:
    DListElement();
    DListElement(DataGate* d);
    void setPrev(DListElement* e);
    void setNext(DListElement* e);
    DListElement* getPrev();
    DListElement* getNext();
    void setInhalt(DataGate* d);
    DataGate* getInhalt();
};

#endif // DLISTELEMENT_H
