#include "main.h"
/**
 * jack_bauer - the entry point
 * @void - the placeholder
 * Description: The fucntion prints all hours and minutes of the day
 * Return: void
 */
void jack_bauer(void)
{
	int hours, minutes, hours_unit, minutes_unit;

	for (hours = 0; hours <= 23; hours++)
	{
		if (hours == 0)
		{
			for (hours_unit = 0; hours_unit <= 9; hours_unit++)
			{
				for (minutes = 0; minutes <= 59; minutes++)
				{
					if (minutes == 0)
					{
						for (minutes_unit = 0; minutes_unit <= 9; minutes_unit++)
						{
							_putchar(hours);
							_putchar(hours_unit);
							_putchar(':');
							_putchar(minutes);
							_putchar(minutes_unit);
							_putchar('\n');
						}
					}
					else if (minutes >= 10)
					{
						_putchar(hours);
						_putchar(hours_unit);
						_putchar(':');
						_putchar(minutes);
						_putchar('\n');
					}
				}
			}
		}
		if (hours >= 10)
		{
			for (minutes = 0; minutes <= 59; minutes++)
			{
				if (minutes == 0)
				{
					for (minutes_unit = 0; minutes_unit <= 59; minutes_unit++)
					{
						_putchar(hours);
						_putchar(':');
						_putchar(minutes);
						_putchar(minutes_unit);
						_putchar('\n');
					}
				}
				else if (minutes >= 10)
				{
					_putchar(hours);
					_putchar(':');
					_putchar(minutes);
					_putchar('\n');
				}
			}
		}
	}
}
