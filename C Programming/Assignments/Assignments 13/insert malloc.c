// insert the element in array
#include <stdio.h>
void main()
{
    int*arr=(int*)malloc(sizeof(int)*5); 
	int size,pos,value;
    printf("Enter size of array: ");
    scanf("%d",&size);

    printf("Enter %d elements:\n",size);
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
        
    printf("Enter position to insert (1 to %d): ",size+1);
    scanf("%d",&pos);

    printf("Enter value to insert: ");
    scanf("%d",&value);

    for(int i=size;i>=pos;i--)
    arr[i]=arr[i-1];

    arr[pos-1]=value;
    size++;

    printf("Updated array:\n");
    for(int i=0;i<size;i++)
    printf("%d ",arr[i]);
}
