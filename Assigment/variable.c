#include<stdio.h>
int main()
{
    int a;
    long long b;
    double d;
    char c;
    scanf("%d %lld %lf %c", &a, &b, &d, &c);
    printf("%d\n%lld\n%lf\n%c\n", a, b, d, c);
}