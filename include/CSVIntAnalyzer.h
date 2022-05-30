//***************************************************************************
// File name:   CSVIntAnalyzer.h
// Author:      chadd williams
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate Template Method Pattern
//***************************************************************************
#pragma once
#include "IIntAnalyzer.h"

class CSVIntAnalyzer : public IIntAnalyzer
{
    public:
        
        virtual ~CSVIntAnalyzer();

        virtual std::vector<int> parseLine(const std::string &) const;
        virtual std::string outputResult(const std::string&, double) const;
};