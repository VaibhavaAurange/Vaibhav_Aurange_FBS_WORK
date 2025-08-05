#include <stdio.h>
int main() 
{
    int age[5];
    float ticketAmount,individualAmount;
    float total=0;
    int i;
    printf("Enter base ticket amount: ");
    scanf("%f",&ticketAmount);

    for(i=0;i<5;i++) 
    {
        printf("Enter age of person %d: ",i+1);
        scanf("%d",&age[i]);
        if(age[i]<12) 
		{
            individualAmount=ticketAmount*0.70;
        }
	    else if(age[i]>59) 
		{
            individualAmount=ticketAmount*0.50;
        } 
		else 
		{
            individualAmount=ticketAmount;
        }

        total=total+individualAmount;
    }
    printf("Total ticket amount for 5 people: %.2f\n",total);
}
