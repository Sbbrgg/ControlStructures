#include <iostream>
#include <conio.h>
using namespace std;

#define Escape		27

//#define WHILE_1
//#define WHILE_2
//#define PALINDROME
//#define KOK

void main() {
	setlocale(LC_ALL, "Russian");
#ifdef WHILE_1
	int i = 0;		//Счётчик цикла
	int n = 5;		//Количество итераций
	while (i < n)
	{
		i++;
		cout << i << ".Loops " << endl;
	}
#endif
#ifdef WHILE_2
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (--n > 0) 
	{
		cout << n << "\t";
	}
#endif
#ifdef PALINDROME
	int number;
	cout << "Введите число: "; cin >> number;
	int buffer = number;	// создаём копию введённого числа
	int reverse = 0;		// эта переменная будет хранить исходное число, записанное наоборот
	while (buffer > 0)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	//cout << number << endl;
	//cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Это палиндром" << endl;
	}
	else
	{
		cout << "Это простое число" << endl;
	}
#endif
#ifdef KOK 
	char key;
	do 
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;

	} while (key != Escape);
#endif
}