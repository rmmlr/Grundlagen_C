/*
Grundlagen Programmierung C

Project: ConsoleApplication_01_4
Author:  rue3eh
Date:    4/5/2018 11:20:14 AM
Repo:    https://github.com/rmmlr/Grundlagen_C

Praktikumsaufgabe: Nr.: 01-4
*/

#include <iostream> //Präprozessor-Anweisungen zum Einbinden des Standard-Header für das Arbeiten mit Input- und Output Streams (z.B. cin, cout).

using namespace std;

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
	cout << "Praktikumsaufgabe: Nr.: 01-4 (Projekt: ConsoleApplication_01_4)" << endl << endl;



	//Work
	cout << "Umtauschkurs: 1 EURO = " << RATE << " DM" << endl;

	cout << "Anfangswert EURO (e.cc?): ";
	cin >> amountEuro;

	cout << "Schrittweite (e?): "; //Ausgabe eines String an der aktuellen Cursor-Position
	cin >> stepWidth; //Einlesen des eingegebenen String, ab der aktuellen Cursor-Position. Der String wird implizit Konvertiert und in der Integer-Variable "stepWidth" abgelegt

	cout << endl;

	amountDm = amountEuro * RATE; //Der Double-Variable "amountDm" wird ein neuer Wert zugewisen, dieser wird berechnet durch Multiplikation der Variable "amountEuro" und der Konstante "RATE"
	cout << amountEuro << " EURO = " << amountDm << " DM" << endl; //Ausgabe eines zusammengesetzten String einschließlich Zeilenumbruch (endl). Der String setzt sich aus den Variablen "amountEuro", "amountDm" und den beiden vorgegebenen Strings (von "-Zeichen eingefasst) zusammen.

	amountEuro += stepWidth; //Die Variable "amountEuro" wird um den Wert der Variable "stepWidth" inkrementiert (erhöht).
	amountDm = amountEuro * RATE;
	cout << amountEuro << " EURO = " << amountDm << " DM\n";

	amountEuro += stepWidth;
	amountDm = amountEuro * RATE;
	cout << amountEuro << " EURO = " << amountDm << " DM\n";



	//Programmende
	cout << endl << endl;
	system("pause");
} //Ende der Hauptfunktion (main-Funktion)