#include <iostream>
using namespace std;

struct Student
{
	int japanese = 0;
	int society = 0;
	int math = 0;
};

int main()
{
	Student student[] =
	{
		{100,99,98},{97,96,95},{94,93,92}
	};

	cout << student[0].japanese << endl;
	cout << student[0].society << endl;
	cout << student[0].math << endl;
	cout << student[1].japanese << endl;
	cout << student[1].society << endl;
	cout << student[1].math << endl;
	cout << student[2].japanese << endl;
	cout << student[2].society << endl;
	cout << student[2].math << endl;
	cout << student[0].japanese + student[0].society + student[0].math << endl;
	cout << student[1].japanese + student[1].society + student[1].math << endl;
	cout << student[2].japanese + student[2].society + student[2].math << endl;

	//名前は書くことができませんでした。
	//申し訳ありません。
}