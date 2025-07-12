// claculte Total salary with function type 4
#include<stdio.h>
double getTotalSalary(double);//declartion
void main()
{
	double basic, total;
	printf("Enter basic salary: ");
    scanf("%lf", &basic);
	total =getTotalSalary(basic);//call
	printf("Total Salary: %lf \n", total);
	
}
double getTotalSalary(double basic)//defination
{
	double da, ta, hra, total_salary;

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
    return total_salary;

}