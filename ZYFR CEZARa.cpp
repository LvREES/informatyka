#include <iostream>
#include <chrono>
using namespace std;

chrono::duration<double> elapsed_seconds;

int main()
{
	int a, f, f0 = 0, f1 = 1;

	chrono::system_clock::time_point start = chrono::system_clock::now(); // czas start

	cout << "Podaj ile liczb ma wyswietlic: ";
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		if (i > 1) {
			f = f0 + f1;
			f0 = f1;
			f1 = f;
		}
		else
		{
			f = i;
		}
		cout << f << endl;
	}
	chrono::system_clock::time_point end = chrono::system_clock::now(); // czas stop
	elapsed_seconds += end - start; // obliczenie czasu

	cout << std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds).count() << "\t milliseconds\n";
}