// In The Name Of Allah

#include <stdio.h>
#define p(a) printf("%d\n", a)

void arr_print(int arr[], int n,int i)
{
    printf("%d", arr[i]);
    arr_print(i + 1);
}

    int main()
{
    // p(variable)=printf valu;

    int n;
    scanf("%d", &n);
    int arr[n];
    int i = 0;
    for (i = 0; i < n;i++)
    {
        scanf("%d", arr[i]);
    }
    arr_print(arr, n, i);
    return 0;
}