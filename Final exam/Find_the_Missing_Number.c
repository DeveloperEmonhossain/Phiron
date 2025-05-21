// In The Name Of Allah

#include <stdio.h>
#define p(a) printf("%d\n", a)
typedef long long int ll;

int main()
{
    // p(variable)=printf valu;

    ll r;
    scanf("%d", &r);
    long long int a[r][4];
    
    for (ll i = 0; i < r; i++)
    {
        
        for (ll j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }

        long long int mul = 1;
        double div = 0.0;
        // int b[r][4]=a[i][];

        for (ll k = 1; k < 4; k++)
        {
            mul *=a[i][k];
        }

        div =(double)a[i][0] / mul;

        if ((ll)div != div)
        {
            printf("-1\n");
        }
        else
        {
            printf("%llf\n",(ll)div);
        }

       // printf("emon");
    }
    return 0;
}