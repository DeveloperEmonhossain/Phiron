// In The Name Of Allah

#include <stdio.h>
int main()
{

    int n, x;
    scanf("%d%d", &n, &x);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i] + a[j] == x)
            {
                printf("%d %d", i, j);
                break;
            }
        }
    }
    return 0;
}