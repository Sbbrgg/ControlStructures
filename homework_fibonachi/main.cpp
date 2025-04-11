#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int first_number = 1, second_number = 1, third_number, i;
	cout << "¬вкдите сколько чисел должно быть в р€ду: "; cin >> i;
	cout << first_number << " " << second_number << " ";
	while (i > 2)
	{
		third_number = first_number + second_number;
		first_number = second_number;
		second_number = third_number;
		cout << third_number << " ";
		i--;
	}

}