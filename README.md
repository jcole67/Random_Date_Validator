# Random_Date_Validator
Write a function called gen_dates() that generates random dates. It takes two arrays of  integers called months and days to store the month and day of each date generated, a constant array of 12 integers called num_of_days that specify the number of days of each of the 12 months and an integer called size that specifies how many dates to generate and randomly generates size dates, storing the generated months in months array and generated days in days array. The function must generate only valid dates. To do that, it sets the upper limit of the days to generate to the values given in num_of_days array that is passed as a parameter. The number of days for the 12 months stored in num_of_days array are as follows: 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31.

Write another function called search_date() that takes two arrays of integers called months and days, an integer for size (same as above) and two more integers for the month and day to search for within the two arrays of months and days. The function returns the index of the found date if found and -1 if not found.

In main, declare two arrays of integers of maximum size 50, called months and days, to hold the generated months and days. Also declare an array of integers called num_of_days and initiaize it to the number of days of each of the 12 months. Because February can have either 28 or 29 days, depending on if the year is a leap year or not, the program must ask the user to enter the current year (in main). If it's a leap year, the number of days for month 2 (February) must be set to 29, otherwise, it's set to 28. A year is a leap year if it's either divisible by 400 or if it's divisible by 4, but not by 100.

The program must also ask the user (in main) how many random dates to generate (size). Then, it must pass the months and days arrays, the num_of_days array and size to gen_dates() function and print the generated dates (in main).

Then, read a single date such as 9/21 and pass the two arrays, the size and the month and day to search for to search_date() function. If the specified date was found, print the index of
the first date found in main or print in main that the date could not be found.

All user input must be read in main and generated dates printed in main. Do not use any global variables. The two specified functions must receive only specified parameters. The gen_date() function returns nothing and search_date() function returns the index of found date or -1.

The following is a sample execution of the program:
Enter number of dates to generate: 5

Enter current year: 2020
Generated dates: 11/20, 9/11, 2/28, 11/15, 1/31
Enter date to search for: 11/15
11/15 was found at index 3.
Press any key to continue.
