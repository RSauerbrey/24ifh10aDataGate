#ifndef AVGANALYZER_H
#define AVGANALYZER_H

#include "analyzer.h"

class AvgAnalyzer : public Analyzer
{
public:
    AvgAnalyzer();
    string getSensorType();
    void fetchData(float data[]);
    int dataSize();
};

#endif // AVGANALYZER_H
