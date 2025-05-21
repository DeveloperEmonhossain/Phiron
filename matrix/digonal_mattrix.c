// In The Name Of Allah

#include <stdio.h>
#include <stdbool.h>

#define p(a) printf("%d\n", a)

int main()
{
    // p(variable)=printf valu;

    int r, c;
    scanf("%d %d", &r, &c);
    int m[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    bool flag = true;
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                }
                else
                {
                    if (m[i][j] != 0)
                    {
                        flag = false;
                        printf("Not mattix");
                        break;
                    }
                }
            }
        }
        if (flag)
            printf("Mattrix");
    }
    else
    {
        printf("It not digonal mattix.");
    }
    return 0;
}