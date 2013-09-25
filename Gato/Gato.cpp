// Gato.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const int EMPTY = 0;
const int OS = 1;
const int XS = 2;

int G1 = EMPTY, G2 = EMPTY, G3 = EMPTY, G4 = EMPTY, G5 = EMPTY, G6 = EMPTY, G7 = EMPTY, G8 = EMPTY, G9 = EMPTY;
int play;

int _tmain(int argc, _TCHAR* argv[])
{
	bool assigned;
	bool xplay = true;
	int playnumber;
	if (xplay) {
		playnumber = XS;
		cout << "En que casilla es tu jugada X: "; 
	}
	else {
		playnumber = OS;
		cout << "En que casilla es tu jugada O: "; 
	}
	cin >> play;

	do {
		assigned = true;
		switch(play)
		{
			case 1:
				if (G1 == EMPTY)
					G1 = playnumber;
				else  
					assigned = false;
				break;
			case 2:
				if (G2 == EMPTY)
					G2 = playnumber;
				else
					assigned = false;
				break;
			case 3:
				if (G3 == EMPTY)
					G3 = playnumber;
				else
					assigned = false;
				break;
			case 4:
				if (G4 == EMPTY)
					G4 = playnumber;
				else
					assigned = false;
				break;
			case 5:
				if (G5 == EMPTY)
					G5 = playnumber;
				else
					assigned = false;
				break;
			case 6:
				if (G6 == EMPTY)
					G6 = playnumber;
				else
					assigned = false;
				break;
			case 7:
				if (G7 == EMPTY)
					G7 = playnumber;
				else
					assigned = false;
				break;
			case 8:
				if (G8 == EMPTY)
					G8 = playnumber;
				else
					assigned = false;
				break;
			case 9:
				if (G9 == EMPTY)
					G9 = playnumber;
				else
					assigned = false;
				break;
			default:
				assigned = false;
				break;
		}
		if (!assigned) {
			cout << "La casilla ya esta usada o no existe, por favor ingrese otra casilla: ";
			cin >> play;
		}
	} while (!assigned);

	return 0;
}

