//In The Name Of Allah

#include<stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    int cnt_2= 0, cnt_3 = 0;
    for (int i = 0; i < n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            cnt_2++;
        }
        else if(a[i]%3==0)
        {
            cnt_3++;
        }
    }
    printf("%d %d\n", cnt_2, cnt_3);
    return 0;
}