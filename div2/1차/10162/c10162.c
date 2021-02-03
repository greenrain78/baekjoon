#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    int A = 10, B = 60, C = 60 * 5;
    int sum;

    scanf("%d", &sum);

    while (sum > 0)
    {
        if (sum > C)
        {
            sum -= C;
            c++;
        }
        else if (sum > B)
        {
            sum -= B;
            b++;
        }
        else
        {
            sum -= A;
            a++;
        }
    }

    if (sum < 0)
    {
        sum = -1;
        printf("%d", sum);
    }
    else
    {
        printf("%d %d %d", c, b, a);
    }
}