#include <stdio.h>

int main()
{
    int n, temp, rev = 0;

    printf("Enter n : ");
    scanf("%d", &n);

    int org = n;

    while (n)
    {
        temp = n % 10;

        rev = rev * 10 + temp;
        n = n / 10;
    }

    printf("%d\n", rev);

    if (org == rev)
        printf("It is palindrome\n");

    else
        printf("Not a palindrome\n");

    return 0;
}