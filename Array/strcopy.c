//In The Name Of Allah

#include<stdio.h>
#include<string.h>

int main()
{

    char a[100], b[22];
    scanf("%s %s", &a, &b);

    strcpy(a, b); // a copy b value;
    printf("%s %s",a,b );
    return 0;
}