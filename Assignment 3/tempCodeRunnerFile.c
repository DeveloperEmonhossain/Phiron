// In The Name Of Allah

#include <stdio.h>
#define p(a) printf("%d\n", a)

int count_before_one(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int ans = 0;
        if (arr[i] == 1)
        {
            if (arr[0] == 1)
            {
                return ans;
            }
            else
            {

                ans=(arr[i - 1]);
                return ans;
            }
        }
    }
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
    int resut = count_before_one(arr,n);
    p(resut);

    return 0;
}