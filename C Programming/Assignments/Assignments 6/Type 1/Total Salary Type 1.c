//Toatl salary with type  
#include<stdio.h>
void getTotalSalary();//declration
void main()
{
	getTotalSalary();//call
}
void getTotalSalary()//defination
{
	
    double basic, da, ta, hra, total_salary;
    printf("Enter basic salary: ");
    scanf("%lf", &basic);


    if (basic <= 5000) 
	{
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    } 
	else 
	{
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }

    total_salary = basic + da + ta + hra;
    printf("DA: %lf \n", da);
    printf("TA: %lf \n", ta);
    printf("HRA: %lf \n", hra);
    printf("Total Salary: %f \n", total_salary);
	
}