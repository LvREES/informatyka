#include <iostream>
#include <chrono>
using namespace std;

chrono::duration<double> elapsed_seconds;

void szyfrowanie(int klucz, char tab[]) 
{

	int dl = strlen(tab);
	if (!(klucz >= -26 and klucz <= 26)) 
	{
		return;
	}

	if (klucz >= 0) {
		for (int i = 0; i < dl; i++) 
		{
			if (tab[i] + klucz <= 'z') 
			{
				tab[i] += klucz;
			}
			else
			{
				tab[i] += (klucz - 26);
			}
		}
	}
	else
	{
		for (int i = 0; i < dl; i++) 
		{
			if (tab[i] + klucz >= 'a') 
			{
				tab[i] += klucz;
			}
			else
			{
				tab[i] += (klucz + 26);
			}
		}
	}
}


int main()
{
	chrono::system_clock::time_point start = chrono::system_clock::now(); 


	int dl, klucz;
	char tab[200];

	cout << "Podaj klucz:";
	cin >> klucz;

	cout << "Podaj wyraz:";
	cin >> tab;

	cout << endl;



	szyfrowanie(klucz, tab);
	cout << "Zaszyfrowane:" << tab;


	cout << endl;

	szyfrowanie(-klucz, tab);
	cout << "Odszyfrowane:" << tab << endl;

	chrono::system_clock::time_point end = chrono::system_clock::now(); 
	elapsed_seconds += end - start; 

	cout << std::chrono::duration_cast<std::chrono::seconds>(elapsed_seconds).count() << "\t seconds\n";




}