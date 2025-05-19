// In The Name Of Allah

#include <stdio.h>
#include <string.h>
int main()
{
    char ss[100001];
    scanf("%s", &ss);

    // if (ss[1] == '\0')
    // {
    //     return 0;
    // }
    // else
    // {

    // int frq[26] = {0};

    // for (int i = 0; i < ss[i] != '\0'; i++)
    // {
    //     frq[ss[i] - 'a']++;
    // }

    // for (int i = 0; i < 26; i++)
    // {
    //     if (frq[i] > 0)

    //         printf("%c - %d\n", i + 'a', frq[i]);
    // }
    //}

    // It's very hard for me, but i was gain information to solve this problem;

    int frq[256] = {0};

    for (int i = 0; i < ss[i] != '\0'; i++)
    {
        frq[ss[i]]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (frq[i] > 0)
        {
            printf("%c - %d\n", i, frq[i]);
        }
    }
}