// In The Name Of Allah

#include <stdio.h>
#define p(a) printf("%d\n", a)

int main()
{
    // p(variable)=printf valu;

    int n;
    scanf("%d", &n);

    int str = n, num=1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = str - 1; j >= 1; j--)
        {
            printf(" ");
        }
        str--;
        for (int k =num; k >= 1; k--)
        {
            printf("%d",k);
        }
        printf("\n");
        num++;
    }

    return 0;
}