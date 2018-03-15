/*
Grundlagen Programmierung C

Project: ConsoleApplication_03_1_2
Author:  Ruemmler, Elias
Date:    3/15/2018 3:31:51 PM
Repo:    https://github.com/rmmlr/Grundlagen_C

Praktikumsaufgabe: Nr.: 03-1.2
*/

#include <iostream>

using namespace std;

//Variablendeklaration

//Mehrwertsteuersatz (in Prozent)
float const TAX_RATE = 19;

//Anlagakapital (in Euro)
float m_Amount = 0;
//Laufzeit (in Jahren)
float m_Runtime = 0;


//Funktionen
void inputData();
float calcEndAmount(float amount);
void printData();

void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile
	// auskommentieren oder Anwendung mit Administratorrechten neu starten.
	locale::global(locale("German_germany"));


	//Variablendeklaration




	//Ausgabekopf
	cout << "Grundlagen Programmierung C" << endl;
	cout << "Praktikumsaufgabe: Nr.: 03-1.2 (Projekt: ConsoleApplication_03_1_2)" << endl << endl;



	//Work
	inputData();




	//Programmende
	cout << endl << endl;
	system("pause");
}



/// <summary>
/// Eingabe der Laufzeit und des Kapitals
/// </summary>
void inputData()
{
	cout << "Bitte Anlagekapital in Euro eingeben: ";
	cin >> m_Amount;
	cout << endl;

	cout << "Bitte Laufzeit in Jahren eingeben: ";
	cin >> m_Runtime;
	cout << endl;

}

/// <summary>
/// Berechnung des Endkapitals
/// </summary>
/// <param name="rate">Zinssatz</param>
/// <returns>Endkapital</returns>
float calcEndAmount(float rate)
{
	return 0;
}

/// <summary>
/// Ausgabe des Zinssatzes, der Laufzeit, des Kapitals und des Endkapitals
/// </summary>
void printData()
{
	cout << "" << endl;
}
