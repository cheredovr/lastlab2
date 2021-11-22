#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
using namespace std;
struct vl
{
public:
	string min = "";
	string max = "";

};
vl	initvl(string min, string max);
vl inputvl();
void outvl(vl mm);
vl deletevl(vl mm);