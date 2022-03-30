# informatyka

Algorytm wyznaczania liczb pierwszych:
#include <iostream>
using namespace std;

int main()
{
int lp = 0;
int p = 2;
int l;
int d;
bool x;
cout << "Ile liczb chcesz wyświetlić: " << endl;
cin >> l;

while (lp < l) {
x = true;
for (int d = 2; d <= p - 1; d++) {
if (p % d == 0) {
x = false;
}
}
if (x == true) {
cout << p << " :Jest liczba pierwszą" << endl;
lp = lp + 1;
}
p = p + 1;
}
}


NWD:

#include <iostream>
using namespace std;

int main()
{
    unsigned int a, b;
    cout << "Podaj pierwsza liczbe: "; cin >> a; 
    cout << "Podaj druga liczbe:";cin >> b;
    while (a != b)
        if (a < b) b -= a; else a -= b;

    cout << "Najwiekszy wspolny dzielnik: " << a << endl;
    return 0;
}

NWW: 

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