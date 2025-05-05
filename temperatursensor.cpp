#include "temperatursensor.h"
#include "stdlib.h"
#include "time.h"
TemperaturSensor::TemperaturSensor()
{
    srand(time(NULL));
    //Testdaten erzeugen
    for(int i = 0; i < 10; i++)
        messdaten[i] = -20.0 + (float)( rand()% 501 )/10 ;
}

string TemperaturSensor::getSensorType()
{
    return "Temperatur";
}

void TemperaturSensor::fetchData(float data[])
{
    // ToDo
}

int TemperaturSensor::dataSize()
{
    return 10;
}
