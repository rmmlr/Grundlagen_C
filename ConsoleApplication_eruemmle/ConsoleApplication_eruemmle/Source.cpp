#include <iostream>

using namespace std;

void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile auskommentieren
	locale::global(locale("German_germany"));
	std::cout.precision(19);

	/*for (int i = 0; i < 256; i++)
	{
		char asciChar = i;
		cout << i << ":\t" << asciChar << endl;
	}*/


	/*bool b = false;
	int i = 0;
	long l = 45110465;
	float f = 0;
	double d = 0;
	

	cout << "Bool:	" << sizeof(b) << endl;
	cout << "Integer:	" << sizeof(i) << endl;
	cout << "Long:	" << sizeof(l) << endl;
	cout << "Float:	" << sizeof(f) << endl;
	cout << "Double:	" << sizeof(d) << endl;*/



	//Pi berechnen
	//pi = 3 + 4/(2*3*4) - 4/(4*5*6) + 4/(6*7*8) - 4/(8*9*10) + 4/(10*11*12) - (4/(12*13*14) ...

	long double a = 2;
	long double b = 3;
	long double c = 4;
	long double pi = 3;

	long double lastPi = 0;

	for (int i = 0; i < 500000; i++)
	{
		lastPi = pi;
		long double op = 4 / (a * b * c);

		if (i % 2)
			pi -= op;
		else
			pi += op;

		cout << pi << endl;

		if (lastPi == pi)
		{
			cout << "Genauere Berechnung nicht möglich! i = " << i << endl;
			break;
		}

		a += 2;
		b += 2;
		c += 2;
	}


	cout << endl;
	system("pause");
}