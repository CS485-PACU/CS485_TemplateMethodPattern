#include "IIntAnalyzer.h"
#include <vector>
#include <algorithm>
#include <iostream>

IIntAnalyzer::IIntAnalyzer()
{

}

IIntAnalyzer::~IIntAnalyzer()
{

}

double IIntAnalyzer::findAverage(const std::string &rcData, std::ostream &rcOut) const
{
    std::vector<int> cData = parseLine(rcData);
    double sum = 0;
    std::for_each(cData.begin(), cData.end(), [&sum](int &n){ sum += n; });
    rcOut << outputResult("Average", sum/cData.size());
    return sum/cData.size();
}
