#include <iostream>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    // int *arr = new int[N];
    int *arr = new int[K];
    int max = 0;

    //처음
    for (size_t i = 0; i < K; i++)
    {
        cin >> arr[i];
        max += arr[i];
    }

    //반복
    for (size_t i = K; i < N; i++)
    {
        int tmp, sum;
        cin >> tmp;
        //arr 갱신
        for (size_t j = 0; j < K - 1; j++)
        {
            int num = arr[j + 1];
            arr[j] = num;
        }
        arr[K - 1] = tmp;
        //sum
        sum = 0;
        for (size_t j = 0; j < K; j++)
        {
            sum += arr[j];
        }
        //비교
        if (sum > max)
        {
            max = sum;
        }
    }
    cout << max;
}
