#include <iostream>
using namespace std;

int main()
{
double aktuelle_eingabe = 0.0, vorherige_eingabe = 0.0, vorvorherige_eingabe = 0.0;

	while (true) // damit das Programm endlos läuft, bis es über Eingabe beendet wird
	{
		{
			cout << "Bitte geben Sie den neuen letzten Verbrauchswert ein: ? ";
			cin >> aktuelle_eingabe;
		}

		if (aktuelle_eingabe < 0)
		{
			cout << "Bitte geben Sie den neuen letzten Verbrauchswert ein: ? ";
			cin >> aktuelle_eingabe;
		}
		if (aktuelle_eingabe >= 99)
			break;

		cout << "Der bisherige Gesamtverbrauch betraegt: " << aktuelle_eingabe + vorherige_eingabe + vorvorherige_eingabe << endl;
		cout << "Der Durchschnitt der letzten drei Verbrauchswerte betraegt "
			 << (aktuelle_eingabe + vorherige_eingabe + vorvorherige_eingabe) / 3 << endl;
		while (true)
		{
			vorvorherige_eingabe += vorherige_eingabe;
			vorherige_eingabe = aktuelle_eingabe;
			break;
		}
	}

system("PAUSE");
return 0;
}
