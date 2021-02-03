#include <iostream>

using namespace std;

int main()
{
    int N, num;
    cin >> N >> num;
    if (num < 3)
    {
        cout << "NEWBIE!";
    }
    else if (num <= N)
    {
        cout << "OLDBIE!";
    }
    else
    {
        cout << "TLE!";
    }
}
