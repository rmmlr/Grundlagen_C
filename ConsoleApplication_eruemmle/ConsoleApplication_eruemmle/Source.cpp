#include <iostream>

using namespace std;

void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile auskommentieren
	locale::global(locale("German_germany"));

	cout << "Test-Projekt:" << endl << endl;

	bool b = false;
	int i = 0;
	long l = 45110465;
	float f = 0;
	double d = 0;
	
	cout << "Sizeof Datentyp" << endl;

	cout << "Bool:\t\t" << sizeof(b) << endl;
	cout << "Integer:\t" << sizeof(i) << endl;
	cout << "Long:\t\t" << sizeof(l) << endl;
	cout << "Float:\t\t" << sizeof(f) << endl;
	cout << "Double:\t\t" << sizeof(d) << endl;





	cout << endl;
	cout << endl;
	system("pause");
}