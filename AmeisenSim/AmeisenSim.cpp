// AmeisenSim.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "Ameise.h"
#include "Lebensmittel.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//#include <time.h>
#include <ctime>
#include <windows.h>

#define ANZAHL_VOLK 20
#define X_MAX 60
#define Y_MAX 30
#define ZUCKER 1

using namespace std;

void Draw();

int main()
{
	srand(time(NULL));
	Lebensmittel Zucker (ZUCKER);
	Ameise ameise[ANZAHL_VOLK];

	while(1)
	{
		int m_PosX;
		int m_PosY;

		for (int i = 0; i < ANZAHL_VOLK; i++)
		{
			ameise[i].LaufGeradeaus(X_MAX, Y_MAX);
			//ameise->SetPosX_Objekt(Zucker.getPosX());
			//ameise->SetPosY_Objekt(Zucker.getPosY());
			//ameise[i].Sehen();

			Draw();

		}
		Sleep(200);
		system("cls");
	}

	return 0;
}

void Draw()
{
	cout << "*";
}