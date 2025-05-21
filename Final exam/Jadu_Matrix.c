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
                if (i == j || i + j == r - 1)
                {
                    if (m[i][j] != 1)
                    {
                        flag = false;
                        break;
                    }
                }
                else
                {
                    if (m[i][j] != 0)
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if (!flag)
                break;
        }

        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
