#include <iostream>
#include "feuchtesensor.h"

using namespace std;

int main()
{
    FeuchteSensor *f = new FeuchteSensor;
    f->getSensorType();
    return 0;
}
