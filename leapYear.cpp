//============================================================================
// Name        : leapYear.cpp
// Author      : Rebecca Su
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#ifndef MARMOSET_TESTING
int main();
#endif

bool is_leap_year(int year);

#ifndef MARMOSET_TESTING
int main()
{
	int input_year = 0;
	std::cout << "Please enter a year: " << std::endl;
	std::cin >> input_year;
	std::cout << input_year << " is";
	if(!is_leap_year(input_year))
	{
		std::cout  << " not";
	}
	std::cout << " a leap year!"<< std::endl;
	return 0;
}
#endif

bool is_leap_year(int year)
{
	if(year >=1582)
	{
		if(year%100 == 0)
		{
			if(year%400 == 0)
			{
				return true;
			}else
			{
				return false;
			}
		}else if(year%4 == 0)
		{
			return true;
		}else
		{
			return false;
		}
	}else
	{
		return false;
	}
}
