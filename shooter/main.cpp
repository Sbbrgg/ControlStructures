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
		if (key == 'w' or key == 'W' or key == '�' or key == '�' or key == UpArrow)
		{
			cout << "�����" << endl;
		}
		else if (key == 's' or key == 'S' or key == '�' or key == '�' or key == DownArrow)
		{
			cout << "�����" << endl;
		}
		else if (key == 'a' or key == 'A' or key == '�' or key == '�' or key == LeftArrow)
		{
			cout << "�����" << endl;
		}
		else if (key == 'd' or key == 'D' or key == '�' or key == '�' or key == RightArrow)
		{
			cout << "������" << endl;
		}
		else if (key == ' ')
		{
			cout << "������" << endl;
		}
		else if (key == Enter)
		{
			cout << "��������" << endl;
		}
		else if (key == Escape)
		{
			cout << "�����";
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
		case 'W':		cout << "�����" << endl;	break;
		case DownArrow:	
		case 's':		
		case 'S':		cout << "�����" << endl;	break;
		case LeftArrow:	
		case 'a':		
		case 'A':		cout << "�����" << endl;	break;
		case RightArrow:
		case 'd':		
		case 'D':		cout << "������" << endl;	break;
		case ' ':		cout << "������" << endl;	break;
		case Enter:		cout << "�����" << endl;	break;
		case Escape:
		case -32: break;
		default:		cout << "Error" << endl;
		}
	} while (key != Escape);
}