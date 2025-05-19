//In The Name Of Allah

#include<stdio.h>
#include<string.h>

int main()
{

    char c[20];
    scanf("%s", &c);
    printf("%s", c);

    gets(c);
    printf("%s", c);

    fgets(c, 25, stdin);
    printf("%s", c);
    return 0;
}