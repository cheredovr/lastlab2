#include "value.h"

vl initvl(string min, string max)
{
	vl mm;

	mm.min = min;
	mm.max = max;

	return mm;
}

vl inputvl()
{
	vl mm;

	printf_s("\nPlease enter your min value: ");
	cin >> mm.min;
	printf_s("\nPlease enter your max value: ");
	cin >> mm.max;


	return mm;
}

void outvl(vl mm)
{
	if ((mm.min[0] == 0) && (mm.max[0] == 0))
	{
		printf_s("Your min value: Empty\n");
		printf_s("Your max value: Empty\n");
	}
	else
	{
		cout << "Your min value: " << mm.min << endl;
		cout << "Your max value: " << mm.max << endl;
	}
	printf_s("\n");
}

vl deletepl(vl mm)
{
	mm.min = "";
	mm.max = "";


	return mm;
}