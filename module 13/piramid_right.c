// In The Name Of Allah

#include <stdio.h>
int main()
{

    int n, str = 1;
    scanf("%d", &n);

    //just change srt value,

    for (int i = 1; i <= n; i++)
    {
        for (int k = n - i; k >= 0; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= str; j++)
        {
            printf("*");
        }
        str ++;
        printf("\n");
    }
    return 0;
}