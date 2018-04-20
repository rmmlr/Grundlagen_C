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

//Startkapital (in Euro)
float m_Amount = 0;
//Laufzeit (in Jahren)
float m_Runtime = 0;


//Funktionen
void inputData();
float calcEndAmount(float amount);
void printData(float rate, float runtime, float amount, float endAmount);

void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile
	// auskommentieren oder Anwendung mit Administratorrechten neu starten.
	locale::global(locale("German_germany"));


	//Variablendeklaration

	//Zinssatz (in Prozent)
	float rate = 3.5;

	//Endbetrag
	float endAmount = 0;

	//Ausgabekopf
	cout << "Grundlagen Programmierung C" << endl;
	cout << "Praktikumsaufgabe: Nr.: 03-1.2 (Projekt: ConsoleApplication_03_1_2)" << endl << endl;



	//Work
	inputData();

	if (m_Amount > 10000 || m_Runtime > 4)
		rate = 5;

	endAmount = calcEndAmount(rate);

	printData(rate, m_Runtime, m_Amount, endAmount);

	//Programmende
	cout << endl << endl;
	system("pause");
}



/// <summary>
/// Eingabe der Laufzeit und des Kapitals
/// </summary>
void inputData()
{
	cout << "Bitte Startkapital in Euro eingeben: ";
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
	float endAmount = m_Amount;

	//Iterative Zinsberechnung p.a.
	for (int i = 0; i < m_Runtime; i++)
		endAmount += endAmount * rate / 100;

	return endAmount;
}

/// <summary>
/// Ausgabe des Zinssatzes, der Laufzeit, des Kapitals und des Endkapitals
/// </summary>
/// <param name="rate">Zinssatz (in Prozent)</param>
/// <param name="runtime">Laufzeit (in Jahren)</param>
/// <param name="amount">Startkapital (in Euro)</param>
/// <param name="endAmount">Endkapital (in Euro)</param>
void printData(float rate, float runtime, float amount, float endAmount)
{
	cout << "Mit einem Startkapital von " << amount << " Euro, lässt sich bei einem Zinssatz von "<< rate <<
		" % p.a. in " << runtime << " Jahren ein Endkapital von " << endAmount << " Euro generieren." << endl;
	
	cout << "" << endl;
}
