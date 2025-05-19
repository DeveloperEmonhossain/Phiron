// In The Name Of Allah

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //int a[10] = {10};
    //a[4] = 10;

    int idx, vul;
    scanf("%d %d", &idx, &vul);
    

    for (int i = n; i >= idx-1; i--)
    {
        a[i] = a[i - 1];
    }
    a[idx] = vul;

    for (int i = 0; i <= n;i++)
    {
        printf("%d ", a[i]);
    }
        return 0;
}