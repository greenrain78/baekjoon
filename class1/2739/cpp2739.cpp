#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    for (size_t i = 1; i < 10; i++)
    {
        cout << num << " * " << i << " = " << i * num << endl;
    }
}
