#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	int n, liczba, suma = 0;
	cout << "Podaj n: ", cin >> n;
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "Podaj liczbe: ", cin >> liczba;
			if (liczba % 2 == 0) suma += liczba;

		}
		cout << "Suma liczb parzystych= " << suma << endl;
	}
	else cout << "N nie moze byc liczba ujemna";


}
