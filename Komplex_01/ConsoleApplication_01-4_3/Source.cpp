/*
Grundlagen Programmierung C

Project: ConsoleApplication_01_4_3
Author:  rue3eh
Date:    14/5/2018 10:04:23 AM
Repo:    https://github.com/rmmlr/Grundlagen_C

Praktikumsaufgabe: Nr.: 01-4.3
*/

#include <iostream> //Präprozessor-Anweisungen zum Einbinden des Standard-Header für das Arbeiten mit Input- und Output Streams (z.B. cin, cout).

using namespace std;

//Globale Ergebnis-Daten
double Euro[10];
double Dm[10];

//Deklaration Unterprogramme
double Input();
void Processing(double startAmount, double stepWidth, double rate);
void Output(char description[]);

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
	cout << "Praktikumsaufgabe: Nr.: 01-4.3 (Projekt: ConsoleApplication_01_4_3)" << endl << endl;



	//Work
	cout << "Umtauschkurs: 1 EURO = " << RATE << " DM" << endl;

	amountEuro = Input(); //Aufruf des Unterprogrammes "Input", Rückgabewert wird in der Variable "amountEuro" gespeichert

	//Aufgabenteil a)
	Processing(amountEuro, 1, RATE); //Aufruf des Unterprogrammes "Processing", mit entsprechenden Übergabeparametern
	Output("a)"); //Aufruf des Unterprogrammes "Output", mit Aufgabennummer als Übergabeparameter

	//Aufgabenteil b)
	Processing(amountEuro, 2, RATE);
	Output("b)");

	//Programmende
	cout << endl << endl;
	system("pause");
} //Ende der Hauptfunktion (main-Funktion)

double Input()
{
	double startValue;

	cout << "Anfangswert EURO (e.cc?): ";
	cin >> startValue;

	return startValue;
}

void Processing(double startAmount, double stepWidth, double rate)
{
	for (int i = 0; i < 10; i++) //Schleife zur Berechnung von 10 Werten
	{
		Euro[i] = startAmount + stepWidth * i; //Berechnung des aktuellen Euro-Wertes, Speichern im Array (euro) unter aktuellen Index (i)
		Dm[i] = Euro[i] * rate; //Berechnung des aktuellen DM-Wertes, Speichern im Array (dm) unter aktuellen Index (i)
	}
}

void Output(char description[])
{
	cout << endl << description << endl; //Ausgabe der Aufgabennummer
	cout << "EURO\tDM" << endl; //Ausgabe Spaltennamen (Euro und DM)
	for (int i = 0; i < 10; i++) //Schleife zur Ausgabe von 10 Werten
	{
		cout << Euro[i] << "\t" << Dm[i] << endl; //Ausgabe von aktuellen Euro- und DM-Wert (zu Index i, aus den Daten-Arrays)
	}
}