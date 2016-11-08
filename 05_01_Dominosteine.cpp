#include <iostream> // Einbingdung der Bibliotheken
#include <string>	// 
using namespace std;

int main()			// Hauptprogramm startet
{					// Geschw. Kl. die das HP umfasst
	
	for (int reihe = 0; reihe <= 6; reihe++)// Die Schleife wird 6 mal ausgeführt und dabei jedes
											// Mal um 1 erhöht (reihe++)
	{
		for (int i = reihe; i <= 6; i++)	// Bei jedem Durchlauf 1 Dominostein weniger ( 0 bis 6 = 6, 1 bis 6 = 5)
		{ 
			cout << "+---+---+ ";
		}
		cout << endl;
		
		for (int zahl = reihe; zahl <= 6; zahl++)
		{
			cout << "| " << zahl << " | " << zahl << " | ";
		}
		cout << endl;

		for (int i = reihe; i <= 6; i++)
		{
			cout << "+---+---+ ";
		}
		cout << endl;

	}
	system("PAUSE");// Eingabeaufforderung, damit man die Ausgabe sehen kann!
	return 0;		// Return 0? Durchlauf fehlerfrei!
}					// Geschw. Kl. die das HP umfasst >> Hier endet das HP
