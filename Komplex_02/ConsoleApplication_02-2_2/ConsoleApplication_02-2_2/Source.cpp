#include <iostream>

using namespace std;


void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile
	// auskommentieren oder Anwendung mit Administratorrechten neu starten.
	locale::global(locale("German_germany"));

	//Betrag (Auftragswert)
	float amount = 0;

	//Rabatt in Prozent
	float discount = 2;

	//Endbetrag in Euro
	float finalAmount = 0;

	//Work
	cout << "Praktikumsaufgabe: Nr.: 02-2.2" << endl;
	cout << endl;

	cout << "Bitte Betrag (Auftragswert) in Euro eingeben: ";
	cin >> amount;
	cout << endl;
	cout << endl;

	if (amount > 1000)
		discount = 4;
	else if (amount > 10000)
		discount = 5;

	
	cout << "Auftragsdetails" << endl;
	cout << "Betrag:\t\t" << amount << " Euro" << endl;
	cout << "Rabat:\t\t" << discount << " \x89" << endl;
	cout << "Endbetrag:\t" << amount * (100 - discount) / 100 << " Euro" << endl;


	cout << endl;
	system("pause");
}