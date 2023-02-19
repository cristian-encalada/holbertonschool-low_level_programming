#include "main.h"
/**
* jack_bauer - function that prints every minute of the day of Jack Bauer
* starting from 00:00 to 23:59.
* Return: 0 at the end if no errors
*/
void jack_bauer(void)
{
	int total_min = 0, min_dig1 = 0, min_dig2, hour_dig1 = 0, hour_dig2 = 0;

	while (total_min <= 1439)
	{
		for (min_dig2 = 0; min_dig2 <= 9; min_dig2++)
		{
		if ((hour_dig2 == 9) && (min_dig1 == 5) && (min_dig2 == 9))
		{
		_putchar(hour_dig1 + '0');
		hour_dig1++;
		}
		else
		_putchar(hour_dig1 + '0');
			if ((min_dig1 == 5) && (min_dig2 == 9))
			{
			_putchar(hour_dig2 + '0');
			hour_dig2++;
			}
			else
			_putchar(hour_dig2 + '0');
			if (hour_dig2 > 9)
			{
			hour_dig2 = 0;
			}
		_putchar(':');
			if (min_dig2 < 9)
			_putchar(min_dig1 + '0');
			else
			{
			_putchar(min_dig1 + '0');
			min_dig1++;
			}
			if (min_dig1 > 5)
			min_dig1 = 0;
		_putchar(min_dig2 + '0');
		_putchar('\n');
		total_min++;
		}
	}
}
