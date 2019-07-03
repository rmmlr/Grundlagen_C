/*
Grundlagen Programmierung C

Project: ConsoleApplication_01_4_2
Author:  rue3eh
Date:    14/5/2018 03:07:56 AM
Repo:    https://github.com/rmmlr/Grundlagen_C

Praktikumsaufgabe: Nr.: 01-4.2
*/

#include <iostream> //Präprozessor-Anweisungen zum Einbinden des Standard-Header für das Arbeiten mit Input- und Output Streams (z.B. cin, cout).

using namespace std;

//Globale Ergebnis-Daten
double Euro[10];
double Dm[10];

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
	cout << "Praktikumsaufgabe: Nr.: 01-4.2 (Projekt: ConsoleApplication_01_4_2)" << endl << endl;



	//Work
	cout << "Umtauschkurs: 1 EURO = " << RATE << " DM" << endl;

	cout << "Anfangswert EURO (e.cc?): ";
	cin >> amountEuro;

	//Aufgabenteil a)
	cout << endl << "a)" << endl;
	stepWidth = 1;

	cout << "EURO\tDM" << endl; //Ausgabe Spaltennamen (Euro und DM)
	for (int i = 0; i < 10; i++) //Schleife zur Berechnung von 10 Werten
	{
		Euro[i] = amountEuro + stepWidth * i; //Berechnung des aktuellen Euro-Wertes, Speichern im Array (euro) unter aktuellen Index (i)
		Dm[i] = Euro[i] * RATE; //Berechnung des aktuellen DM-Wertes, Speichern im Array (dm) unter aktuellen Index (i)

		cout << Euro[i] << "\t" << Dm[i] << endl; //Ausgabe von aktuellen Euro- und DM-Wert
	}

	//Aufgabenteil b)
	cout << endl << "b)" << endl;
	stepWidth = 2;

	cout << "EURO\tDM" << endl;
	for (int i = 0; i < 10; i++)
	{
		Euro[i] = amountEuro + stepWidth * i;
		Dm[i] = Euro[i] * RATE;

		cout << Euro[i] << "\t" << Dm[i] << endl;
	}

	//amountDm = amountEuro * RATE; //Der Double-Variable "amountDm" wird ein neuer Wert zugewisen, dieser wird berechnet durch Multiplikation der Variable "amountEuro" und der Konstante "RATE"
	//cout << amountEuro << " EURO = " << amountDm << " DM" << endl; //Ausgabe eines zusammengesetzten String einschließlich Zeilenumbruch (endl). Der String setzt sich aus den Variablen "amountEuro", "amountDm" und den beiden vorgegebenen Strings (von "-Zeichen eingefasst) zusammen.

	//amountEuro += stepWidth; //Die Variable "amountEuro" wird um den Wert der Variable "stepWidth" inkrementiert (erhöht).
	//amountDm = amountEuro * RATE;
	//cout << amountEuro << " EURO = " << amountDm << " DM\n";


	//Programmende
	cout << endl << endl;
	//system("pause");
} //Ende der Hauptfunktion (main-Funktion)