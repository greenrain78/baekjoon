#include <iostream>

using namespace std;

int main()
{
    int num, max = 0, count = 0;
    for (size_t i = 0; i < 9; i++)
    {
        cin >> num;
        if (num > max)
        {
            max = num;
            count = i + 1;
        }
    }
    cout << max << endl;
    cout << count << endl;
}