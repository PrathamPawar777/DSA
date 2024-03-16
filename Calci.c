#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double n1, n2;
    char op;
    double res;

    while (1)
    {
        printf("Enter (a + b) =\n");

        scanf("%lf%c%lf", &n1, &op, &n2);

        switch (op)
        {
        case '+':
            res = n1 + n2;
            break;

        case '-':
            res = n1 - n2;
            break;

        case '*':
            res = n1 * n2;
            break;

        case '/':
            res = n1 / n2;
            break;

        case '^':
            res = pow(n1, n2);
            break;

        default:
            exit(0);
            break;
        }

        printf("%.2lf\n", res);
    }

    return 0;
}