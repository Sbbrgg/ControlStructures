#include <iostream>

using namespace std;
#define LEFT_BORDER 100000
#define RIGHT_BORDER 999999

void main() 
{
	setlocale(LC_ALL, "Russian");
	int ticket, right_part, left_part, summ_right_part = 0, summ_left_part = 0;
	
	bool a = true;
	while(a)
	{
		cout << "¬ведите номер билета: "; cin >> ticket;
		if (ticket < LEFT_BORDER or ticket > RIGHT_BORDER)
		{
			cout << "¬ведите шестнизначное число!\n";
		}
		else
		{
			a = false;
		}
	}
	right_part = ticket / 1000;
	left_part = ticket % 1000;
	while (right_part > 0)
	{
		summ_right_part += right_part % 10;
		right_part /= 10;
	}
	while (left_part > 0)
	{
		summ_left_part += left_part % 10;
		left_part /= 10;
	}

	if (right_part == left_part)
	{
		cout << "Ѕилет счастливый.";
	}
	else
	{
		cout << "Ѕилет не счастливый";
	}
}