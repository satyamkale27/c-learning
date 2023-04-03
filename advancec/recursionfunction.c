#include <stdio.h>

int sum(int number)
{

    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * sum(number - 1));
    }
}

int main()
{
    int digit;
        printf("Enter the number:");
    scanf("%d", &digit);
    printf("%d", sum(digit));  // here i called the function as well as passed argument //

    return 0;
}