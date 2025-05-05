#include "feuchtesensor.h"
#include "stdlib.h"
#include "time.h"

FeuchteSensor::FeuchteSensor()
{
    srand(time(NULL));
    //Testdaten erzeugen
    for(int i = 0; i < 10; i++)
       messdaten[i] = (float)( rand()% 1001 )/10 ;

}

string FeuchteSensor::getSensorType()
{
    return "Feuchte";
}

void FeuchteSensor::fetchData(float data[])
{
    for(int i = 0; i < 10; i++)
        data[i] = messdaten[i];
}

int FeuchteSensor::dataSize()
{
    return 10;
}
