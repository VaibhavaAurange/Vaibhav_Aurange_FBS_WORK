//2.WAp to initialize some amount in your account.Then given choice to user for deosit or withdraw. and Display updted amount. condtion to withdraw 
//(if the balance is lessthan 3000 display cant withdraw the anount balance is not sufficent)using function
#include <stdio.h>
void deposit(float *, float );
void withdraw(float *, float);
void displayBalance(float );

void main() {
    float balance=6000; 
    int choice;
    float amount;

    printf("Initial balance: %.2f\n", balance);
    printf("Enter your choice:");
    scanf("%d",&choice);

    if (choice==1) 
	{
        printf("\nEnter amount to deposit:");
        scanf("%f", &amount);
        deposit(&balance, amount);
    } 
	else if (choice==2) 
	{
        printf("\nEnter amount to withdraw:");
        scanf("%f", &amount);
        withdraw(&balance, amount);
    } 
	else 
	{
        printf("Invalid choice!\n");
    }
      displayBalance(balance);  
}

void deposit(float *balance,float amount) 
{
    *balance=*balance+amount;
    printf("%.2f deposited successfully.\n", amount);
}

void withdraw(float *balance, float amount) 
{
    if (*balance < 3000) 
	{
        printf("not withdraw, Balance %.2f is less than minimum 3000.\n", *balance);
    } else if (*balance-amount < 3000) 
	{
        printf("Withdrawal not possible, Minimum balance 3000 must be maintained.\n");
    } else 
	{
        *balance=*balance-amount;
        printf("%.2f withdrawn successfully.\n", amount);
    }
}

void displayBalance(float balance) 
{
    printf("Updated Balance is: %.2f\n", balance);
}
