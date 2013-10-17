// Gato.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const int EMPTY = 0;
const int OS = 1;
const int XS = 2;

int G1 = EMPTY, G2 = EMPTY, G3 = EMPTY, G4 = EMPTY, G5 = EMPTY, G6 = EMPTY, G7 = EMPTY, G8 = EMPTY, G9 = EMPTY;
bool xplay = true;

int requestPlay()
{
	int play;
	if (xplay) 
		cout << "En que casilla es tu jugada X: ";
	else 
		cout << "En que casilla es tu jugada O: "; 
	cin >> play;
	return play;
}

int getPlayNumber()
{
	if (xplay)
		return XS;
	else
		return OS;
}

bool assignPlay(int play)
{
	switch(play)
	{
		case 1:
			if (G1 == EMPTY) {
				G1 = getPlayNumber();
				return true;
			}
			break;
		case 2:
			if (G2 == EMPTY) {
				G2 = getPlayNumber();
				return true;
			};
			break;
		case 3:
			if (G3 == EMPTY) {
				G3 = getPlayNumber();
				return true;
			}
			break;
		case 4:
			if (G4 == EMPTY) {
				G4 = getPlayNumber();
				return true;
			}
			break;
		case 5:
			if (G5 == EMPTY) {
				G5 = getPlayNumber();
				return true;
			}
			break;
		case 6:
			if (G6 == EMPTY) {
				G6 = getPlayNumber();
				return true;
			}
			break;
		case 7:
			if (G7 == EMPTY) {
				G7 = getPlayNumber();
				return true;
			}
			break;
		case 8:
			if (G8 == EMPTY) {
				G8 = getPlayNumber();
				return true;
			}
			break;
		case 9:
			if (G9 == EMPTY) {
				G9 = getPlayNumber();
				return true;
			}
			break;
		default:
			cout << "El numero " << play << " no es parte del tablero de juego";
			return false;
			break;
	}
	return false;
}


bool xwin()
{
	return (G1 == XS && G2 == XS && G3 == XS) || (G4 == XS && G5 == XS && G6 == XS) || (G7 == XS && G8 == XS && G9 == XS) || (G1 == XS && G5 == XS && G7 == XS) || (G2 == XS && G5 == XS && G8 == XS) || (G3 == XS && G6 == XS && G9 == XS) || (G1 == XS && G5 == XS && G9 == XS) || (G3 == XS && G5 == XS && G7 == XS);
}

bool owin()
{
	return (G1 == OS && G2 == OS && G3 == OS) || (G4 == OS && G5 == OS && G6 == OS) || (G7 == OS && G8 == OS && G9 == OS) || (G1 == OS && G5 == OS && G7 == OS) || (G2 == OS && G5 == OS && G8 == OS) || (G3 == OS && G6 == OS && G9 == OS) || (G1 == OS && G5 == OS && G9 == OS) || (G3 == OS && G5 == OS && G7 == OS);
}

bool tie()
{
	return (G1 != EMPTY && G2 != EMPTY && G3 != EMPTY && G4 != EMPTY && G5 != EMPTY && G6 != EMPTY && G7 != EMPTY && G8 != EMPTY && G9 != EMPTY);
}

int _tmain(int argc, _TCHAR* argv[])
{	
	while(!(xwin() || owin() || tie())) {
		while (!assignPlay(requestPlay()));
		xplay = !xplay;
		if (xwin())
			cout << "Felicidades x a gando. Weeee!!" << endl;
		if (owin())
			cout << "Felicidades o a gando. Weeee!!" << endl;
		if (tie())
			cout << "Juego empatado";
	}
	return 0;
}
