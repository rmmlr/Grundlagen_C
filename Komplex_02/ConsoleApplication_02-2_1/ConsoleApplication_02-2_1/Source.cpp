#include <iostream>

using namespace std;


void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile
	// auskommentieren oder Anwendung mit Administratorrechten neu starten.
	locale::global(locale("German_germany"));

	//Laufzeit in vollen Jahren
	int runtime = 0;

	//Kapital
	float amount = 0;

	//Zinssatz in Prozent
	float rate = 4;

	//Endkapital in Euro
	float finalAmount = 0;

	//Work
	cout << "Praktikumsaufgabe: Nr.: 02-2.1" << endl;
	cout << endl;

	cout << "Bitte Kapital in Euro eingeben: ";
	cin >> amount;
	cout << endl;

	cout << "Bitte Laufzeit in vollen Jahren eingeben: ";
	cin >> runtime;
	cout << endl;
	cout << endl;

	if (runtime > 4 || amount > 1000)
		rate = 6;

	//Iterative Zinsberechnung p.a.
	finalAmount = amount;
	for (int i = 0; i < runtime; i++)
		finalAmount += finalAmount * rate / 100;

	cout << "Anlagedetails" << endl;
	cout << "Zinssatz:\t" << rate << " \x89 p.a." << endl;
	cout << "Laufzeit:\t" << runtime << " Jahre" << endl;
	cout << "Kapital:\t" << amount << " Euro" << endl;
	cout << "Endkapital:\t" << finalAmount << " Euro" << endl;


	cout << endl;
	system("pause");
}