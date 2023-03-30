#include<stdio.h>

int sum(int a, int b); // here we declared the function //

int main()
{
int a, b, c;
a = 5;
b = 6;
c = sum(a, b);
printf("%d\n", c);
    return 0;
}


int sum(int a, int b) { // this function is with argument and return type //
return a + b;
}
