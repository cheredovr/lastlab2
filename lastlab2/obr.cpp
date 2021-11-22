#include "obr.h"

ob initob(string university, string special) //Инициализация музыки
{
	ob us;

	us.university = university;
	us.special = special;

	return us;
}

ob inputob() //Изменение данных о музыке
{
	ob us;

	printf_s("Please enter a university: ");
	cin >> us.university;
	printf_s("Please enter a special: ");
	cin >> us.special;

	return us;
}

void outob(ob us) //Вывод данных о музыке
{
	if ((us.university[0] == 0) && (us.special[0] == 0))
	{
		printf_s("Empty - Empty");
	}
	else
	{
		cout << us.university << " - " << us.special << endl;
	}
	printf_s("\n");
}

ob deleteob(ob us) //Удаление данных о музыке
{
	us.university = "";
	us.special = "";

	return us;
}