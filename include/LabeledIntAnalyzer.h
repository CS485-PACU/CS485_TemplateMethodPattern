#pragma once
#include "IIntAnalyzer.h"

class LabeledIntAnalyzer : public IIntAnalyzer
{
    public:
        
        virtual ~LabeledIntAnalyzer();

        virtual std::vector<int> parseLine(const std::string &) const;
        virtual std::string outputResult(const std::string&, double) const;
};