#include "obr.h"

ob initob(string university, string special) //������������� ������
{
	ob us;

	us.university = university;
	us.special = special;

	return us;
}

ob inputob() //��������� ������ � ������
{
	ob us;

	printf_s("Please enter a university: ");
	cin >> us.university;
	printf_s("Please enter a special: ");
	cin >> us.special;

	return us;
}

void outob(ob us) //����� ������ � ������
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

ob deleteob(ob us) //�������� ������ � ������
{
	us.university = "";
	us.special = "";

	return us;
}