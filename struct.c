#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};



int main() {

struct student student1;
student1.age = 22;
student1.gpa = 3.2;
strcpy( student1.name, "alan");
strcpy( student1.major, "computer");

printf("%f", student1.gpa);


    return 0;
}