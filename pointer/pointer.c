#include<stdio.h>
int main(){
int a=28;
int* ptra = &a;
printf("lets learn pointer\n");
printf("the adress of pointer to a is %p\n", &ptra);
printf("the value of a is %d\n", *ptra);
printf("the adress of a is %p\n", &a);
printf("the value of pointer var  is %p\n", ptra);
    return 0;
}