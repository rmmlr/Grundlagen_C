/*
Grundlagen Programmierung C

Project: ConsoleApplication_03_1_1
Author:  Ruemmler, Elias
Date:    3/15/2018 3:01:51 PM
Repo:    https://github.com/rmmlr/Grundlagen_C

Praktikumsaufgabe: Nr.: 03-1.1
*/

#include <iostream>

using namespace std;

//Variablendeklaration

//Mehrwertsteuersatz (in Prozent)
float const TAX_RATE = 19;


//Funktionen
float inputAmount();
float calcAmount(float amount);
void outputAmount(float amount);

void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile
	// auskommentieren oder Anwendung mit Administratorrechten neu starten.
	locale::global(locale("German_germany"));


	//Variablendeklaration

	//Eingegebener Betrag (Netto)
	float inAmount = 0;
	//Ausgabebetrag (Brutto)
	float outAmount = 0;



	//Ausgabekopf
	cout << "Grundlagen Programmierung C" << endl;
	cout << "Praktikumsaufgabe: Nr.: 03-1.1 (Projekt: ConsoleApplication_03_1_1)" << endl << endl;



	//Work
	inAmount = inputAmount();

	outAmount = calcAmount(inAmount);

	outputAmount(outAmount);


	//Programmende
	cout << endl << endl;
	system("pause");
}



/// <summary>
/// Eingabe des Nettobetrages
/// </summary>
/// <returns>Nettobetrag</returns>
float inputAmount()
{
	float amount = 0;
	cout << "Bitte Nettobetrag in Euro eingeben: ";
	cin >> amount;
	cout << endl;

	return amount;
}

/// <summary>
/// Berechnung des Bruttobetrages
/// </summary>
/// <param name="amount">Nettobetrag</param>
/// <returns>Bruttobetrag</returns>
float calcAmount(float amount)
{
	float outAmount = amount * (1 + (TAX_RATE / 100));

	return outAmount;
}

/// <summary>
/// Ausgabe des Bruttobetrages
/// </summary>
/// <param name="amount">Bruttobetrag</param>
void outputAmount(float amount)
{
	cout << "Der Bruttobetrag beträgt: " << amount << " Euro." << endl;
}
