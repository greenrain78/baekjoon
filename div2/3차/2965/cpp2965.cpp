#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int r, l;
    cin >> a >> b >> c;
    l = b - a - 1;
    r = c - b - 1;
    if (l < r)
    {
        cout << r;
    }
    else
    {
        cout << l;
    }
}
