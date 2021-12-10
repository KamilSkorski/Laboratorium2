#include <iostream>
using namespace std;
int main()
{
	int n, n1;
	float lpPunktow, Suma = 0;
	cout << "Podaj liczbe studentow: ", cin >> n;
	n1 = n;
	while (n > 0)
	{
		cout << "Podaj liczbe punktow: ", cin >> lpPunktow;
		Suma += lpPunktow;
		n--;
	}
	cout << "Srednia liczba punktow: " << Suma / n1;
}