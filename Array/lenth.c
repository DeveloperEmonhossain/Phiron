//In The Name Of Allah

#include<stdio.h>
#include<string.h>

int main()
{

    char a[100];
    //scanf("%s", &a);
    gets(a);
    //fgets(a,)
    int sz = strlen(a);

    printf("%d", sz);
    return 0;
}