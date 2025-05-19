// In The Name Of Allah

#include <stdio.h>
#include <string.h>

#define p(a) printf("%d\n", a)

int is_palindrome(char S[])
{
    int str = 0;
    int end = strlen(S) - 1;

    while (str < end)
    {
        if (S[str] != S[end])
        {
            return 0;
        }
        str++;
        end--;
    }
    return 1;
}

int main()
{

    char S[1000];
    scanf("%s", S);

    int palim = is_palindrome(S);
    if (palim == 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}