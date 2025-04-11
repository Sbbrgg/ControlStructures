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
			cout << "Вперёд" << endl;
		}
		else if (key == 97 or key == -28)
		{
			cout << "Влево" << endl;
		}
		else if (key == 115 or key == -21)
		{
			cout << "Назад" << endl;
		}
		else if (key == 100 or key == -94) 
		{
			cout << "Вправо" << endl;
		}
		else if (key == 32)
		{
			cout << "Прыжок" << endl;
		}
		else if (key == 13)
		{
			cout << "Стрелять" << endl;
		}
		else
		{
			cout << "Error" << endl;
		}
	} while(key != ESCAPE);
}