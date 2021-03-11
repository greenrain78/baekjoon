#include <iostream>

using namespace std;

int main()
{
    const int ASC = 1;
    const int DES = 2;
    const int MIX = 3;

    int flag = 0;
    int number[8];

    // input
    for (size_t i = 0; i < 8; i++)
    {
        cin >> number[i];
    }

    //check
    for (size_t i = 0; i < 8; i++)
    {
        if (number[i] == i + 1)
        {
            flag = ASC;
        }
        else if (number[i] == 8 - i)
        {
            flag = DES;
        }
        else
        {
            flag = MIX;
            break;
        }
    }
    //print
    if (flag == ASC)
    {
        cout << "ascending" << endl;
    }
    else if (flag == DES)
    {
        cout << "descending" << endl;
    }
    else if (flag == MIX)
    {
        cout << "mixed" << endl;
    }
}
