//***************************************************************************
// File name:   LabeledIntAnalyzer.cpp
// Author:      chadd williams
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate Template Method Pattern
//***************************************************************************

#include "LabeledIntAnalyzer.h"
#include <algorithm>
#include <iostream>

LabeledIntAnalyzer::~LabeledIntAnalyzer()
{

}

std::vector<int> LabeledIntAnalyzer::parseLine(const std::string &rcData) const
{
    int start=0, end, tmp;
    std::vector<int> cInts;
    start = rcData.find(':') + 1;
    end = rcData.find(',', start);
    while ( end != std::string::npos)
    {
        tmp = std::stoi(rcData.substr(start, end-start));
        cInts.push_back(tmp);
        start = rcData.find(':', end) + 1;
        end = rcData.find(',', start);
 
    }
    tmp = std::stoi(rcData.substr(start, rcData.length()-start+1));
    cInts.push_back(tmp);
    //std::for_each(cInts.begin(), cInts.end(), [](int &n){ std::cout << n;});
    return cInts;
}

std::string LabeledIntAnalyzer::outputResult(const std::string& rcMsg, double value) const
{
    return rcMsg + " ave: " + std::to_string(value);
}