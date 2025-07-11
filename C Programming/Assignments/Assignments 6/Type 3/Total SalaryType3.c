// Salary with function Type 3
#include <stdio.h>

// declaration
void Salary(float);

void main()
{   
    float basic;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    Salary(basic); // call

}

// definition
void Salary(float basic)
{
    float  da, ta, hra, total_salary;

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
    printf("DA: %f \n", da);
    printf("TA: %f \n", ta);
    printf("HRA: %f \n", hra);

    printf("Total Salary: %f\n", total_salary);
}
