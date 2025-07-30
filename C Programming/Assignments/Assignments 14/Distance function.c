//8. Distance ( feet, inch) with function
#include <stdio.h>
struct Distance 
{
    int feet;
    int inch;
};
struct Distance storeDistance();
void displayDistance(struct Distance);

void main()
{
	struct Distance D1,D2;
	D1=storeDistance();
	D2=storeDistance();
	
	displayDistance(D1);
	displayDistance(D2);
}
struct Distance storeDistance()
{
	struct Distance temp;
    printf("Enter distance: ");
    scanf("%d %d",&temp.feet,&temp.inch);
    return temp;
}
void displayDistance(struct Distance temp)
{
	printf("Distance= %d feet %d inches\n",temp.feet,temp.inch);	
}