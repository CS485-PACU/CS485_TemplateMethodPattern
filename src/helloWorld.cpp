#include <iostream>
#include <vector> 
#include <string>
#include "CSVIntAnalyzer.h"

int main()
{
    CSVIntAnalyzer cAnalyzer;

    cAnalyzer.findAverage("1,2,3,4", std::cout);

    return EXIT_SUCCESS;
}
