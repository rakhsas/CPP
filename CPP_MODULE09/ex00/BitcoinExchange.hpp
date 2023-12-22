#pragma once


#include <iostream>
#include <unistd.h>
#include <fcntl.h>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <utility>

#define DATAPATH "data.csv"

class BitcoinExchange
{
    public:
        BitcoinExchange(std::string path);
        BitcoinExchange(const BitcoinExchange &copy);
        ~BitcoinExchange();
        BitcoinExchange &operator=(const BitcoinExchange &copy);
        std::string getPath() const;
        void parseDate( std::string );
        void processFile();
        void processFile( std::string );
        std::map<std::string, std::string> _data;
    private:
        std::string _path;
        std::string date_begin_range;
        std::string date_end_range;
         
};