// In The Name Of Allah

#include <stdio.h>
int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if(n==0){printf("0");}
        while (n != 0)
        {
            int x = n % 10;
            printf("%d ", x);
            n /= 10;
        } 
        

        printf("\n");
    }
   
    return 0;
}