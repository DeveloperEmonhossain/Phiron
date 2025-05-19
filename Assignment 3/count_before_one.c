// In The Name Of Allah

#include <stdio.h>
#define p(a) printf("%d\n", a)

int count_before_one(int arr[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == 1)
        {
            break;
        }
        cnt++;
    }
    return cnt;
}

int main()
{
    // p(variable)=printf valu;

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int resut = count_before_one(arr, n);
    printf("%d\n", resut);

    return 0;
}