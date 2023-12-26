#include "BitcoinExchange.hpp"

// BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::BitcoinExchange( std::string path ): _path(path)
{
	processFile();
	std::map<std::string, std::string>::iterator it_begin = _data.begin();
	date_begin_range = it_begin->first;
	date_end_range = _data.end()->first;
	std::map<std::string, std::string>::iterator it_end = _data.end();
	it_end--;
	date_end_range = it_end->first;
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

int	BitcoinExchange::getDaysInMonth(int year, int month)
{
	int calendar[12][12] = {
		{31,28,31,30,31,30,31,31,30,31,30,31},
		{31,29,31,30,31,30,31,31,30,31,30,31},
	};
	return (calendar[year % 4 == 0][month - 1]);
}

void	BitcoinExchange::parseDate( std::string date )
{
	// std::cout << date << std::endl;
	// 		throw std::invalid_argument("Error: bad input => " + date);

	std::stringstream ss(date);
	std::string year, month, day;
	getline(ss, year , '-');
	getline(ss, month , '-');
	getline(ss, day , ' ');
	if (year.size() != 4 || month.size() != 2 || day.size() != 2)
	{
		throw std::invalid_argument("Error: bad input => " + date);
	}
	if (day.find_first_not_of("0123456789") != std::string::npos)
		throw std::invalid_argument("Error: bad input => " + date);
	this->year = std::stoi(year);
	if (this->year < std::stoi(date_begin_range.substr(0, 4))  || this->year > std::stoi(date_end_range.substr(0, 4)))
		throw std::invalid_argument("Error: bad input => " + date);
	this->month = std::stoi(month);
	if (this->month <= 0 || this->month > 12)
		throw std::invalid_argument("Error: bad input => " + date);
	this->day = std::stoi(day);
	if (this->day <= 0 || this->day > getDaysInMonth(this->year, this->month))
		throw std::invalid_argument("Error: bad input => " + date);
}

void	BitcoinExchange::getFromData( std::string date, std::string rate )
{
	std::map<std::string, std::string>::iterator it = _data.lower_bound(date);
	if (it->first == date)
	{}
	else if (it != _data.begin())
		it--;
	float nb = std::stof(rate);
	if (nb < 0 )
		throw std::invalid_argument("Error: not a positive number.");
	if (nb > 1000)
		throw std::invalid_argument("Error: too large a number.");
	std::cout << date << " => " << rate << " = " << nb * std::stof(it->second) << std::endl;
}

void BitcoinExchange::processFile( std::string path )
{
	std::string line, date, rate;
	std::ifstream file(path.c_str());
	if (file.is_open()) {
		getline(file, line, '\n');
		if (line != "date | value")
			throw std::invalid_argument("Input file must begin with `date | value`");
		line.clear();
		std::stringstream ss;
		while (getline(file, line, '\n')) {
			try {
				ss << line;
				getline(ss, date, '|');
				if (*(date.end() - 1) == ' ')
					date.pop_back();
				if (date.empty() || date.find_first_not_of("0123456789-") != std::string::npos)
					throw std::invalid_argument("Error: bad input => " + date);
				getline(ss, rate, '\n');
				if (*rate.begin() == ' ')
					rate.erase(rate.begin());
				// if (rate.substr(0, 1).find_first_not_of("0123456789") != std::string::npos || rate.substr(rate.length()-2 , rate.length() -1).find_first_not_of("0123456789") != std::string::npos)
				if (rate.find("-") != std::string::npos)
					throw std::invalid_argument("Error: not a positive number.");
				parseDate(date);
				if (rate[0] == '.' || rate[rate.size() - 1] == '.')
					throw std::invalid_argument("Invalid rate");
				if (rate.empty() || rate.find_first_not_of("0123456789.") != std::string::npos)
					throw std::invalid_argument("Invalid rate");
				getFromData(date, rate);
			} catch (const std::exception &e) {
				std::cout << e.what() << std::endl;ss.clear();
				ss.str("");
			}
			date.clear();
			rate.clear();
			ss.clear();
			// std::cout << "-----------------" << std::endl;
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
			// date = advanced_trim(date, " 	");
			getline(ss, rate, '\n');
			rate = advanced_trim(rate, " 	");
			if (!date.empty())
				_data[date] = rate;
			ss.clear();
		}
		file.close();
	}
	else
		throw std::invalid_argument("Invalid path of data.csv");
}