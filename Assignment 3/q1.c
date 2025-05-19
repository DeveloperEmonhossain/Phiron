// In The Name Of Allah

#include <stdio.h>

#define p(a) printf("%d\n", a)

int main()
{
    // p(variable)=printf valu;
    int n;
    scanf("%d", &n);
    int str = 1, k = n;
    int flag = 0;
    int chck = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int i = k - 1; i >= 1; i--)
        {
            printf(" ");
        }

        for (int i = 1; i <= str; i++)
        {
            if (flag == 0)
            {
                printf("#");
                chck = 0;
            }
            else
            {
                printf("-");
                chck = 1;
            }
        }
        if (chck == 0)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        printf("\n");
        str += 2;
        k--;
    }

    str -= 4;
    int j = 1;
    for (int i = 1; i < n; i++)
    {
        for (int k = 1; k <= j; k++)
        {
            printf(" ");
        }

        for (int i = 1; i <=str; i++)
        {
            if (flag == 0)
            {
                printf("#");
                chck = 0;
            }
            else
            {
                printf("-");
                chck = 1;
            }
        }
        printf("\n");
        if (chck == 0)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }

        j++;
        str -= 2;
    }

    return 0;
}