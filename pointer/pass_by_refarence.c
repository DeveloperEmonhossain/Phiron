//In The Name Of Allah

#include<stdio.h>
#define p(a) printf("%d\n", a)

void fun(int* x)
{
    *x = 20;
}

int main()
{//p(variable)=printf valu;

    int x = 10;
    p(x);

    fun(&x);
    p(x);

    return 0;
    /**/
}