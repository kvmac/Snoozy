// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int, char *[]);

int main(int argc, char *argv[])
{

	int lights_out;

	init();

	lights_out = (int)argv[1];

/*	if (argv[1] == "-T" || argv[1] == "-time")
	{
		lights_out = (int)argv[2];
		lights_out = lights_out % 24;
	}
	else
	{
		exit(EXIT_FAILURE);
	}
	*/



	for (;;)
	{
		// turn lights off
		if (time_check(10, lights_out) == 0)
		{
			set_aura(0);
			set_hueplus(0);
			set_logitech(0);
		}

		// turn lights on
		if (time_check(10, lights_out) == 1)
		{
			set_aura(1);
			set_hueplus(1);
			set_logitech(1);
		}
		else
		{
			std::cout << "time_check(int) failed";
			exit(EXIT_FAILURE);
		}
	}
}

