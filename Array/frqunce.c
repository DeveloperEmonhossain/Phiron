//In The Name Of Allah

#include<stdio.h>
int main()
{

    // int n[100];
    // scanf("%d", &n);

    int n;
    scanf("%d", &n);
    int s[n];
    for (int i = 0; i < n;i++)
    {
        scanf("%d",&s[i]);
    }

    int frq[6]={0};
    for (int i = 0; i < n;i++)
    {
        frq[s[i]]++;
    }
    for (int i = 0; i <6;i++)
    {
        printf("%d - %d\n", i, frq[s[i]]);
    }

        return 0;
}