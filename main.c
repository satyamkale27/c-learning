#include<stdio.h>
int main()
{
    // use of variables
    char charactername[] = "john"; // [] is used to store bunch of characters 
    int characterage = 35;
    printf("there once was a man named %s\n",charactername);
    printf("his age was %d\n",characterage);

characterage = 60; // modified the value in half way

    printf("he really liked liked the name %s\n",charactername);
    printf("but did not be like to be %d\n",characterage);
    return 0;
}