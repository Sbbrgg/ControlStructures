//#pragma warning(disable:4326)
#include <iostream>
//using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACHI
//#define SIMPLE_NUMBER
//#define SOVERSH_NUMBER
//#define ROMB_1
//#define ROMB_2
//#define ROMB_3

void main()
{
	setlocale(LC_ALL, "Russian");
	/*for (;;)
	{
		cout << "Hello FOR";
	}*/
	//cout << "¬ведите количество итераций";
#ifdef FACTORIAL
	long long int n, total = 1;
	/*for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";
	}*/
	cout << "¬ведите число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		total *= i;
		cout << total << endl;
	}
#endif // FACTORIAL
#ifdef POWER

	float a, N = 1; int n;
	cout << "¬ведите основание степени: "; cin >> a;
	cout << "¬ведите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER
#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII
#ifdef FIBONACHI
	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
	cout << "¬ведите количество членов р€да: "; cin >> n;
	for (int i = 0, a = 0, b = 1, c = a + b; i < n; i++, c = (a = b) + (b = c))
	{
		cout << a << "\t";
	}
#endif // FIBONACHI
#ifdef SIMPLE_NUMBER
	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	for (int i = 1; i < n; i++)
	{
		bool simple = true;
		for (int j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;	// ключевое слово break прерывает текущую итерацию и все последующие
				// итерации цикла
			}
		}
		if (simple)cout << i << "\t";
	}
#endif // SIMPLE_NUMBER
#ifdef SOVERSH_NUMBER
	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int sum = 0;
		for (int j = 1; j <= (i / 2); j++)
		{
			if (i % j == 0)sum += j;
		}
		if (sum == i)cout << i << "\t";
	}
	cout << endl;
#endif // 
#ifdef ROMB_1
	int n;
	cout << "¬ведите длину стороны: "; cin >> n;
	for (int i = 0; i < n; i++)
	{

		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i; j++)cout << "  "; cout << "\\";

		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = i + 1; j < n; j++)cout << "  "; cout << "/";
		cout << endl;
	}
#endif
#ifdef ROMB_2
	int n;
	cout << "¬ведите длину стороны: "; cin >> n;
	for (int i = 0; i < n; i++)
	{

		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i*2; j++)cout << " "; cout << "\\";

		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = 0; j < (n - i - 1)*2; j++)cout << " "; cout << "/";
		cout << endl;
	}
#endif
#ifdef ROMB_3
	int n;
	cout << "¬ведите длину стороны: "; cin >> n;
	for (int i = 0; i < n*2; i++)
	{
		for (int j = 0; j < n*2; j++)
		{
			if (i + n == j || j + n == i)cout << "\\";
			else if (i == n - 1 - j || n*2-i-1 == j-n)cout << "/";
			else cout << " ";
		}
		cout << endl;
	}
#endif
	int n;
	cout << "¬ведите цифру: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			/*if (i % 2 == 0 and j % 2 == 0)cout << "+ ";
			else cout << "- ";*/
			//i % 2 == j % 2 ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << "\n";
	}
}