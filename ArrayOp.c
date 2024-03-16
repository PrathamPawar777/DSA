#include <stdio.h>
#define MAX 10

int maxArr(int a[], int size)
{
    int max = 0;

    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int SumArr(int a[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }

    return sum;
}

int linearSearch(int a[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == a[i])
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int a[MAX];
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

    int max = maxArr(a, i);
    int sum = SumArr(a, i);
    double avg = sum / i;

    for (int j = 0; j < i; j++)
    {
        fprintf(output, "\n%d -->", a[j]);
    }

    int key;
    printf("\nEnter key : \n");
    scanf("%d", &key);

    int index = linearSearch(a, i, key);

    fprintf(output, "\nElement %d is at index = %d\n", key, index);

    fprintf(output, "Max = %d\n", max);
    fprintf(output, "Sum = %d\n", sum);
    fprintf(output, "avg = %lf\n", avg);

    return 0;
}