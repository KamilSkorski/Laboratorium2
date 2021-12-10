#include <iostream>
using namespace std;
int main()
{
	int n, n1;
	float lpPunktow, Suma = 0;
	cout << "Podaj liczbe studentow: ", cin >> n;
	n1 = n;
	
		if (n > 0)
		{
			while (n > 0)
			{
				cout << "Podaj liczbe punktow: ", cin >> lpPunktow;
				if (lpPunktow >= 0 && lpPunktow <= 100)
				{
					Suma += lpPunktow;
					n--;
				}
				else cout << "Liczba punktow musi byc w przedziale od 0 do 100. Podaj liczbe punktow ponownie. \n";
			}
			cout << "Srednia liczba punktow: " << Suma / n1;
		}
		else cout << "W grupie musi byc co najmniej 1 student.";
}