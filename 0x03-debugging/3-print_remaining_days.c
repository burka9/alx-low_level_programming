#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int remaining_days = 365;
	int current_days = 0;

	for (int i = 0; i < month - 1; i++)
	{
		current_days += days_in_month[i];
	}

	current_days += days_in_month[month];
	remaining_days -= current_days;

	if (year % 4 == 0 && month == 2 && day < 29)
		remaining_days++;

	printf("Day of the year: %d", current_days);
	printf("Remaining days: %d\n", remaining_days);
}
