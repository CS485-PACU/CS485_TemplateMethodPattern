#include "CSVIntAnalyzer.h"
#include <algorithm>
#include <iostream>

CSVIntAnalyzer::~CSVIntAnalyzer()
{

}

std::vector<int> CSVIntAnalyzer::parseLine(const std::string &rcData) const
{
    int start=0, end, tmp;
    std::vector<int> cInts;
    end = rcData.find(',');
    while ( end != std::string::npos)
    {
        tmp = std::stoi(rcData.substr(start, end-start));
        cInts.push_back(tmp);
        start = end+1;
        end = rcData.find(',', end+1);
 
    }
    tmp = std::stoi(rcData.substr(start, rcData.length()-start+1));
    cInts.push_back(tmp);
    std::for_each(cInts.begin(), cInts.end(), [](int &n){ std::cout << n;});
    return cInts;
}

std::string CSVIntAnalyzer::outputResult(const std::string&, double) const
{
    return "";
}