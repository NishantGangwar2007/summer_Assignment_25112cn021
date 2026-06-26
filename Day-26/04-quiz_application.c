#include<stdio.h>
int main(){
int ans,score=0;
printf("Quiz Application\n\n");
printf("Q1. What is the capital of India?\n");
printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");
printf("Enter your answer: ");
scanf("%d",&ans);
if(ans==2)
score++;
printf("\nQ2. Which language is used for C programming?\n");
printf("1. Python\n2. Java\n3. C\n4. HTML\n");
printf("Enter your answer: ");
scanf("%d",&ans);
if(ans==3)
score++;
printf("\nYour Score = %d/2\n",score);
return 0;
}