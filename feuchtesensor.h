#ifndef FEUCHTESENSOR_H
#define FEUCHTESENSOR_H

#include "datagate.h"

class FeuchteSensor : public DataGate
{
public:
    FeuchteSensor();
    string getSensorType();
    void fetchData(float data[]);
    int dataSize();
};

#endif // FEUCHTESENSOR_H
