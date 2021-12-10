#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;
int main()
{
	int n, liczba, suma = 0;
	srand(time(NULL));
	cout << "Podaj n: ", cin >> n;
	if (n > 0)
	{
		cout << "Wylosowane elementy: \n";
		for (int i = 0; i < n; i++)
		{
			liczba = rand() % 56 - 10;
			cout << liczba << endl;
			if (liczba % 2 == 0) suma += liczba;

		}
		cout << "Suma liczb parzystych = " << suma << endl;
	}
	else cout << "n nie moze byc liczba ujemna";
}