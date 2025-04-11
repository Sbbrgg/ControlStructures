#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int number = 2, count = 1, i = 0, n = 1, border;
	cout << "¬ведите предел выводимых чисел: "; cin >> border;
	while (number < border)
	{
		while (n < number)
		{
			if (number % n == 0)
			{
				count++;
				n++;
			}
			else
			{
				n++;
			}
		}
		if (count <= 2)
		{
			cout << number << " ";
		}
		n = 1;
		count = 1;
		number++;
	}
}