// In The Name Of Allah

#include <stdio.h>
#include <string.h>

int main()
{

    char a[100], b[22];
    scanf("%s %s", &a, &b);

    //b concate a
    int len_a = strlen(a);
    int len_b = strlen(b);
    for (int i = 0; i <= len_b; i++)
    {
        a[i + len_a] = b[i];
    }

    // a concat b
    for (int i = 0; i <= len_b; i++)
    {
        a[i + len_a] = b[i];
    }
    printf("%s %s", a, b);
    return 0;
}