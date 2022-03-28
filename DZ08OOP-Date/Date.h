#pragma once
#include "AllLibraries.h"

class Date
{
	short day;
	short month;
	short year;
public:
	Date();
	Date(const short day, const short month, const short year);
	void SetDay(const short day);
	void SetMonth(const short month);
	void SetYear(const short year);
	short GetDate() const;
	short GetMonth() const;
	short GetYear() const;
	void PrintDate(); // Displaying the date on the screen			
};
Date& operator - (const Date& one, const Date& two);
