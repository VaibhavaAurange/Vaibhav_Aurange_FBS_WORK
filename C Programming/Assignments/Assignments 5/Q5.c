//inverted pyramid pattern n=5
void main() 
{
    int n ;
    printf("Enter the n: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++) 
	{
        for(int j=0; j<i;j++) 
		{
            printf(" ");
        }
        for(int k=0; k<n-i; k++) 
		{
            printf("*");
        }
           printf("\n");
    }
    
}
