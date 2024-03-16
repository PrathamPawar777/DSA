#include <stdio.h>
#include <math.h>
#define MAX 100

int IsPrime(int n)
{
    if (n == 0 || n == 1)
        return 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a[MAX];
    int tmp;
    int i = 0, j;

    FILE *input, *output;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    if (input == NULL)
    {
        perror("ERROR : ");
    }

    while (!feof(input))
    {
        fscanf(input, "%d", &a[i]);
        i++;
    }

    for (int j = 0; j < i; j++)
    {
        printf("\n%d", a[j]);
    }

    fprintf(output, "PRIME OR NOT : ");

    for (int j = 0; j < i; j++)
    {
        fprintf(output, "\n%d-->", a[j]);

        tmp = IsPrime(a[j]);

        if (tmp)
        {
            fprintf(output, "PRIME (*****)");
        }

        else
            fprintf(output, "NOT PRIME");
    }

    fclose(output);

    return 0;
}