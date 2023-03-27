#include<stdio.h>
#include<stdlib.h>
int main() {

int secretnumber = 5;
int guess;

while (guess != secretnumber)
{
    printf("Enter the number:");
    scanf("%d", &guess);
}
printf("you win");



    return 0;
}