#include<stdio.h>
#include<stdlib.h>
int main()
{

char grade;
printf("Enter your grade :");
scanf("%c", &grade);

switch (grade)
{
case 'A' :
    printf("you did great");
    break;

    case 'B' :
    printf("you did alright");
     break;

     case 'C' :
     printf("you did poorly");
    break;

    case 'D' :
    printf("work hard");
    break;

    case 'F' :
    printf("you failed");
    break;

default :
    printf("Invalid");
}

    return 0;
}