#ifndef FEUCHTESENSOR_H
#define FEUCHTESENSOR_H

#include "datagate.h"

class FeuchteSensor : public DataGate
{
private:
    float messdaten[10];
public:
    FeuchteSensor();
    string getSensorType();
    void fetchData(float data[]);
    int dataSize();
};

#endif // FEUCHTESENSOR_H
