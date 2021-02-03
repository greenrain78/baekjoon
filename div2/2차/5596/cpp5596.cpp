#include <iostream>

using namespace std;

int main()
{
    int caseNum;
    int sum[2];

    for (size_t i = 0; i < 2; i++)
    {
        sum[i] = 0;
        for (size_t j = 0; j < 4; j++)
        {
            int tmp;
            cin >> tmp;
            sum[i] += tmp;
        }
    }
    if (sum[0] >= sum[1])
    {
        cout << sum[0];
    }
    else
    {
        cout << sum[1];
    }
}
