#include <stdio.h>
#include <conio.h>
void main()
{
    int n;

    printf("Enter Any Number (0 - 9) : ");
    scanf("%d", &n);

    switch (n)
    {
    case 0:
        printf("\nIts A Zero");
        break;
    case 1:
        printf("\nIts A One");
        break;
    case 2:
        printf("\nIts A Two");
        break;
    case 3:
        printf("\nIts A Three");
        break;
    case 4:
        printf("\nIts A Four");
        break;
    case 5:
        printf("\nIts A Five");
        break;
    case 6:
        printf("\nIts A Six");
        break;
    case 7:
        printf("\nIts A Seven");
        break;
    case 8:
        printf("\nIts A Eight");
        break;
    case 9:
        printf("\nIts A Nine");
        break;
    default:
        printf("\nInvalid Number!!!");
        break;
    }
    getch();
}