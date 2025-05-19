// In The Name Of Allah

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        //This problme is very hard.
        //when try to more then time is automaticly solve problem
        int m1, m2, d;
        scanf("%d%d%d", &m1, &m2, &d);
        int day =d- ((m1 * d) / (m1 + m2));

        // if ((float)day != day)
        // {
        //     day++;
        // }

        printf("%d\n", day);
    }
    return 0;
}