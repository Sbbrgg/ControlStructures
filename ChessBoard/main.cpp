#include <iostream>
using std::cin;
using std::cout;
using std::endl;
//#define CHESS_BOARD
#define HARD_CHESS
void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef CHESS_BOARD
	int n;
	cout << "Введите размер доски: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		cout << "—-";
	}
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << "|";
		for (int j = 0; j < n; j++)
		{

			if ((i + j) % 2 == 0)
			{
				if (j % n == 0 and j != 0)cout << " ";
				else cout << "  ";
			}
			else
			{
				if (j % n == 0 and j != 0)cout << "*";
				else cout << "* ";
			}
		}
		cout << "|";
		cout << "\n";
	}

	for (int i = 0; i <= n; i++)
	{
		cout << "—-";
	}
#endif // CHESS_BOARD
#ifdef HARD_CHESS
	int n;
	cout << "Введите размер шахматной доски: "; cin >> n;
	for (int i = 0; i < n * n; i++)
	{
		for (int j = 0; j < n * n; j++)
		{
			if (((i / n) + (j / n)) % 2 == 0)
			{
				cout << "* ";
			}
			else cout << "  ";
		}
		cout << "\n";
	}
#endif // HARD_CHESS

}