// In The Name Of Allah

#include <stdio.h>
int main()
{
    
        int cnt = 0;
        char s[1000001];
        scanf("%s", &s);
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
            {
                cnt++;
            }
           
        }
        printf("%d\n", cnt);
    
    
    return 0;
}