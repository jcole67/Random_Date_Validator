//CS_117_20895SP21V
//Assignment 2
//Jordan Cole

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void gen_dates(int[], int[], int[], int);						//Date generator prototype
void search_date(int[], int[], int, int, int);						//Date search prototype

int main()
{
	int months[50];									//Declaration of arrays/vars
	int days[50];
	int num_of_days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int user_month;
	int user_day;
	int user_year;
	int user_size;
	char slash;
	srand(time(NULL));								//srand for rng to be used in Date generator function

	cout << "Enter number of dates to generate: ";					//Receive user input
	cin >> user_size;

	cout << "Enter current year: ";							//Receive user input
	cin >> user_year;

	if ((user_year % 400 == 0) || ((user_year % 4 == 0) && (user_year % 100 != 0)))
	{
		num_of_days[1] = 29;							//Account for leap years
	}

	gen_dates(months, days, num_of_days, user_size);				//Call Date generator function

	cout << "Enter date to search for: ";						//Receive user input
	cin >> user_month >> slash >> user_day;

	search_date(months, days, user_size, user_month, user_day);			//Call Date search function

	system("pause");

	return 0;
}

void gen_dates(int months[], int days[], int num_of_days[], int user_size)		//Date generator definition
{
	cout << "Generated dates: ";
	
	for (int i = 0; i < user_size; i++)
	{
		months[i] = rand() % 12 + 1;
		days[i] = rand() % (num_of_days[months[i]]) + 1;
		if (i < (user_size - 1))
		{
			cout << months[i] << "/" << days[i] << ", ";
		}
		else
		{
			cout << months[i] << "/" << days[i] << "." << endl;
		}
	}
}

void search_date(int months[], int days[], int user_size, int user_month, int user_day)	//Date search definition
{
	int index = -1;

	for (int i = 0; i < user_size; i++)
	{
		if (user_month == months[i] && user_day == days[i])
		{
			index = i;
		}
	}
	
	if (index == -1)
	{
		cout << user_month << "/" << user_day << " was not found.";
	}
	else
	{
		cout << user_month << "/" << user_day << " was found at index " << index << ".";
	}
}
