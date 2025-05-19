// In The Name Of Allah

#include <stdio.h>
#define p(a) printf("%d\n", a)

void hello(int i)
{
    if (i == 5)
    {
        return;
    }

    p(i);
    hello(i+1);
}

int main()
{
    // p(variable)=printf valu;

    hello(1);
    return 0;
}