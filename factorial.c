#include <stdio.h>
#include <math.h>
#define MAX 100

int main()
{
    int a[MAX];
    int i = 0, j;

    FILE *input, *output;

    input = fopen("input.txt", "r");
    output = fopen("output1.txt", "w");

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

    fprintf(output, "Factorials\n");

    for (int j = 0; j < i; j++)
    {
        fprintf(output, "\n%d -->", a[j]);

        int n = a[j];
        int res = 1;
        while (n != 0)
        {
            res = res * n;
            n--;
        }

        fprintf(output, " %d", res);
    }

    fclose(output);
}