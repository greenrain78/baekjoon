#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    for (size_t i = 0; i < str.length(); i++)
    {
        char tmp = str[i];
        if (tmp > 'w')
        {
            tmp += 26;
        }
        else
        {
            tmp -= 3;
        }
        str[i] = tmp;
    }
    cout << str;
}