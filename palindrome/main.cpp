#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//#define PALINDROME
#define CLASS_TICKET
void main() {
	setlocale(LC_ALL, "Russian");
#ifdef PALINDROME	
	int is_this_palindrome, number_of_digets = 0, right_part = 0, left_part = 0, middle_part = 0, reverse_right_part = 0;
	cout << "������� ���� �����: ";
	cin >> is_this_palindrome;
	int palindrome_for_while = is_this_palindrome, ten = 1;
	double reverse_ten = 1;
	while (palindrome_for_while > 0)
	{
		palindrome_for_while /= 10;
		number_of_digets += 1;
	}
	//cout << number_of_digets << endl;

	for (int i = 0; i < (int)number_of_digets / 2; i++)
	{
		ten *= 10;
		reverse_ten *= 0.1;
	}
	/*cout << endl;
	cout << is_this_palindrome << " ���� �����" << endl;
	cout << ten << " ����������, �� ������� ����� ������" << endl;
	cout << reverse_ten << " ����������, �� ������� ����� �����" << endl;*/

	if (number_of_digets % 2 == 0)
	{
		right_part = is_this_palindrome % ten;
		left_part = is_this_palindrome / ten;
		/*cout << right_part << " right part" << endl;
		cout << left_part << " left part" << endl;*/
		while (right_part > 0)
		{
			reverse_right_part += right_part % 10;
			reverse_right_part *= 10;
			right_part /= 10;
		}
		reverse_right_part /= 10;
		/*cout << reverse_right_part << " ����������� ������ ����� �����" << endl;*/
		if (reverse_right_part == left_part)
		{
			cout << "�����: " << is_this_palindrome << " - ���������";
		}
		else {
			cout << "�����: " << is_this_palindrome << " - �� ���������";
		}
	}
	else {
		right_part = is_this_palindrome % ten;
		left_part = is_this_palindrome / ten / 10;
		middle_part = is_this_palindrome / ten % 10;
		/*cout << right_part << " right part" << endl;
		cout << left_part << " left part" << endl;
		cout << middle_part << " middle part" << endl;*/
		while (right_part > 0)
		{
			reverse_right_part += right_part % 10;
			reverse_right_part *= 10;
			right_part /= 10;
		}
		reverse_right_part /= 10;
		if (reverse_right_part == left_part)
		{
			cout << "�����: " << is_this_palindrome << " - ���������";
		}
		else {
			cout << "�����: " << is_this_palindrome << " - �� ���������";
		}
	}
#endif

#ifdef CLASS_TICKET
	int number; 
	cout << "������� ����� ����������� ������: "; cin >> number;
	int sum_1 = 0;		// ����� ��� ������� ��������
	int sum_2 = 0;		// ����� ��� ������� ��������
	while (number > 1000)
	{
		sum_1 += number % 10;
		number /= 10;
	}
	while (number > 0)
	{
		sum_2 += number % 10;
		number /= 10;
	}
	cout << sum_1 << endl;
	cout << sum_2 << endl;
#endif


}