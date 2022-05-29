#include "IIntAnalyzer.h"

class CSVIntAnalyzer : public IIntAnalyzer
{
    public:
        
        virtual ~CSVIntAnalyzer();

        virtual std::vector<int> parseLine(const std::string &) const;
        virtual std::string outputResult(const std::string&, double) const;
};