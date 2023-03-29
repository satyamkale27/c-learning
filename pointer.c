#include<stdio.h>
#include<stdlib.h>
int main() {

int age = 19;
int * pAge = &age;
double gpa = 2.9;
double * pGpa = &gpa;
char grade = 'A';
char * pGrade = &grade;

  printf("%d", pAge);
 


    return 0;
}