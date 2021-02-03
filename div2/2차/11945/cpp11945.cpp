#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    string *arr = new string[N];
    //입력
    for (size_t i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    //변환
    for (size_t i = 0; i < N; i++)
    {
        string tmp = arr[i];
        for (size_t j = 0; j < M; j++)
        {
            tmp[j] = arr[i][M - j - 1];
        }
        arr[i] = tmp;
    }
    //출력
    for (size_t i = 0; i < N; i++)
    {
        cout << arr[i] << endl;
    }

    delete[] arr;
}
