#include <iostream>

using namespace std;

void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile
	// auskommentieren oder Anwendung mit Administratorrechten neu starten.
	//locale::global(locale("German_germany"));


	//Variablendeklaration
	long population = 40000;
	long limit = 70000;
	int rate = 4;
	int years = 0;

	//Work
	cout << "Praktikumsaufgabe: Nr.: 02-6.1" << endl;
	cout << endl;

	cout << "Aufgabe 1." << endl;
	cout << endl;
	do
	{
		population *= 1 + ((float)4 / 100); //Population um Faktor (1,04) erhöhen
		years++;
	} while (population < limit);

	cout << "Nach " << years << " Jahren beträgt die Einwohnerzahl " << population << endl;
	cout << endl;

	cout << "Aufgabe 2." << endl;
	cout << endl;
	population = 40000;
	years = 0;
	do
	{
		population *= 1 + ((float)4 / 100); //Population um Faktor (1,04) erhöhen
		years++;
		cout << "Die Einwohnerzahl nach dem " << years << ". Jahr beträgt " << population << endl;
	} while (population < limit);
	cout << endl;

	cout << endl;
	system("pause");
}