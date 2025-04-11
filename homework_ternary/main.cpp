#include <iostream>
//using namespace std;
using std::cout;
using std::cin;
using std::endl;
#define WHITE_BOX			"\xDB\xDB"		//(char)219
#define BLACK_BOX			"\x20\x20"		//' '
//#define SWITCH_A_AND_B
//#define CHESS_WITH_BITWIZ
//#define TRIANGLE_OF_PASCALE
void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef SWITCH_A_AND_B
	int a, b;
	cout << "¬ведите два числа: "; cin >> a, cin >> b;

	a ^= b;
	b ^= a;
	a ^= b;
	cout << a << " " << b;
#endif //SWITCH_A_AND_B
#ifdef CHESS_WITH_BITWIZ
	int n;
	cout << "¬ведите размер шахматной доски: "; cin >> n;
	setlocale(LC_ALL, "C");
	for (int i = 0; i < n * n; i++)
	{
		for (int j = 0; j < n * n; j++)
		{
			cout << (~((i / n) ^ (j / n)) & 1 ? WHITE_BOX : BLACK_BOX);
		}
		cout << "\n";
	}
#endif // CHESS_WITH_BITWIZ
#ifdef TRIANGLE_OF_PASCALE
	int n;
	cout << "¬ведите глубину треугольника ѕаскал€: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n - i - 1; j++)
		{
			cout << " ";
		}
		int number = 1;
		for (int j = 0; j <= i; j++)
		{
			cout << number << " ";
			number = number * (i - j) / (j + 1);
		}
		cout << endl;
	}
#endif // TRIANGLE_OF_PASCALE

}