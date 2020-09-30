#include <iostream>
using namespace std;

int main()
{
	int array[] =
	{
		31,41,59,26,53,58,97,93,23,84
	};

	int min = array[0];
	int max = array[0];

	for (int number = 0; number < 10; ++number)
	{
		if (min > array[number])
		{
			min = array[number];
		}
		else if (max < array[number])
		{
			max = array[number];
		}
	}

	cout << min << endl;
	cout << max << endl;
}