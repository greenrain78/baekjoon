#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    int timeA = 10, timeB = 60, timeC = 60 * 5;
    int sum;

    scanf("%d", &sum);
    //예외 처리
    if (sum % 10 != 0)
    {
        printf("-1");
        return 0;
    }
    while (sum >= timeC)
    {
        sum -= timeC;
        c++;
    }
    while (sum >= timeB)
    {
        sum -= timeB;
        b++;
    }
    while (sum >= timeA)
    {
        sum -= timeA;
        a++;
    }
    printf("%d %d %d", c, b, a);
}