#include "stdafx.h" // Muss in jedes cpp sonst Compilerfehler?!
#include "Ameise.h"
#include <iostream>
//#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <stdlib.h>
//#include <time.h>
//#include <ctime> // für srandFunktion

using namespace std;

#define ZUCKER 1
#define APFEL 2
#define FREUND 3

//Konstruktor
Ameise::Ameise()
{
	Geschwindigkeit = rand() % 5 -1.0f;
	Winkel = rand() % 360 + 1; // Winkel zwischen 1 und 360°
	PosX = 20;
	PosY = 20;
	PosX_neu = PosX;
	PosY_neu = PosY;
}

//Destruktor
Ameise::~Ameise()
{

}

///<summary>
/// Wird automatisch von Beginn an aufgerufen.
/// Ameise läuft mit Random Winkel geradeaus, bis Spielfeldrand.
///</summary>
void Ameise::LaufGeradeaus(int X_max, int Y_max)
{
	
	/// So lange die Ameise innerhalb des Spielfelds läuft
	if (PosX < X_max && PosX > NULL && PosY > NULL && PosY < Y_max)
	{
		PosX_neu = PosX + Geschwindigkeit;
		PosY_neu = cos(Winkel*3.141f / 180.0f) * (PosX_neu - PosX) + PosY_neu;
	}
	
	/// Wenn Ameise an der Spielfeldgrenze x_max
	else if (PosX >= X_max)
	{
		Geschwindigkeit = -1*Geschwindigkeit;
		Winkel = Winkel + rand() % 80 + 1;
		PosX_neu = PosX + Geschwindigkeit;
		PosY_neu = cos(Winkel*3.141f / 180.0f) * (PosX_neu - PosX) + PosY;
	}

	/// Wenn Ameise an der Spielfeldgrenze NULL ist
	else if (PosX <= NULL)
	{
		Geschwindigkeit = -1*Geschwindigkeit;
		Winkel = Winkel + rand() % 80 + 1;
		PosX_neu = PosX + Geschwindigkeit;
		PosY_neu = cos(Winkel*3.141f / 180.0f) * (PosX_neu - PosX) + PosY;
	}

	/// Wenn Ameise an der Spielfeldgrenze y_max ist
	else if (PosY >= Y_max)
	{
		Winkel = Winkel + rand() % 80 + 1; //180;
		PosX_neu = PosX + Geschwindigkeit;
		PosY_neu = cos(Winkel*3.141f / 180.0f) * (PosX_neu - PosX) + PosY;
	}
	
	/// Wenn Ameise an der Spielfeldgrenze NULL ist
	else if (PosY <= NULL)
	{
		Winkel = Winkel + rand() % 80 + 1; // Zahl zwischen 1 und 80
		PosX_neu = PosX + Geschwindigkeit;
		PosY_neu = cos(Winkel*3.141f / 180.0f) * (PosX_neu - PosX) + PosY;
	}
	
	/*HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD CursorPosition;
	CursorPosition.X = PosX;
	CursorPosition.Y = PosY;
	SetConsoleCursorPosition(console, CursorPosition);*/

	//cout << '\b'; //Cursor moves 1 position backwards
	//cout << " ";  // Overwrite it

	PosX = PosX_neu;
	PosY = PosY_neu;

	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD CursorPosition;
	CursorPosition.X = PosX;
	CursorPosition.Y = PosY;
	SetConsoleCursorPosition(console, CursorPosition);

	//cout << "*";
}

void Ameise::SetPosX_Objekt(int PosX)
{
	PosX_Objekt = PosX;
}

void Ameise::SetPosY_Objekt(int PosY)
{
	PosY_Objekt = PosY;
}

///<summary>
/// Die Ameise sieht um einen bestimmten Kreis/ Abstand um sich herum.
/// Sobald ein Objekt innerhalb des Kreises ist, gilt es als entdeckt.
/// x und y sind die Abstände zum Objekt in x und y Richtung
///</summary>
int Ameise::Sehen()
{
	int x = abs(PosX_Objekt - PosX); // Abstand Objekt zur Ameise in x Richtung
	int y = abs(PosY_Objekt - PosY); // Abstand Objekt zur Ameise in y Richtung

	float Abstand = sqrt(x ^ 2 + y ^ 2); // Formel für Betrag eines Vektors
	
	if (Abstand <= 2)
	{
		return 1;
	}
	else
	{

		return 0;
	}
		
	
}/// Sehen

void Ameise::NimmZucker()
{

}

void Ameise::NimmApfel()
{

}

void Ameise::DuftstoffAussenden()
{

}

void Ameise::Angreifen()
{

}