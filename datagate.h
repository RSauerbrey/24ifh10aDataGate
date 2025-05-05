#ifndef DATAGATE_H
#define DATAGATE_H
#include <string>
using namespace std;

class DataGate
{
public:
    DataGate();
    virtual string getSensorType() = 0;
    virtual void fetchData(float data[]) = 0;
    virtual int dataSize() = 0;
};

#endif // DATAGATE_H
