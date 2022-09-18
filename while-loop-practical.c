// WAP To Find Sum Of Digits Of Any Entered Number
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    int sum = 0;

    printf("Enter Any Number : ");
    scanf("%d", &n);
printf("%d",n);
    while (n>0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    printf("\nSum of Digits is %d", sum);

    return 0;
    getch();
}