//In The Name Of Allah

#include<stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i <n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int frq[6]={0};

    for (int i = 0; i <n;i++)
    {
        frq[arr[i]]++;
    }

    for (int i = 0; i < 6;i++)
    {
        printf("%d - %d\n", i, frq[i]);
    }
        return 0;
}