//In The Name Of Allah

#include<stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    for (int i = n-1; i >=0;i--)
    {
        for (int j = i; j >=0;j--)
        {
            printf("* ");
        } 
        printf("\n");
    }
        return 0;
}