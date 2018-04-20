#include <iostream>

using namespace std;


void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile
	// auskommentieren oder Anwendung mit Administratorrechten neu starten.
	locale::global(locale("German_germany"));

	//1. Operand
	float a = 0;

	//2. Operand
	float b = 0;

	//Rechenfunktion
	char function;

	//Ergebnis
	float result = 0;

	//Anwort der Wiederholungsfrage
	char ans;

	//Work
	cout << "Praktikumsaufgabe: Nr.: 02-3.1" << endl;

	do
	{
		cout << endl;
	
		cout << "Bitte ersten Operanden eingeben: ";
		cin >> a;
		cout << endl;

		cout << "Bitte Rechenfunktion (+, -, *, /) eingeben: ";
		cin >> function;
		cout << endl;

		cout << "Bitte zweiten Operanden eingeben: ";
		cin >> b;
		cout << endl;
		cout << endl;

		if (function == '/' && b == 0)
			cout << "Division durch 0 nicht möglich!" << endl;
		else
		{
			switch (function)
			{
			case '+':
				result = a + b;
				break;
			case '-':
				result = a - b;
				break;
			case '*':
			case 'x':
				result = a * b;
				break;
			case '/':
				result = a / b;
				break;
			default:
				cout << "Die eingegebene Rechenfunktion '" << function << "' wird nicht unterstützt." << endl;
				cout << endl;
				system("pause");
				return;
			}

			cout << "Ergebnis:" << endl;
			cout << a << " " << function << " " << b << " = " << result << endl;

			cout << "Soll noch eine Aufgabe gerechnet werden? (J/N)" << endl;
			cin >> ans;
		}
	} while ((ans == 'J' || ans == 'j'));

	cout << endl;
	system("pause");
}