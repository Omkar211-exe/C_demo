#include<stdio.h>
int main ()
{
    int num1 ,num2;
    printf("Enter the 1st number :");
    scanf("%d", &num1);
    printf("Enter the 2nd number :");
    scanf("%d", &num2);
    if (num1 == num2)
    {
        printf("%d = %d\n", num1 , num2);
    }
    if (num1>num2)
    {
        printf("%d > %d\n", num1, num2);
    }
    else
    {
        printf("%d < %d\n", num2 , num1);
    }
    return 0 ;
}