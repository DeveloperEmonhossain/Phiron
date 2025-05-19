//In The Name Of Allah

#include<stdio.h>
int main()
{

    char ch[4];  
    for (int i = 0; i < 4;i++)
    {
        scanf("%c", &ch[i]);
    }

    for (int i = 0; i < 4;i++)
    {
        printf("%c ", ch[i]);
    }
        return 0;
}