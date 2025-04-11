#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int number = 1, count = 0, n = 1;
	while (true)
	{
		while (n < number)
		{
			if (number % n == 0)
			{
				count += n;
				n++;
			}
			else
			{
				n++;
			}
		}
		if (count == number)
		{
			cout << number << " ";
		}
		n = 1;
		count = 0;
		number++;
	}
}