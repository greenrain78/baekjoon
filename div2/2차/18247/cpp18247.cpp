#include <iostream>

using namespace std;

int main()
{
    int count, N, M;
    cin >> count;

    int *num = new int[count];
    for (size_t i = 0; i < count; i++)
    {
        cin >> N >> M;
        if (N < 12 || M < 4)
        {
            num[i] = -1;
        }
        else
        {
            num[i] = 11 * M + 4;
        }
    }
    for (size_t i = 0; i < count; i++)
    {
        cout << num[i] << endl;
    }

    delete[] num;
}
