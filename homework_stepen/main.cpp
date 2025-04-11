#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	double number, result = 1;
	int count;
	cout << "Введите число, которое надо возводить в степень: "; cin >> number;
	cout << "Введите степень, в которую надо возвести число: "; cin >> count;

	for (int i = 1; i <= count; i++)
	{
		result *= number;
		
	}
	cout << number << " в степени " << count << " = " << result;
}