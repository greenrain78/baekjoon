#include <stdio.h>

int main()
{
    int num, count = 0;
    scanf("%d", &num);

    while (num > 0)
    {
        int max = 0;
        while (num > max * max)
        {
            max++;
        }
        if (num < 3)
        {
            num--;
        }
        else
        {
            max--;
            num -= max * max;
        }

        count++;
    }
    printf("%d", count);
}