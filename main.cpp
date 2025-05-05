#include <iostream>
#include "feuchtesensor.h"
#include "temperatursensor.h"
using namespace std;

int main()
{
    DataGate *dG;
    float messdaten[20];
    DataGate* dg[10];
    FeuchteSensor *f = new FeuchteSensor;

    dg[0] = new FeuchteSensor;
    dg[1] = new TemperaturSensor;
    dg[2] = f;


    cout << dg[0]->getSensorType() << endl;
    cout << dg[1]->getSensorType() << endl;
    cout << dg[2]->getSensorType() << endl;

    dg[0]->fetchData(messdaten);

    for(int i= 0; i < dg[0]->dataSize(); i++)
        cout << messdaten[i] << endl;

    dg[1]->fetchData(messdaten);
    for(int i= 0; i < dg[1]->dataSize(); i++)
        cout << messdaten[i] << endl;

    return 0;
}
