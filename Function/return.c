//In The Name Of Allah

#include<stdio.h>

int sum(int a,int b)
{
    printf("%d %d\n", a, b);
    int ans = a + b;
    printf("%d\n",ans);

    return ans;
}
int main()
{
    int val = sum(10, 5);
    printf("%d\n", val);
    return 0;
}