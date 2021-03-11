#include <iostream>

using namespace std;

int main()
{
    const int DIV = 45678;
    int count;
    long long sum;
    cin >> count;

    sum = 5;
    for (size_t i = 1; i < count; i++)
    {
        sum += 4 + 3 * i;
    }
    // sum %= DIV;
    cout << sum;
}
// 5
// 5 + 7 // 7 = 4 + 3
// 5 + 7 + 10 //10 = 4 + 6
//
//