// In The Name Of Allah

#include <stdio.h>
int main()
{

    int n, str = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int k = n - i; k >= 0; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= str; j++)
        {
            printf("%d",j);
        }
        //str += 2;
        str++;
        printf("\n");
    }
    return 0;
}