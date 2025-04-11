#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int first_number = 1, second_number = 1, i = 3, third_number, left_border, right_border;
	cout << "Введите границы вывода ряда Фибоначи \nЛевая граница: "; cin >> left_border; cout << "Правая граница: "; cin >> right_border;
	int copy_left_border = left_border;
	if (left_border == 1)
	{
		cout << first_number << " " << second_number << " ";
	}
	else if (left_border == 2)
	{
		cout << second_number << " ";
	}
	while (i <= right_border)
	{
		third_number = first_number + second_number;
		first_number = second_number;
		second_number = third_number;
		if (i >= left_border and i <= right_border)
		{
			cout << third_number << " ";
		}
		i++;
	}
}