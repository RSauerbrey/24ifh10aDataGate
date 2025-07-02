#include "maxanalyzer.h"

MaxAnalyzer::MaxAnalyzer() {}

string MaxAnalyzer::getSensorType()
{
    return dG->getSensorType();
}

void MaxAnalyzer::fetchData(float data[])
{
   //ToDo
}

int MaxAnalyzer::dataSize()
{
    return dG->dataSize();
}
