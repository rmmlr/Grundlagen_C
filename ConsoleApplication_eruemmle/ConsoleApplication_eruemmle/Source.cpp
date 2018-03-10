#include <iostream>

using namespace std;

void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile auskommentieren
	locale::global(locale("German_germany"));

	for (int i = 0; i < 256; i++)
	{
		char asciChar = i;
		cout << i << ":\t" << asciChar << endl;
	}

	system("pause");
}