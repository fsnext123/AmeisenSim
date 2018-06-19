#pragma once
class Lebensmittel
{
public:
	// Eigenschaften
	int Gewicht;
	int PosX;
	int PosY;
	int Art;

	// Get Funktionen, damit die Variablen in anderen Klassen verwendet werden können.
	int getPosX();
	int getPosY();
	
	// Fähigkeiten
	//float GetPosX();	// Position ändert sich wenn Ameise trägt
	//float GetPosY();	// Position ändert sich wenn Ameise trägt

	// Erzeugen und löschen
	Lebensmittel(int Welches);
	~Lebensmittel();

private:

};