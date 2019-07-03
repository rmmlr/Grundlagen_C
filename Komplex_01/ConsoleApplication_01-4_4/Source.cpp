/*
Grundlagen Programmierung C

Project: ConsoleApplication_01_4_4
Author:  rue3eh
Date:    3/7/2019 11:55:38 AM
Repo:    https://github.com/rmmlr/Grundlagen_C

Praktikumsaufgabe: Nr.: 01-4.4
*/

#include <iostream> //Präprozessor-Anweisungen zum Einbinden des Standard-Header für das Arbeiten mit Input- und Output Streams (z.B. cin, cout).

using namespace std;

//Globale Ergebnis-Daten
double EuroA[10];
double DmA[10];
double EuroB[10];
double DmB[10];

//Deklaration Unterprogramme
double Input();
void ProcessingA(double startAmount, double rate);
void ProcessingB(double startAmount, double rate);
void OutputA();
void OutputB();

void main(void) //"main" Qualifiziert den Programmeinstiegspunkt, auch aus Hauptfunktion benennbar.
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile
	// auskommentieren oder Anwendung mit Administratorrechten neu starten.
	locale::global(locale("German_germany"));


	//Variablendeklaration
	const double RATE = 1.95583; //Deklaration einer Konstatnte mit dem Name "RATE" vom Typ Double.
	double amountDm, amountEuro;
	int stepWidth; //Deklaration einer Variable mit dem Name "stepWidth" vom Typ Integer.



	//Ausgabekopf
	cout << "Grundlagen Programmierung C" << endl;
	cout << "Praktikumsaufgabe: Nr.: 01-4.4 (Projekt: ConsoleApplication_01_4_4)" << endl << endl;



	//Work
	cout << "Umtauschkurs: 1 EURO = " << RATE << " DM" << endl;

	bool retry = false;
	do
	{
		amountEuro = Input(); //Aufruf des Unterprogrammes "Input", Rückgabewert wird in der Variable "amountEuro" gespeichert

		//Aufgabenteil a)
		ProcessingA(amountEuro, RATE); //Aufruf des Unterprogrammes "Processing", mit entsprechenden Übergabeparametern
		OutputA(); //Aufruf des Unterprogrammes "Output", mit Aufgabennummer als Übergabeparameter

		//Aufgabenteil b)
		ProcessingB(amountEuro, RATE);
		OutputB();

		cout << endl << endl;

		//Noch eine Berechnung?
		char input;
		cout << "Neue Berechnung starten? (Y/N)";
		cin >> input;
		if (input == 'Y' || input == 'y')
		{
			retry = true;
			cout << endl << endl;
		}
	} while (retry);
} //Ende der Hauptfunktion (main-Funktion)

double Input()
{
	double startValue;

	cout << "Anfangswert EURO (e.cc?): ";
	cin >> startValue;

	return startValue;
}

void ProcessingA(double startAmount, double rate)
{
	for (int i = 0; i < 10; i++) //Schleife zur Berechnung von 10 Werten
	{
		EuroA[i] = startAmount + 1 * i; //Berechnung des aktuellen Euro-Wertes, Speichern im Array (euro) unter aktuellen Index (i)
		DmA[i] = EuroA[i] * rate; //Berechnung des aktuellen DM-Wertes, Speichern im Array (dm) unter aktuellen Index (i)
	}
}

void ProcessingB(double startAmount, double rate)
{
	for (int i = 0; i < 10; i++) //Schleife zur Berechnung von 10 Werten
	{
		EuroB[i] = startAmount + 2 * i; //Berechnung des aktuellen Euro-Wertes, Speichern im Array (euro) unter aktuellen Index (i)
		DmB[i] = EuroB[i] * rate; //Berechnung des aktuellen DM-Wertes, Speichern im Array (dm) unter aktuellen Index (i)
	}
}

void OutputA()
{
	cout << endl << "a)" << endl; //Ausgabe der Aufgabennummer
	cout << "EURO\tDM" << endl; //Ausgabe Spaltennamen (Euro und DM)
	for (int i = 0; i < 10; i++) //Schleife zur Ausgabe von 10 Werten
	{
		cout << EuroA[i] << "\t" << DmA[i] << endl; //Ausgabe von aktuellen Euro- und DM-Wert (zu Index i, aus den Daten-Arrays)
	}
}

void OutputB()
{
	cout << endl << "b)" << endl; //Ausgabe der Aufgabennummer
	cout << "EURO\tDM" << endl; //Ausgabe Spaltennamen (Euro und DM)
	for (int i = 0; i < 10; i++) //Schleife zur Ausgabe von 10 Werten
	{
		cout << EuroB[i] << "\t" << DmB[i] << endl; //Ausgabe von aktuellen Euro- und DM-Wert (zu Index i, aus den Daten-Arrays)
	}
}