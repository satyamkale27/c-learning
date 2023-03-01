#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
double num1;
double num2;
char op;

printf("Enter the number :");
scanf("%lf", &num1);
printf("Enter the operator :");
scanf(" %c", &op);
printf("Enter the number :");
scanf("%lf", &num2);

if (op == '+')
{
    printf("the sum is :%f", num1 + num2);
}
else if (op == '-')
{
    printf("the substraction is :%f", num1 - num2);
}

else if (op == '/')
{
    printf("the dividation is :%f", num1 / num2);
}

else if (op == '*')
{
    printf("the multiplaction is :%f", num1 * num2);
}

else {
    printf("invalid");
}


    return 0;
}