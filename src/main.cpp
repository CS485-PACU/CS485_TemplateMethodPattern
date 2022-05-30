//***************************************************************************
// File name:   main.cpp
// Author:      chadd williams
// Date:        5/29/2022
// Class:       CS 485
// Assignment:  Examples
// Purpose:     Demonstrate Template Method Pattern
//***************************************************************************

#include <iostream>
#include <vector> 
#include <string>
#include "CSVIntAnalyzer.h"
#include "LabeledIntAnalyzer.h"

//***************************************************************************
// Function:    main
//
// Description: Invoke CSV and LabledInt analyzer
//
// Parameters:  none
//
// Returned:    EXIT_SUCCESS
//***************************************************************************
int main()
{
    CSVIntAnalyzer cAnalyzer;
    LabeledIntAnalyzer cLabledAnalyzer;

    cAnalyzer.findAverage("1,2,3,4", std::cout);
    std::cout << std::endl;
    cLabledAnalyzer.findAverage("age: 18, age: 19, age: 20", std::cout);
    return EXIT_SUCCESS;
}
