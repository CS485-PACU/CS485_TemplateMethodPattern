#include "IIntAnalyzer.h"
#include <vector>
#include <algorithm>

IIntAnalyzer::IIntAnalyzer()
{

}

IIntAnalyzer::~IIntAnalyzer()
{

}

double IIntAnalyzer::findAverage(const std::string &rcData) const
{
    std::vector<int> cData = parseLine(rcData);
    double sum = 0;
    std::for_each(cData.begin(), cData.end(), [&sum](int &n){ sum += n; });
    outputResult("Average", sum/cData.size());
    return sum/cData.size();
}
