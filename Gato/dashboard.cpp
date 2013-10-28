#include "stdafx.h"
#include "constants.h"
#include <iostream>

int extern dashboard[9];

using namespace std;

char getLetter(int cell)
{
	if (dashboard[cell] == XS)
		return 'X';
	if (dashboard[cell] == OS)
		return 'O';
	return ' ';
}

void print()
{
	cout << "_" << getLetter(0) << "_|_" << getLetter(1) << "_|_" << getLetter(2) << "_" << endl;
	cout << "_" << getLetter(3) << "_|_" << getLetter(4) << "_|_" << getLetter(5) << "_" << endl;
	cout << " " << getLetter(6) << " | " << getLetter(7) << " | " << getLetter(8) << " " << endl;
}