#include "avganalyzer.h"

AvgAnalyzer::AvgAnalyzer() {}

string AvgAnalyzer::getSensorType()
{
    return dG->getSensorType();
}

void AvgAnalyzer::fetchData(float data[])
{

}

int AvgAnalyzer::dataSize()
{
    return dG->dataSize();
}
