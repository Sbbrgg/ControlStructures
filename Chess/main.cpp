#include <iostream>
using namespace std;

#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define LOWER_RIGHT_ANGLE	(char)217
#define LOWER_LEFT_ANGLE	(char)192
#define HORIZONTAL_LINE		(char)196
#define VERTICAL_LINE		(char)179
#define WHITE_BOX			"\xDB\xDB"		//(char)219
#define BLACK_BOX			"\x20\x20"		//' '

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер доски: "; cin >> n; 
	n++;
	setlocale(LC_ALL, "C");
	/*for (int i = 176; i < 224; i++)
	{

		cout << endl;
		cout << i << "\n " << (char)i;
	}*/
	/*for (int i = 0; i <= n + 1; i++)
	{
		if (i == 0)cout << UPPER_LEFT_ANGLE;
		else if (i == n + 1)cout << UPPER_RIGHT_ANGLE;
		else cout << HORIZONTAL_LINE;
	}
	cout << '\n';*/
	for (int i = 0; i <= n; i++)
	{
		
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 and j == 0)			cout << UPPER_LEFT_ANGLE;
			else if (i == 0 and j == n)		cout << UPPER_RIGHT_ANGLE;
			else if (i == n and j == 0)		cout << LOWER_LEFT_ANGLE;
			else if (i == n and j == n)		cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 or i == n)		cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (j == 0 or j == n)		cout << VERTICAL_LINE;
			else cout << (~i & 1 ^ j & 1 ? WHITE_BOX: BLACK_BOX);
			//else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);

			//else cout << ((i + j) % 2 == 0 ? WHITE_BOX: BLACK_BOX);
			/*else if ((i + j) % 2 == 0)		cout << WHITE_BOX << WHITE_BOX;
			else cout << BLACK_BOX << BLACK_BOX;*/

		}
		cout << endl;
	}
	/*for (int i = 0; i <= n + 1; i++)
	{
		if (i == 0)cout << LOWER_LEFT_ANGLE;
		else if (i == n + 1)cout << LOWER_RIGHT_ANGLE;
		else cout << HORIZONTAL_LINE;
	}*/
}