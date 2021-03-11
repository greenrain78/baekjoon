#include <iostream>

using namespace std;

int main()
{

    int time = 0;
    int num;
    cin >> num;
    while (num != 0)
    {
        int i = 1;
        while ((num - i) >= 0)
        {
            num = num - i;
            time++;
            i++;
        }
    }
    cout << time;
}