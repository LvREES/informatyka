#include<iostream>
using namespace std;

int NWD(int a, int b)
{
	int pom;

	while (b != 0)
	{
		pom = b;
		b = a % b;
		a = pom;
	}
	return a;
}

int main()
{
	unsigned int a, b;

	cout << "Podaj pierwsza liczbe: "; cin >> a;
	cout << "Podaj druga liczbe: "; cin >> b;

	//wyznaczenie NWW
	cout << "Najmniejsza wspolna wielokrotnosc:(" << a << ", " << b << ") = " << a / NWD(a, b) * b << endl;

	cin.ignore();
	cin.get();

	return 0;
}