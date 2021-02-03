#include <stdio.h>

int main()
{
    int num;
    long long a = 1, b = 1, tmp;
    scanf("%d", &num);
    for (size_t i = 2; i <= num; i++)
    {
        tmp = a + b;
        a = b;
        b = tmp;
    }
    tmp = 2 * (a + b);
    printf("%lld", tmp);
}