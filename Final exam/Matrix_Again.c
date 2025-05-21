// In The Name Of Allah

#include <stdio.h>
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

    int a = 1, b = 1;
    for (int i = r - 1; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", m[i][j]);
        }
    }
    printf("\n");
    for (int i = c - 1; i < c;i++)
    {
        for (int j = 0; j < r;j++)
        {
            printf("%d ", m[j][i]);
        }
    }
}