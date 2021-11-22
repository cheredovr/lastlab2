#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
#include"place.h"
#include "setacc.h"
#include "value.h"
#include "obr.h"
using namespace std;
struct Exit
{
	string null = "";
	int noll = 0;
};

setacc deleteacc(setacc User);

ob deleteob(ob us); 

place deletepl(place cc);

vl deletevl(vl mm);
