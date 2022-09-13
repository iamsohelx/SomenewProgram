#include <stdio.h>
#include <conio.h>
int main()
{
    int n;

    printf("Enter Any Number : ");
    scanf("%d", &n);

    switch (n % 2)
    {
    case 1:
        printf("\n%d Is An Odd Number", n);
        break;

    default:
        printf("\n%d Is An Even Number", n);
        break;
    }
    getch();
    return 0;
}