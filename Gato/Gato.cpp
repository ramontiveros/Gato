// Gato.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "constants.h"
#include "globals.h"
#include "dashboard.h"

using namespace std;
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
	if(play >= 1 && play <= 9) { 
		if (dashboard[play-1] == EMPTY) {
			dashboard[play-1] = getPlayNumber();
			return true;
		} else 
			cout << "La casilla " << play << " ya esta ocupada. ";
			return false;
	} else {
		cout << "El numero " << play << " no es parte del tablero de juego. ";
		return false;
	}
}

bool win(int player)
{
	for(int i=0;i<8;i++) {
		bool test = true;
		for(int j=0;j<3;j++)
			test = test && (dashboard[wins[i][j]] == player);
		if (test)
			return true;
	}
	return false;
}

bool tie()
{
	for(int i=0; i<9; i++) 
		if(dashboard[i] == EMPTY)
			return false;
	return true;
}

int _tmain(int argc, _TCHAR* argv[])
{
	print();
	while(!(win(XS) || win(OS) || tie())) {
		while (!assignPlay(requestPlay()));
		xplay = !xplay;
		if (win(XS))
			cout << "Felicidades x a gando. Weeee!!" << endl;
		if (win(OS))
			cout << "Felicidades o a gando. Weeee!!" << endl;
		if (!win(XS) && !win(OS) && tie())
			cout << "Juego empatado" << endl;
		print();
	}
	return 0;
}
