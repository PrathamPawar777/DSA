#include <stdio.h>

int main()
{
    int t1 = 0, t2 = 1;
    int t3, n;
    printf("Enter n : ");
    scanf("%d", &n);

    printf("Fibonacci series : %d %d", t1, t2);

    for (int i = 3; i < n; i++)
    {
        t3 = t1 + t2;
        printf(" %d", t3);
        t1 = t2;
        t2 = t3;
    }

    return 0;
}