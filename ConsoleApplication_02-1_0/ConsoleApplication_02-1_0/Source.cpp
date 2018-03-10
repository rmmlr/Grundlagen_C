#include <iostream>

using namespace std;

void printCircleData(float radius, float pi);
void printBallData(float radius, float pi);

void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile
	// auskommentieren oder Anwendung mit Administratorrechten neu starten.
	locale::global(locale("German_germany"));

	//pi = 3.14
	const float PI1 = 3.14;
	//pi = 3.14159
	const float PI2 = 3.14159;

	//Kreisradius
	float radius = 0;


	//Work
	cout << "Praktikumsaufgabe: Nr.: 02-1" << endl;
	cout << endl;

	cout << "Bitte Radius in Metern eingeben: ";
	cin >> radius;
	cout << endl;
	cout << endl;

	printCircleData(radius, PI1);
	printCircleData(radius, PI2);

	printBallData(radius, PI1);
	printBallData(radius, PI2);

	system("pause");
}

void printCircleData(float radius, float pi)
{
	cout << "Kreis-Eigenschaften" << endl;
	cout << "Zur Berechnung verwendeter Wert für Pi: " << pi << endl;
	cout << endl;
	cout << "Radius\t\tr = " << radius << " m" << endl;
	cout << "Umfang\t\tU = " << 2 * pi * radius << " m" << endl;
	cout << "Kreisfläche\tA = " << pi * radius * radius << " m\xB2" << endl;
	cout << endl;
	cout << endl;
}

void printBallData(float radius, float pi)
{
	cout << "Kugel-Eigenschaften" << endl;
	cout << "Zur Berechnung verwendeter Wert für Pi: " << pi << endl;
	cout << endl;
	cout << "Radius\t\tr = " << radius << " m" << endl;
	cout << "Oberfläche\tA = " << 4 * pi * radius * radius << " m\xB2" << endl;
	cout << "Volumen\t\tV = " << 4/3 * pi * radius * radius * radius << " m\xB3" << endl;
	cout << endl;
	cout << endl;
}