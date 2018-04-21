/*
Grundlagen Programmierung C

Project: ConsoleApplication_03_2
Author:  eruemmle
Date:    21.04.2018 13:49:01
Repo:    https://github.com/rmmlr/Grundlagen_C

Praktikumsaufgabe: Nr.: 0x-x.x
*/

#include <iostream>

using namespace std;

void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile
	// auskommentieren oder Anwendung mit Administratorrechten neu starten.
	locale::global(locale("German_germany"));


	//Variablendeklaration
	int products[10][10];



	//Ausgabekopf
	cout << "Grundlagen Programmierung C" << endl;
	cout << "Praktikumsaufgabe: Nr.: 0x-x.x (Projekt: ConsoleApplication_03_2)" << endl << endl;



	//Work
	for (int x = 0; x < 10; x++)
		for (int y = 0; y < 10; y++)
		{
			products[x][y] = (x + 1) * (y + 1);
		}

	for each (int product in products)
	{
		cout << product << "\t";
	}

	//Programmende
	cout << endl << endl;
	system("pause");
}