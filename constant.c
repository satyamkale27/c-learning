#include<stdio.h>
int main()
{
/*
int num = 5;
printf("%d\n", num);

num = 8;  // this overwrites the value of nu

printf("%d", num);

*/
// here we will make usage of constant variables so it cannot be overwritten

const int num = 5;
printf("%d\n", num);

// num = 8;  // cant modified beacuase of constant 

printf("%d", num);

    return 0;
}