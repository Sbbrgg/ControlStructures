#include <iostream>
#include <conio.h>
using namespace std;
#define ESCAPE 27

void main() 
{
	setlocale(LC_ALL, "Russian");

	char key;
	do
	{
		key = _getch();
		if (key == 119 or key == -26)
		{
			cout << "�����" << endl;
		}
		else if (key == 97 or key == -28)
		{
			cout << "�����" << endl;
		}
		else if (key == 115 or key == -21)
		{
			cout << "�����" << endl;
		}
		else if (key == 100 or key == -94) 
		{
			cout << "������" << endl;
		}
		else if (key == 32)
		{
			cout << "������" << endl;
		}
		else if (key == 13)
		{
			cout << "��������" << endl;
		}
		else
		{
			cout << "Error" << endl;
		}
	} while(key != ESCAPE);
}