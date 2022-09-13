#include <stdio.h>
#include <conio.h>
void main()
{
    float n1, n2, res;
    char opt;

    printf("Enter 1st Number : ");
    scanf("%f", &n1);

    printf("\nEnter Operator ( +,-,*,/) : ");
    //  fflush();
    scanf(" %c", &opt);

    printf("\nEnter 2nd Number : ");
    scanf("%f", &n2);

    switch (opt)
    {
    case '+':
        res = n1 + n2;
        printf("\nAddition result is : %.2f", res);
        break;
    case '-':
        res = n1 - n2;
        printf("\nSubtraction result is : %.2f", res);
        break;
    case '*':
        res = n1 * n2;
        printf("\nMultiplication result is : %.2f", res);
        break;
    case '/':
        res = n1 / n2;
        printf("\nDivision result is : %.2f", res);
        break;
    default:
        printf("\nOops Invalid Operator");
        break;
    }
    getch();
}