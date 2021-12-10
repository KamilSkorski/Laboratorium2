#include <iostream>
using namespace std;
int main()
{
	int a, sumad = 0, sumau = 0, iloscu = 0, iloscd = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Podaj liczbe: ", cin >> a;
		if (a >= 0)
		{
			sumad += a; 
			iloscd++;
		}
		else {
			sumau += a;
			iloscu++;
		}
	}
	cout << "Suma liczb dodatnich: " << sumad << " Ilosc liczb dodatnich: " << iloscd << endl;
	cout << "Suma liczb ujemnych: " << sumau << " Ilosc liczb ujemnych: " << iloscu << endl;
}


