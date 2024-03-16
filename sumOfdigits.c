#include <stdio.h>

int main()
{
    int n, temp, sum = 0;
    printf("Enter n : ");
    scanf("%d", &n);

    temp = n;

    while (n)
    {
        temp = n % 10;

        sum = sum + temp;
        n = n / 10;
    }

    printf("%d\n", sum);
    return 0;
}