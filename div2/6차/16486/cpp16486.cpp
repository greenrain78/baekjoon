#include <iostream>

using namespace std;

int main()
{
    const double pi = 3.141592;
    int d1, d2;
    cin >> d1 >> d2;
    double result = d1 * 2 + d2 * 2 * pi;
    cout.precision(10);

    cout << result;
}