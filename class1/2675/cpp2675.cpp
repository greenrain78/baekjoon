#include <iostream>

using namespace std;

int main()
{
    int caseNum;

    cin >> caseNum;
    int *num = new int[caseNum];
    string *str = new string[caseNum];

    for (size_t i = 0; i < caseNum; i++)
    {
        cin >> num[i] >> str[i];
    }

    for (size_t i = 0; i < caseNum; i++)
    {
        for (size_t j = 0; j < str[i].length(); j++)
        {
            for (size_t k = 0; k < num[i]; k++)
            {
                cout << str[i][j];
            }
        }
        cout << endl;
    }
    delete[] num;
    delete[] str;
}
