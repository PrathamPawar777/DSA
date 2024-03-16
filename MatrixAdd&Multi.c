#include<stdlib.h>
#include<stdio.h>

#define R 10
#define C 10

void readmatrix(int[R][C], int, int);
void displaymatrix(int[R][C], int, int);
void MatrixMultiplicatn(int[R][C], int, int ,int[R][C], int, int , int[R][C]);

int main()
{
    int a[R][C];
    int b[R][C];
    int x[R][C];
    int r1, c1 , r2 ,c2;

    printf("Enter r1 & c1 : \n");
    scanf("%d%d", &r1, &c1);

    printf("Enter r2 & c2 : \n");
    scanf("%d%d", &r2, &c2);

    if (c1 != r2)
    {
       printf("Invalid\n"); 
       exit(0);
    }
    

    printf("Enter elements of a:\n");
    readmatrix(a, r1, c1);
    printf("\n");

    printf("Enter elements of b:\n");
    readmatrix(b, r2, c2);
    printf("\n"); 

    printf("Elements are [a]:\n");
    displaymatrix(a, r1, c1);
    printf("\n");

    printf("Elements are [b]:\n");
    displaymatrix(b, r2, c2);
    printf("\n");

    MatrixMultiplicatn(a , r1 , c1 , b , r2 , c2 , x);


    displaymatrix(x , r1 , c2);
}

void readmatrix(int mat[R][C], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void displaymatrix(int mat[R][C], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }
}

void MatrixMultiplicatn(int a[R][C], int r1, int c1, int b[R][C], int r2, int c2, int x[R][C])
{
     for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
          for (int k = 0; k < c1; k++)
          {
            x[i][j] = x[i][j] +(a[i][k] * b[j][k]);
          }
          
        }

    }

}
