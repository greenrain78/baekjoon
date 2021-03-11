#include <iostream>

using namespace std;

int main()
{
    int count, max = 0;
    cin >> count;
    int num[count];

    //input
    for (size_t i = 0; i < count; i++)
    {
        cin >> num[i];
    }

    //check
    for (size_t i = 0; i < count; i++)
    {
        int now = num[i];
        int kill = 0;

        for (size_t j = i + 1; j < count; j++)
        {
            if (now > num[j])
            {
                kill++;
            }
            else
            {
                break;
            }
        }
        if (kill > max)
        {
            max = kill;
        }
    }
    cout << max;
}
// 8 3 2 1 8 7 6 5 4