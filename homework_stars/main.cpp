#include <iostream>
using namespace std;
//using std::cout;
//using std::cin;
//using std::endl;

//#define KVADRAT
//#define TREYG
//#define PLUS_MINUS
void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите количество звёздочек в стороне: "; cin >> n;
#ifdef KVADRAT
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << "\n";
	}
#endif // KVADRAT
#ifdef TREYG
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << "\n";
	}//1
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << "* ";
		}
		cout << "\n";
	}//2
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = (n - 1) * 2; j >= (i * 2); j--)
		{
			cout << " ";
		}
		for (int k = 0; k <= i; k++)
		{
			cout << "* ";
		}
		cout << "\n";
	}//3
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i * 2; j++)
		{
			cout << " ";
		}
		for (int k = n; k > i; k--)
		{
			cout << "* ";
		}
		cout << "\n";
	}//4  
#endif // TREYG
#ifdef PLUS_MINUS
	int count = 0;
	for (int i = 0; i < pow(n, 2); i++)
	{
		if (count % 2 == 0)cout << "+ ";
		else cout << "- ";
		count++;
		if (count % n == 0)cout << "\n";
	}
#endif // DEBUG

}