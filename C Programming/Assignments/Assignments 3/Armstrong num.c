// Armstrong number

void main()
{
	int n, r, arm=0;
	int temp;
	printf("Enter any num: ");
	scanf("%d",&n);
	temp=n;
	
	while(n>0)
	{
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
	}
	  if (temp==arm)
	    printf("Armstron num ");
	  else
	    printf("Not Armstron num ");
}