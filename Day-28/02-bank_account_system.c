#include<stdio.h>
struct Account{
int accNo;
char name[50];
float balance;
};
int main(){
struct Account a;
int choice;
float amount;
printf("Enter Account Number: ");
scanf("%d",&a.accNo);
printf("Enter Name: ");
scanf(" %[^\n]",a.name);
printf("Enter Initial Balance: ");
scanf("%f",&a.balance);
do{
printf("\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit");
printf("\nEnter Choice: ");
scanf("%d", &choice);
switch(choice){
case 1:
printf("Enter Deposit Amount: ");
scanf("%f",&amount);
a.balance+=amount;
break;
case 2:
printf("Enter Withdraw Amount: ");
scanf("%f",&amount);
if(amount<=a.balance)
a.balance-=amount;
else
printf("Insufficient Balance!\n");
break;
case 3:
printf("\nAccount No: %d",a.accNo);
printf("\nName: %s",a.name);
printf("\nBalance: %.2f\n",a.balance);
break;
case 4:
printf("Thank You!");
break;
default:
printf("Invalid Choice");
}
} while(choice!=4);
return 0;
}