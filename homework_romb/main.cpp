#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");

    int number_of_symbol, copy_number_of_symbol, count = 0, i = 0, j;
    cout << "¬ведите количество / в стороне: "; cin >> number_of_symbol;
    copy_number_of_symbol = number_of_symbol;
    for (i = 0; i < number_of_symbol; i++)
    {
        for (int k = i; k <= number_of_symbol; k++)
        {
            cout << " ";
        }
        cout << "/";
        for (j = 0; j <= i * 2; j++)
        {
            cout << " ";
        }
        cout << "\\\n";
    }
    for (int l = 0; l < number_of_symbol; l++)
    {
        cout << " ";
        for (int g = 0; g <= count; g++)
        {
            cout << " ";
        }
        cout << "\\";
        for (int i = 0; i < j; i++)
        {
            cout << " ";
        }
        j -= 2;
        cout << "/\n";
        count++;
    }
}