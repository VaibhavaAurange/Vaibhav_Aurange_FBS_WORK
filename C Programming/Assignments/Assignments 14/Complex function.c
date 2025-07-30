//9. Complex (real, imaginary) with functon
#include <stdio.h>
struct Complex
{
    float real;
    float imaginary;
};
struct Complex storeComplex();
void displayComplex(struct Complex);
void main()
{
	struct Complex C1,C2;
	C1=storeComplex();
	C2=storeComplex();
	
	displayComplex(C1);
	displayComplex(C2);
}
struct Complex storeComplex()
{
	struct Complex temp;
    printf("Enter complex number: ");
    scanf("%f %f",&temp.real,&temp.imaginary);
    return temp;
}
void displayComplex(struct Complex temp)
{
	printf("Complex Number=\n");
    printf("C1=%.2f+%.2fi\n",temp.real,temp.imaginary);
}