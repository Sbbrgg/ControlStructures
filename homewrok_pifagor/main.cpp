#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	for (int i = 1; i <= 10; i++)
	{
		
		for (int j = 1; j <= 10; j++)
		{
			cout << j * i << "\t";
		}
		cout << "\n";
	}
}