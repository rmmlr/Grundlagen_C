#include <iostream>

using namespace std;


void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile
	// auskommentieren oder Anwendung mit Administratorrechten neu starten.
	locale::global(locale("German_germany"));

	// Ausgabe der Dezimalstellen für Double verhindern (es werden 0 Nachkommastellen angezeigt)
	std::cout.precision(0);

	// Ausgabe von Zahlen auf "Fixed" stellen, große Zahlen werden ansonsten im Wissenschaftlichen Format ausgegeben
	// Einstellung wirkt sich auf alle folgenden Ausgaben per "cout" aus
	cout << fixed;

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
	
	long double result = 1;

	if (inputValue < 1 || inputValue > 30)
		cout << "Eingegebener Wert '" << inputValue << "' nicht im zulässigen Bereich" << endl;
	else
	{
		for (int i = 1; i <= inputValue; i++)
			result = result * i; //result *= i;

		cout << "Die Fakultät für " << inputValue << " beträgt: " << result << endl;
	}
	cout << endl;
	cout << endl;

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