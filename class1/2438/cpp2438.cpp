#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    for (size_t i = 1; i <= num; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}