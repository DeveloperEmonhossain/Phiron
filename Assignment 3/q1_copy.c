// In The Name Of Allah

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int str = 1;
    int spaces = n - 1;
    int flag = 0;

    // Top part (pyramid)
    for (int row = 1; row <= n; row++)
    {
        // Print spaces
        for (int i = 1; i <= spaces; i++)
            printf(" ");

        // Print characters
        char ch = (flag == 0) ? '#' : '-';
        for (int i = 1; i <= str; i++)
            printf("%c", ch);

        printf("\n");

        // Toggle flag
        flag = 1 - flag;

        str += 2;
        spaces--;
    }

    // Bottom part (inverted pyramid)
    str -= 4;
    spaces = 1;

    for (int row = 1; row < n; row++)
    {
        // Print spaces
        for (int i = 1; i <= spaces; i++)
            printf(" ");

        // Print characters
        char ch = (flag == 0) ? '#' : '-';
        for (int i = 1; i <= str; i++)
            printf("%c", ch);

        printf("\n");

        // Toggle flag
        flag = 1 - flag;

        str -= 2;
        spaces++;
    }

    return 0;
}
