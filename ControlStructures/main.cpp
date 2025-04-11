#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "ControlStructures" << endl;
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	cout << temperature << endl;
	if (temperature > 50) 
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 40) 
	{
		cout << "Вы на экваторе";
	}
	else if(temperature > 30)
	{
		cout << "капец как жарко" << endl;
	}
	else if(temperature > 20)
	{
		cout << "жарко" << endl;
	}
	else if (temperature > 10) 
	{
		cout << "тепло" << endl;
	}
	else if (temperature > 0)
	{
		cout << "прохладно" << endl;
	}
	else if (temperature > -10) 
	{
		cout << "мороз" << endl;
	}
	else if (temperature > -30)
	{
		cout << "сильный мороз" << endl;
	}
	else if (temperature > -70) 
	{
		cout << "Вы на северном полюсе" << endl;
	}
	else 
	{
		cout << "Вы на другой планете" << endl;
	}
}