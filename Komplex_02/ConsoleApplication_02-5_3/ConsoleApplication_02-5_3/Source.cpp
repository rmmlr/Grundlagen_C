#include <iostream>

using namespace std;

void lotto(int a, int b);
double faculty(int n);

void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile
	// auskommentieren oder Anwendung mit Administratorrechten neu starten.
	locale::global(locale("German_germany"));


	//Variablendeklaration



	//Work
	cout << "Praktikumsaufgabe: Nr.: 02-5.3" << endl;
	cout << endl;

	cout << "Aufgabe 1. a)" << endl;
	cout << endl;
	lotto(5, 35);

	cout << "Aufgabe 1. b)" << endl;
	cout << endl;
	lotto(6, 49);

	cout << endl;
	system("pause");
}

void lotto(int selection, int count)
{
	double result = faculty(count) / (faculty(selection) * faculty(count-selection));

	cout << "Lotto " << selection << " aus " << count << endl;
	cout << "Die Wahrscheinlichkeit für " << selection << " Richtige beträgt: 1 zu " << result << endl;
	cout << endl;
}

double faculty(int n)
{
	long double result = 1;
	for (int i = 1; i <= n; i++)
		result *= i;

	return result;
}