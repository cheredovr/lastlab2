#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
using namespace std;
struct setacc
{
public:
	string name = ""; //Имя
	string surname = ""; //Фамилия
	string email = ""; //Почта
	string password = ""; //Пароль
};
setacc initacc(string name, string surname, string email, string password);
setacc inputacc();
void outacc(setacc User);
