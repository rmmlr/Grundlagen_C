#include <iostream>

using namespace std;

void main(void)
{
	// Wenn Programm nicht startet (keine Konsolenausgabe) bitte folgende Zeile auskommentieren
	locale::global(locale("German_germany"));


	cout << "Ausgabe aller ASCII-256-Zeichen des geladenen Zeichensatzes" << endl;

	for (int i = 0; i < 256; i++)
	{
		if (i % 4 == 0) //Neue Zeile nach 4 ausgegebenen Zeichen
			cout << endl;

		if (i == 9) //Fix for Tab
			cout << i << ":\t\\t\t";
		else if (i == 10) //Fix for LF
			cout << i << ":\t\\n\t";
		else if (i == 13) //Fix for CR
			cout << i << ":\t\\r\t";
		else
		{
			char asciChar = i;
			cout << i << ":\t " << asciChar << "\t";
		}
	}
	

	cout << endl;
	cout << endl;
	system("pause");
}