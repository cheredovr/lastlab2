#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
using namespace std;
struct ob
{
public:
	string university = "";
	string special = "";

};
ob	initob(string university, string special);
ob inputob();
void outob(ob us);
ob deleteob(ob us);