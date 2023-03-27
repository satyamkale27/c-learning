#include<stdio.h>
#include<stdlib.h>
int main() {

int secretnumber = 5;
int guess;
int guesslimit = 3;
int guesscount = 0;
int outofguess = 0;

while (guess != secretnumber && outofguess == 0) // == used to check condition 
{
    if (guesscount < guesslimit) {
    printf("Enter the number:");
    scanf("%d", &guess);
    guesscount++;

    } else {
        outofguess = 1;
    }

}


if(outofguess == 1) {

    printf("out of guess");

} else {
    printf("you win");
}


    return 0;
}