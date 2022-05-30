//***************************************************************************
// File name:   IIntAnalyzer.h
// Author:      chadd williams
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate Template Method Pattern
//***************************************************************************
#pragma once
#include <string>
#include <vector>

class IIntAnalyzer
{
    public:

        IIntAnalyzer();
        virtual ~IIntAnalyzer();

        double findAverage(const std::string &, std::ostream &) const;
            // parseLine
            // loop vector
            // outputResult

        virtual std::vector<int> parseLine(const std::string &) const = 0;
        virtual std::string outputResult(const std::string&, double) const = 0;
};