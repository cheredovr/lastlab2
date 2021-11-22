#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
using namespace std;
struct place
{
public:
	string country = "";
	string city = "";
};
place initpl(string country, string city);
place inputpl();
void outpl(place cc);
place deletepl(place cc);