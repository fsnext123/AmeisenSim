#pragma once
class Lebensmittel
{
public:
	// Eigenschaften
	int Gewicht;
	int PosX;
	int PosY;
	int Art;

	// Get Funktionen, damit die Variablen in anderen Klassen verwendet werden k�nnen.
	int getPosX();
	int getPosY();
	
	// F�higkeiten
	//float GetPosX();	// Position �ndert sich wenn Ameise tr�gt
	//float GetPosY();	// Position �ndert sich wenn Ameise tr�gt

	// Erzeugen und l�schen
	Lebensmittel(int Welches);
	~Lebensmittel();

private:

};