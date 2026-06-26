#include<stdio.h>
int main(){
int secret=25,guess;
printf("Number Guessing Game\n");
printf("Guess a number between 1 and 50: ");
scanf("%d",&guess);
if(guess==secret)
printf("Congratulations! You guessed the correct number.\n");
else if(guess< secret)
printf("Too Low!\n");
else
printf("Too High!\n");
printf("Correct Number = %d\n",secret);
return 0;
}