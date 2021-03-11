#include <iostream>
#include <string>

using namespace std;

int main()
{
    string result[5];
    string fbi = "FBI";
    string name;
    bool flag = false;
    for (size_t i = 0; i < 5; i++)
    {
        cin >> name;
        if (name.find(fbi) != -1)
        {
            flag = true;
            result[i] = to_string(i + 1);
        }
        else
        {
            result[i] = "";
        }
    }
    if (flag)
    {
        for (size_t i = 0; i < 5; i++)
        {
            cout << result[i];
        }
    }
    else
    {
        cout << "HE GOT AWAY!";
    }
}
