#include <iostream>
using namespace std;

void allCalc(int one, int two, int *tas, int *hik, int *kak, int *war)
{
	cin >> one;
	cin >> two;

	*tas = one + two;
	*hik = one - two;
	*kak = one * two;
	*war = one / two;
}

int main()
{
	int tas = 0;
	int hik = 0;
	int kak = 0;
	int war = 0;

	allCalc(1, 2, &tas, &hik, &kak, &war);

	cout << tas << endl;
	cout << hik << endl;
	cout << kak << endl;
	cout << war << endl;
}