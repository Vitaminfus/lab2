#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
	//example 1
	int* x = new int;
	*x = 9;
	cout << "x = " << *x;
	delete x;

	cout << "\n\n";
	//example 2
	srand(time(NULL));
	float* mas = new float[10];
	for (int i = 0; i < 10; i++)
	{
		mas[i] = (rand() % 10 + 1) / float((rand() % 10 + 1));
	}
	cout << "mas = " << "\n";
	for (int i = 0; i < 10; i++)
	{
		cout << setprecision(2) << mas[i] << "\n";
	}
	delete[] mas;

	cout << "\n\n";

	//example 3
	srand(time(NULL));
	float** mas1 = new float* [2];
	for (int count = 0; count < 2; count++)
	{
		mas1[count] = new float[5];
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			mas1[i][j] = (rand() % 10 + 1) / float((rand() % 10 + 1));
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++)
		{
			cout << '\t' << setprecision(2) << mas1[i][j] << '\t';
		}
		cout << "\n";
	}
	for (int count = 0; count < 2; count++)
	{
		delete[] mas1[count];
	}

	cout << endl;
	return 0;
}