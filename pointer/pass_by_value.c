//In The Name Of Allah

#include<stdio.h>
#define p(a) printf("%d\n", a)

int fun(int x)
{
    x = 20;
    return x;
}

int main()
{
    //p(variable)=printf valu;
    int x = 10;
    int ans=fun(x);
    p(ans);
    p(x);

    return 0;
}