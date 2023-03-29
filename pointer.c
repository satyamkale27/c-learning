#include<stdio.h>
#include<stdlib.h>
int main() {

int age = 19;
int * pAge = &age;
double gpa = 2.9;
double * pGpa = &gpa;
char grade = 'A';
char * pGrade = &grade;

  // printf("%p\n", pAge);

// **********************************************************************//
// (this part contains derefrencing pointer)

printf("%d", *&age);
 


    return 0;
}