//In The Name Of Allah

#include<stdio.h>
#include <string.h>

int main()
{

    char s[100];
    //scanf("%s", &s);
    gets(s);

    // int cnt = 0;
    // for (int i = 0; s[i] != '\0';i++)
    //     {
    //         cnt++;
    //     }

    int cnt = strlen(s);
    
    printf("%d", cnt);
    return 0;
}