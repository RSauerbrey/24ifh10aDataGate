#ifndef TEMPERATURSENSOR_H
#define TEMPERATURSENSOR_H

#include "datagate.h"

class TemperaturSensor : public DataGate
{
private:
    float messdaten[10];
public:
    TemperaturSensor();
    string getSensorType();
    void fetchData(float data[]);
    int dataSize();
};

#endif // TEMPERATURSENSOR_H
