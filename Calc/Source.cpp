#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define CLASS_CALC
//#define SWITCH
void main()
{
	setlocale(LC_ALL, "Russian");

#if defined CLASS_CALC	
	double a, b;
	char s;
	cout << "¬ведите арифметическое выражение: ";
	cin >> a >> s >> b;
	if (s == '+') cout << a << " + " << b << "  =" << a + b << endl;
	else if (s == '-') cout << a << " - " << b << " = " << a - b << endl;
	else if (s == '*') cout << a << " * " << b << " = " << a * b << endl;
	else if (s == '/') cout << a << " / " << b << " = " << a / b << endl;
	else cout << "Error: No operation" << endl;
#endif

#if defined SWITCH 
	double a, b;
	char s;
	cout << "¬ведите арифметические выражение: "; cin >> a >> s >> b;
	switch (s)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '/': cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error: No operation" << endl;
	}
#endif
}