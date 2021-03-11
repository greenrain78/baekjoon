#include <iostream>

using namespace std;

int main()
{
    const int D = 10;
    const int C = 26;

    string format;
    int sum = 1, c = 0, d = 0;

    //input
    cin >> format;
    for (size_t i = 0; i < format.length(); i++)
    {
        if (format[i] == 'c')
        {
            c++;
        }
        if (format[i] == 'd')
        {
            d++;
        }
    }
    cout << c << d << endl;
    //check
    for (size_t i = 0; i < c; i++)
    {
        sum *= C - i;
    }
    for (size_t i = 0; i < d; i++)
    {
        sum *= D - i;
    }
    cout << sum;
}