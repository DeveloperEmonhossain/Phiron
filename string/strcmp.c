//In The Name Of Allah

#include<stdio.h>
#include<string.h>

int main()
{

    char a[100], b[22];
    scanf("%s %s", &a, &b);

    // "a" small(-1) , equal(0), "b" samll(1);
    // strcmp(a, b);
    printf("%d",strcmp(a,b) );
    return 0;
}