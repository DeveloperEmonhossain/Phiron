// In The Name Of Allah

#include <stdio.h>
#define p(a) printf("%d\n", a)

int main()
{
    // p(variable)=printf valu;
    int t;
    scanf("%d", &t);
    while (t--)
    {

        int n;
        scanf("%d", &n);
        int a[n];
        int b[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    int swp = b[j];
                    b[j] = b[i];
                    b[i] = swp;
                }
            }
        }
        int c[n];
        for (int i = 0; i < n; i++)
        {
            c[i] = a[i] - b[i];
            printf("%d ", abs(c[i]));
        }
        printf("\n");
    }

    return 0;
}