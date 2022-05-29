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