// sawap the no using pointer
#include<stdio.h>
void swap(int*, int*);//declartion
void main()
{
	int a=10, b=20;
	printf("\n Before swap a=%d b=%d",a,b);
	swap(&a,&b);//call
	printf("\n After swap a=%d b=%d",a,b);
	
}
void swap(int* a,int* b)//defination
{
	printf("\n address of a=%u address of b=%d",a,b);
      int temp=*a;
	  *a=*b;
	  *b=temp;
	printf("\n address of a=%u address of b=%d",a,b);
}