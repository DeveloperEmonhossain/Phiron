// In The Name Of Allah

#include <stdio.h>
#define p(a) printf("%d\n", a)

int main()
{
    // p(variable)=printf valu;

    int n;
    scanf("%d", &n);

    int cnt = 0;
    for (int i = 1;i<n;i+=2)
    {
        cnt++;
    }
    cnt += 6;
    int spc = cnt;
    int str = 1;
    for (int i = 1; i <=cnt;i++)
    {
        for (int j = 0; j <=spc-2;j++)
        {
            printf(" ");
        }
        spc--;
        for (int k = 1; k <= str;k++)
        {
            printf("*");
        }
        str += 2;
        printf("\n");
    }

    for (int i = 1; i <= 5;i++)
    {
        for (int j =1; j <=5;j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= n;k++)
        {
            printf("*");
        }
        printf("\n");
    }
        return 0;
}