// C Function Parameters //
// Information can be passed to functions as a parameter. Parameters act as variables inside the function //
#include<stdio.h>

void myfunction(char name[]) {
printf("hello %s\n", name);

}
int main() {

myfunction("kevin");
myfunction("raj");
myfunction("summit");
return 0;
}

// When a parameter is passed to the function,
//  it is called an argument. So, from the example above: name is a parameter,
//   while kevin, raj and summit are arguments.