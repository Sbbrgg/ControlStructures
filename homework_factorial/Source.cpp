#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n,k, s = 1;
	cout << "������� �����: "; cin >> n; 
	k = n;
	if (n == 0)
	{
		cout << "��������� ����� 0 = " << 1;
	}
	else {
		while (n > 0)
		{
			s *= n;
			n -= 1;
		}
		cout << "��������� ����� " << k << " = " << s;
	}
}