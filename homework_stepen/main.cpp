#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	double number, result = 1;
	int count;
	cout << "������� �����, ������� ���� ��������� � �������: "; cin >> number;
	cout << "������� �������, � ������� ���� �������� �����: "; cin >> count;

	for (int i = 1; i <= count; i++)
	{
		result *= number;
		
	}
	cout << number << " � ������� " << count << " = " << result;
}