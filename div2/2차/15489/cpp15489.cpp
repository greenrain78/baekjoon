#include <iostream>

using namespace std;
int combi(int n, int r);

int main()
{
    cout << combi(4, 1);
    // int startLine, startPoint, sideCount;
    // cin >> startLine >> startPoint >> sideCount;

    // int sum = 0;

    // for (size_t i = 0; i < sideCount; i++)
    {
        // for (size_t j = 0; j <= i; j++)
        {
            // sum += combi(startLine + i, startPoint + j - 1);
            // cout << startLine + i << " " << startPoint + j - 1 << " : " << combi(startLine + i, startPoint + j - 1) << endl;
        }
    }
    // cout << sum;
}

int combi(int n, int r)
{
    int num1 = 1, num2 = 1, result;
    //num1
    for (size_t i = 1; i <= n; i++)
    {
        num1 *= i;
    }
    //num2
    for (size_t i = 1; i <= r; i++)
    {
        num2 *= i;
    }
    for (size_t i = 1; i <= n - r; i++)
    {
        num2 *= i;
    }
    cout << num1 << endl;
    cout << num2 << endl;
    result = num1 / num2;
    return result;
}