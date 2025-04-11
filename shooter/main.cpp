#include <iostream>
#include <conio.h>
using namespace std;

#define Enter		13
#define Escape		27
#define UpArrow		72
#define DownArrow	80
#define LeftArrow	75
#define RightArrow	77

//#define SHOOTER_IF

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Shooter" << endl;
#ifdef SHOOTER_IF
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' or key == 'W' or key == 'ц' or key == 'Ц' or key == UpArrow)
		{
			cout << "Вперёд" << endl;
		}
		else if (key == 's' or key == 'S' or key == 'ы' or key == 'Ы' or key == DownArrow)
		{
			cout << "Назад" << endl;
		}
		else if (key == 'a' or key == 'A' or key == 'ф' or key == 'Ф' or key == LeftArrow)
		{
			cout << "Влево" << endl;
		}
		else if (key == 'd' or key == 'D' or key == 'в' or key == 'В' or key == RightArrow)
		{
			cout << "Вправо" << endl;
		}
		else if (key == ' ')
		{
			cout << "Прыжок" << endl;
		}
		else if (key == Enter)
		{
			cout << "Стрелять" << endl;
		}
		else if (key == Escape)
		{
			cout << "Выход";
		}
		else
		{
			if(key != -32)
			{
				cout << "Error" << endl;
			}
		}
	} while (key != Escape);
#endif
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case UpArrow:	
		case 'w':		
		case 'W':		cout << "Вперёд" << endl;	break;
		case DownArrow:	
		case 's':		
		case 'S':		cout << "Назад" << endl;	break;
		case LeftArrow:	
		case 'a':		
		case 'A':		cout << "Влево" << endl;	break;
		case RightArrow:
		case 'd':		
		case 'D':		cout << "Вправо" << endl;	break;
		case ' ':		cout << "Прыжок" << endl;	break;
		case Enter:		cout << "Огонь" << endl;	break;
		case Escape:
		case -32: break;
		default:		cout << "Error" << endl;
		}
	} while (key != Escape);
}