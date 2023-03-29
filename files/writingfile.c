#include<stdio.h>
#include<stdlib.h>
int main() {

FILE * fpointer = fopen("employees.txt", "w");
fclose(fpointer);


    return 0;
}