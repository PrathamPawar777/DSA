#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define Max 10

void sortArr(int arr[])
{
    int temp;
    for (int i = 0; i < Max; ++i)
    {

        for (int j = i + 1; j < Max; ++j)
        {

            if (arr[i] > arr[j])
            {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{

    int a[Max];

    srand(time(NULL));

    for (int i = 0; i < Max; i++)
    {
        int c = rand() % 10;
        a[i] = c;
    }

    FILE *output;

    output = fopen("output.txt", "w");

    fprintf(output, "\n Generating Random no's: ");
    for (int j = 0; j < Max; j++)
    {
        fprintf(output, "\n%d ", a[j]);
        printf("%d\n", a[j]);
    }

    sortArr(a);

    fprintf(output, "\n Sorted \n");
    for (int j = 0; j < Max; j++)
    {
        fprintf(output, "\t%d ", a[j]);
        printf("%d\n", a[j]);
    }

    return 0;
}