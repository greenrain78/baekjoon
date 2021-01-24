#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> card;
    int num;
    cin >> num;
    for (size_t i = 1; i <= num; i++)
    {
        card.push(i);
    }
    while (true)
    {

        num = card.front();
        card.pop();
        if (card.empty())
            break;
        num = card.front();
        card.pop();
        card.push(num);
    }
    cout << num;
}
