#include <iostream>

using namespace std;

void dog(int *arr, int vol)
{
	cout << "������� ������" << endl;
	for (int i = 0; i < vol; i++)
	{
		
		cin >> arr[i];

	}
	
}
void cat(int *arr, int vol)
{
	cout << "��� ������" << endl;
	for (int i = 0; i < vol; i++)
	{

		cout << arr[i] << endl;
	}
}


int main()
{
	setlocale(LC_ALL, "ru");
	int vol;
	cout << "������ �������:" << endl;
	cin >> vol;
	setlocale(LC_ALL, "ru");
	int *pro = new int[vol];
	
	dog(pro, vol);
	cat(pro, vol);
	delete[] pro;
	system("pause");
	return 0;
	
}