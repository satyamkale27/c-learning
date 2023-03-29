#include<stdio.h>
#include<stdlib.h>
int main() {

// FILE * fpointer = fopen("employees.txt", "w"); // w means write //
 // fprintf(fpointer,"jim, salesman\nkevin, accountant\ndavid, software developer");
     // fprintf used to write files//
FILE * fpointer = fopen("employees.txt", "a");
fprintf(fpointer,"\nkelly, customer service"); // a is used to write newely //

fclose(fpointer); 


    return 0;
}