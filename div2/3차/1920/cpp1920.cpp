#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> num;
    int count;
    //input
    cin >> count;
    for (size_t i = 0; i < count; i++)
    {
        int tmp;
        cin >> tmp;
        num.push_back(tmp);
    }
    //sort
    sort(num.begin(), num.end());

    //input
    cin >> count;
    int tmp, flag;
    for (size_t i = 0; i < count; i++)
    {
        flag = 0;
        cin >> tmp;
        for (size_t j = 0; j < count; j++)
        {
            if (tmp == num[j])
            {
                flag = 1;
                break;
            }
        }
        cout << flag << endl;
    }

}