// In The Name Of Allah

#include <stdio.h>
#define p(a) printf("%d\n", a)

void odd_even()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    int odd = 0, even = 0;
    for (int i = 0; i < n;i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d\n", even, odd);
}

int main()
{
    // p(variable)=printf valu;

    odd_even();

    return 0;
}