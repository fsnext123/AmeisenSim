#pragma once
class Ameise
{
public:
	// Eigenschaften
	int Lebenspunkte;
	int Angriffspunkte;
	int Tragekapazität;
	int Kaste;				// Angreifer, Sammler, ...
	float Geschwindigkeit;	// Langsamer wenn z.B. beladen
	int Winkel;
	int PosX;
	int PosY;
	float PosX_neu;
	float PosY_neu;
	int Sichtbereich;		// Bereich in dem Lebensmittel und Gegner erkannt werden.
	int PosX_Objekt;
	int PosY_Objekt;

	// Fähigkeiten
	virtual void LaufGeradeaus(int X_max, int Y_max);
	virtual int Sehen();
	virtual void NimmZucker();
	virtual void NimmApfel();
	virtual void DuftstoffAussenden();
	virtual void Angreifen();
	void SetPosX_Objekt(int PosX);
	void SetPosY_Objekt(int PosY);

	/*virtual void RiechtFreund();
	virtual void SiehtFreund();*/
	// Erzeugen und löschen
	Ameise();
	virtual ~Ameise();

private:

};