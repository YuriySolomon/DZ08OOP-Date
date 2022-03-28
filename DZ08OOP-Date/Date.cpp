#include "Date.h"

//Date::Date() : Date(13, 01, 2000) {}
Date::Date()
{
	SYSTEMTIME st;
	GetSystemTime(&st);
	SetDay(st.wDay);
	SetMonth(st.wMonth);
	SetYear(st.wYear);	
}	
Date::Date(const short day, const short month, const short year)
{
	SetDay(day);
	SetMonth(month);
	SetYear(year);
}

void Date::SetDay(const short day)
{
	if (day > 0 && day < 31)
	{
		this->day = day;
	}
	else
	{
		throw "You have not entered the wrong day!\n";
	}
}
void Date::SetMonth(const short month)
{
	if (month > 0 && month < 13)
	{
		this->month = month;
	}
	else
	{
		throw "You did not enter the wrong month!\n";
	}
}
void Date::SetYear(const short year)
{
	if (year > 0 && year < 2999)
	{
		this->year = year;
	}
	else
	{
		throw "You did not enter the wrong year!\n";
	}
}

short Date::GetDate() const
{
	return day;
}
short Date::GetMonth() const
{
	return month;
}
short Date::GetYear() const
{
	return year;
}

void Date::PrintDate()
{
	printf("day:month:year = %02d:%02d:%04d \n", day, month, year);
}
Date& operator - (const Date& one, const Date& two)
{
	Date temp;	
	return temp;
}