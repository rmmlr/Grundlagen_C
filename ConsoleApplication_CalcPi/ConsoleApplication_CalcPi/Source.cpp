#include <iostream>

using namespace std;

void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile auskommentieren
	//locale::global(locale("German_germany"));
	std::cout.precision(19);

	//Pi-Berechnung auf Basis einer alternierenden unendlichen Reihe nach Euler
	//pi = 3 + 4/(2*3*4) - 4/(4*5*6) + 4/(6*7*8) - 4/(8*9*10) + 4/(10*11*12) - (4/(12*13*14) ...
	//pi = 3.141592653589793 (aus Matlab)

	//Achtung: Genauigkeit in diesem Beispiel beträgt 14 Stellen.
	//Ggf. weitere angezeigten Stellen unterligen einer Unschärfe, welche auf die maximale Auflösung
	//des Datentyps "long double" zurück zuführen ist.

	//Variablendeklaration
	long double a = 2;
	long double b = 3;
	long double c = 4;
	long double pi = 3;
	long double lastPi = 0;


	cout << "Pi-Berechnung auf Basis einer alternierenden unendlichen Reihe  nach Euler" << endl;
	cout << endl;

	for (int i = 0; i < 500000; i++) //Anzahl maximaler Iterationen auf 50000 begrenzt (kein Deadlock)
	{
		lastPi = pi;
		long double op = 4 / (a * b * c);

		if (i % 2) //Wenn i ungerade
			pi -= op;
		else
			pi += op;

		cout << pi << endl;

		if (lastPi == pi)
		{
			cout << "Genauere Berechnung nicht möglich! i = " << i << " (Vertrauensbereich: 14 Stellen)" << endl;
			break;
		}

		a += 2;
		b += 2;
		c += 2;
	}


	cout << endl;
	system("pause");
}