#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
	//����� ���������� ��������� �����
	srand(time(NULL));

	//������������� ����������
	float k = 0;
	float avg = 0;
	int size1 = 2;
	int size2 = 5;
	int totalSize = size1 * size2;

	//�������� ���������� ������������� �������
	float** mas = new float* [size1];
	for (int count = 0; count < size1; count++)
	{
		mas[count] = new float[size2];
	}

	//���������� �������
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			k = (rand() % 201 - 100);
			mas[i][j] = k / 100;
			avg += mas[i][j];
		}
	}

	//���������� �������� �������� ��������� �������
	avg /= totalSize;
	cout << "Average value is " << avg << "\n\n";

	//������ ��������� �������
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++)
		{
			if (mas[i][j] < -0.5)
			{
				mas[i][j] = avg;
			}
		}
	}

	//����� ��������� �������
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++)
		{
			cout << '\t' << setprecision(size1) << mas[i][j] << '\t';
		}
		cout << endl;
	}

	//������������ ������
	for (int count = 0; count < size1; count++)
	{
		delete[] mas[count];
	}

	cout << endl;
	return 0;
}