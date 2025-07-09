//Q1-convert the time entered in hh, min, and sec into total seconds.
#include<stdio.h>
void main()
{
	int H,M,S,res;
	printf("Enter the Houres: ");
	scanf("%d",&H);
	printf("Enter the Minutes: ");
	scanf("%d",&M);
	printf("Enter the seconds: ");
	scanf("%d",&S);
	
	res=H*(60*60)+M*60+S;
	printf("%d",res);
    
}