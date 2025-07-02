#ifndef DLIST_H
#define DLIST_H
#include "dlistelement.h"

class DList
{
private:
    DListElement* first;
    DListElement* last;
public:
    DList();
    void setFirst(DListElement* e);
    void setLast(DListElement* e);
    DListElement* getFirst();
    DListElement* getLast();

    void pushFront(DataGate* s); // Element an den Anfang anfügen
    DataGate* popFront(); // Erstes Element von der Liste nehmen
    void pushBack(DataGate* s); // Element an das Ende anfügen
    DataGate* popBack(); // Element vom Ende nehmen
};

#endif // DLIST_H
