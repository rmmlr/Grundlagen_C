#include <iostream>

using namespace std;


void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile
	// auskommentieren oder Anwendung mit Administratorrechten neu starten.
	locale::global(locale("German_germany"));

	//Alter in Jahren
	float age = 0;

	//Disziplin: 1 - Weitsprung; 2 - Hochsprung; 3 - 100-m-Lauf
	int discipline = 0;

	//Startzeit (volle Stunde)
	int startTime = 0;

	//Altersklasse: 1 - 16-20 Jahre; 2 - 21-25 Jahre
	int ageClass = 1;


	//Work
	cout << "Praktikumsaufgabe: Nr.: 02-3.2 (WETTKAMPF)" << endl;
	cout << endl;

	cout << "Bitte Alter in Jahren eingeben: ";
	cin >> age;
	cout << endl;

	if (age < 16 || age > 25)
	{
		cout << "Teilnahme nur für Personen im Alter von 16 bis 25 Jahren." << endl;
		cout << endl;
		system("pause");
		return;
	}

	cout << "Bitte Disziplin auswählen" << endl;
	cout << "1: Weitsprung" << endl;
	cout << "2: Hochsprung" << endl;
	cout << "3: 100-m-Lauf" << endl;
	cout << "Eingabe: ";
	cin >> discipline;
	cout << endl;
	cout << endl;

	switch (discipline)
		{
		case 1:
			startTime = 12;
			break;
		case 2:
			startTime = 14;
			break;
		case 3:
			startTime = 16;
			break;
		default:
			cout << "Fehlerhafte Eingabe, der Zahl '" << discipline << "' ist keine Disziplin zugeordnet." << endl;
			cout << endl;
			system("pause");
			return;
		}

	if (age > 20)
	{
		ageClass++;
		startTime++;
	}

	cout << "Start in Altersklasse " << ageClass << " um " << startTime << ":00 Uhr" << endl;
	

	cout << endl;
	system("pause");
}