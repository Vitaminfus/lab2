#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
	//����� ���������� ��������� �����
	srand(time(NULL)); 

	//�������� ����������� ������������� �������
	int size = 10; 
	int* mas = new int[size];

	//���������� �������
	for (int i = 0; i < size; i++)
	{
		mas[i] = rand() % 10 + 1;
	}

	//���������� �������
	int temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			temp = mas[j];
			mas[j] = mas[j + 1];
			mas[j + 1] = temp;
		}
	}

	//����� ��������� �������
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
	

	//������������ ������
	delete[] mas;

	cout << endl;
	return 0;
}