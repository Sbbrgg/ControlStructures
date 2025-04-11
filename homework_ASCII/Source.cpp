#include <iostream>
using namespace std;

void main() 
{
	setlocale(LC_ALL, "Russian");

	for (int i = 0; i < 128; i++)
	{
		if (i % 16 == 0)
		{
			cout << "\n";
		}
		cout << (char)i << "\t";
	}
}