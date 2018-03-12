#include <iostream>

using namespace std;

void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile
	// auskommentieren oder Anwendung mit Administratorrechten neu starten.
	//locale::global(locale("German_germany"));


	//Variablendeklaration
	long amount = 1000;
	long target = 10000;
	float rate = 0;
	int years = 0;

	//Work
	cout << "Praktikumsaufgabe: Nr.: 02-6.2" << endl;
	cout << endl;

	cout << "Aufgabe 1." << endl;
	cout << endl;
	cout << "Bitte Zinssatz in Prozent eingeben: ";
	cin >> rate;
	cout << endl;
	cout << endl;
	do
	{
		amount *= 1 + ((float)rate / 100); //Betrag um Faktor erhöhen
		years++;
	} while (amount < target);

	cout << "Nach " << years << " Jahren beträgt das Kapital " << amount << " Euro" << endl;
	cout << endl;


	cout << endl;
	system("pause");
}