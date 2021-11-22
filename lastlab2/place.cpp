#include "place.h"

place initpl(string country, string city) 
{
	place cc;

	cc.country = country;
	cc.city = city;

	return cc;
}

place inputpl() 
{
	place cc;

	printf_s("\nPlease enter your country: ");
	cin >> cc.country;
	printf_s("\nPlease enter your city: ");
	cin >> cc.city;


	return cc;
}

void outpl(place cc) 
{
	if ((cc.country[0] == 0) && (cc.city[0] == 0))
	{
		printf_s("Your country name: Empty\n");
		printf_s("Your city name: Empty\n");
	}
	else
	{
		cout << "Your country name: " << cc.country << endl;
		cout << "Your city surname: " << cc.city << endl;
	}
	printf_s("\n");
}

place deletepl(place cc) 
{
	cc.country = "";
	cc.city = "";


	return cc;
}