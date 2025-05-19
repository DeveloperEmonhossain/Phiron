// In The Name Of Allah

#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    
    while (t--)
    {
        //The problem is something hard, but i want to solve this.
        //if this problem solve other way, kindly fedbacke me.


        int A = 0, a = 0, d = 0;
        char s[10001];
        scanf("%s",&s);
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (isdigit(s[i]))
            {
                d++;
            }
            else if (islower(s[i]))
            {
                a++;
            }
            else if (isupper(s[i]))
            {
                A++;
            }
        }
        printf("%d %d %d\n",A,a,d);
    }
}