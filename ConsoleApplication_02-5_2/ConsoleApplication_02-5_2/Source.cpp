#include <iostream>

using namespace std;


void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile
	// auskommentieren oder Anwendung mit Administratorrechten neu starten.
	locale::global(locale("German_germany"));


	//Variablendeklaration
	//Eingabewert (1 - 30)
	int inputValue = 0;

	//Work
	cout << "Praktikumsaufgabe: Nr.: 02-5.2" << endl;
	cout << endl;


	cout << "Aufgabe 1." << endl;
	cout << endl;
	cout << "Bitte Integer-Wert zwischen 1 und 30 eingeben: ";
	cin >> inputValue;
	cout << endl;
	if (inputValue < 1 || inputValue > 30)
		cout << "Eingegebener Wert '" << inputValue << "' nicht im zulässigen Bereich" << endl;
	cout << endl;
	cout << endl;

	long double result = 1;
	for (int i = 1; i <= inputValue; i++)
		result *= i;

	cout << "Die Fakultät für " << inputValue << " beträgt: " << result << endl;;

	cout << "Aufgabe 2." << endl;
	cout << endl;
	result = 1;
	for (int i = 1; i <= 32; i++)
	{
		result *= i;
		cout << i << "! = " << result << endl;
	}

	cout << endl;
	system("pause");
}