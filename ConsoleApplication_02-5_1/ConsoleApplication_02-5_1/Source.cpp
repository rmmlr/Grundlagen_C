#include <iostream>

using namespace std;


void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile
	// auskommentieren oder Anwendung mit Administratorrechten neu starten.
	locale::global(locale("German_germany"));


	//Variablendeklaration


	//Work
	cout << "Praktikumsaufgabe: Nr.: 02-5.1" << endl;
	cout << endl;


	cout << "Aufgabe 1. a)" << endl;
	cout << endl;
	int result = 0;
	for (int i = 1; i <= 100; i++)
	{
		result += i;
		cout << result << "; ";
	}
	cout << endl;
	cout << endl;

	cout << "Aufgabe 1. b)" << endl;
	cout << endl;
	result = 0;
	for (int i = 100; i >= 1; i--)
	{
		result += i;
		cout << result << "; ";
	}
	cout << endl;
	cout << endl;


	cout << "Aufgabe 2." << endl;
	cout << endl;

	int value = 1000;

	for (int i = 1; i <= 100; i++)
		value -= i;

	cout << "Die Endsumme beträgt: " << value << endl;
	cout << endl;

	cout << endl;
	system("pause");
}