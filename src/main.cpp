#include <iostream>
#include <vector> 
#include <string>
#include "CSVIntAnalyzer.h"
#include "LabeledIntAnalyzer.h"

int main()
{
    CSVIntAnalyzer cAnalyzer;
    LabeledIntAnalyzer cLabledAnalyzer;

    cAnalyzer.findAverage("1,2,3,4", std::cout);
    std::cout << std::endl;
    cLabledAnalyzer.findAverage("age: 18, age: 19, age: 20", std::cout);
    return EXIT_SUCCESS;
}
