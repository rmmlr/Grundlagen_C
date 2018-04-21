/*
Grundlagen Programmierung C

Project: ConsoleApplication_03_3
Author:  eruemmle
Date:    21.04.2018 14:08:24
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

	int a[3][2] = { { 1, 2 },{ 3, 4 },{ 5, 6 } };
	int b[3][2] = { { 6, 5 },{ 4, 3 },{ 2, 1 } };
	int result[3][2];


	//Ausgabekopf
	cout << "Grundlagen Programmierung C" << endl;
	cout << "Praktikumsaufgabe: Nr.: 0x-x.x (Projekt: ConsoleApplication_03_3)" << endl << endl;



	//Work
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 2; y++)
		{
			result[x][y] = a[x][y] * b[x][y];
			cout << result[x][y] << "\t";
		}
		cout << endl;
	}

	//Programmende
	cout << endl << endl;
	system("pause");
}