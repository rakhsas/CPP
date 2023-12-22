#include "BitcoinExchange.hpp"

// BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::BitcoinExchange( std::string path ): _path(path)
{
	processFile();
	std::map<std::string, std::string>::iterator it_begin = _data.begin();
	date_begin_range = it_begin->first;
	date_end_range = _data.end()->first;
	std::cout << "date_begin_range: " << date_begin_range << std::endl;
	std::map<std::string, std::string>::iterator it_end = _data.end();
	it_end--;
	date_end_range = it_end->first;
	std::cout << "date_end_range: " << date_end_range << std::endl;
	processFile(getPath());
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	*this = copy;
}


BitcoinExchange::~BitcoinExchange()
{
}


BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	if (this != &copy)
		this->_path = copy._path;
	return (*this);
}

std::string BitcoinExchange::getPath() const
{
	return (_path);
}

std::string& rtrim(std::string& s, std::string t)
{
    s.erase(s.find_last_not_of(t.c_str()) + 1);
    return s;
}

std::string& ltrim(std::string& s, std::string t)
{
    s.erase(0, s.find_first_not_of(t.c_str()));
    return s;
}

std::string& advanced_trim(std::string& s, std::string trimSep)
{
    return ltrim(rtrim(s, trimSep.c_str()), trimSep.c_str());
}

void	BitcoinExchange::parseDate( std::string date )
{
	
}

void BitcoinExchange::processFile( std::string path )
{
	std::string line, date, rate;
	std::ifstream file(path.c_str());

	if (file.is_open()) {
		getline(file, line, '\n');
		if (line != "date | value")
			throw std::invalid_argument("Input file must begin with `date | value`");
		std::stringstream ss;
		while (getline(file, line, '\n')) {
			ss << line;
			getline(ss, date, '|');
			date = advanced_trim(date, " 	");
			getline(ss, rate, '\n');
			rate = advanced_trim(rate, " 	");
			parseDate(date);
			ss.clear();
		}
		file.close();
	}
}
void BitcoinExchange::processFile()
{
	std::string line, date, rate;
	std::ifstream file(DATAPATH);

	if (file.is_open()) {
		getline(file, line, '\n');
		if (line != "date,exchange_rate")
			throw std::invalid_argument("Input file must begin with `date,exchange_rate`");
		std::stringstream ss;
		while (getline(file, line, '\n')) {
			ss << line;
			getline(ss, date, ',');
			date = advanced_trim(date, " 	");
			getline(ss, rate, '\n');
			rate = advanced_trim(rate, " 	");
			if (!date.empty())
				_data[date] = rate;
			else
				std::cout << "Bad Input\n";
			ss.clear();
		}
		file.close();
	}
	else
		throw std::invalid_argument("Invalid path of data.csv");
}