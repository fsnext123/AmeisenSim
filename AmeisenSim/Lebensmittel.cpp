#include "stdafx.h"
#include "Lebensmittel.h"
#include <iostream>
#include <windows.h>

using namespace std;

Lebensmittel::Lebensmittel(int Welches)
{
	Art = Welches; /// Zucker, Apfel, ...
	PosX = 30;
	PosY = 30;
}

Lebensmittel::~Lebensmittel()
{

}

int Lebensmittel::getPosX()
{
	return PosX;
}

int Lebensmittel::getPosY()
{
	return PosY;
}