#include<stdio.h>
struct Ticket{
char name[50];
int seat;
};
int main(){
struct Ticket t;
int booked = 0,choice;
do{
printf("\n1.Book Ticket");
printf("\n2.View Ticket");
printf("\n3.Exit");
printf("\nEnter Choice: ");
scanf("%d",&choice);
switch(choice){
case 1:
printf("Enter Passenger Name: ");
scanf(" %[^\n]",t.name);
printf("Enter Seat Number: ");
scanf("%d",&t.seat);
booked = 1;
printf("Ticket Booked Successfully!\n");
break;
case 2:
if(booked){
printf("\nPassenger: %s",t.name);
printf("\nSeat No: %d\n",t.seat);
}else{
printf("No Ticket Booked!\n");
}
break;
case 3:
printf("Thank You!");
break;
default:
printf("Invalid Choice");
}
}while(choice!=3);
return 0;
}