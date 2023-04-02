#include<stdio.h>

void myfunction(char grade[], int age) { // passing multiple parameters //
printf("Hello %s\n.you are %d", grade, age);

}

int main() {

myfunction("kevin", 19);
// Note that when you are working with multiple parameters, the function call must have the same number of arguments as there are parameters,
// and the arguments must be passed in the same order.

    return 0;
}