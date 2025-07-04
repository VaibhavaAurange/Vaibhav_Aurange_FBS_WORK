 //Print prime numbers in the given range 1 to n.
 void main()
 {
 	int n,i,j, flag;
 	printf("Enter the range: ");
 	scanf("%d",&n);
 	
 	for(i=2;i<=n;i++)
 	{
 	 flag=1;
	  for(j=2;j<i;j++)	
	  {
	  	if(i%j==0)
	  	{
	  	  flag=0;
			break;	
		}
	  }
	   if(flag)
	   {
	  	printf("%d is an prime num\n",i);
	   }
	}
 }