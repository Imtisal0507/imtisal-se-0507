#include<stdio.h>

main()
{
	int n,i=1,ev=0,od=0,evcount=0,odcount=0;
	
	while(i<=5)
	{
		printf("/nenter number : ");
		scanf("%d",&n);
		if(n%2==0)
		{
			printf("/n%d is even : ");
			ev++;
			evcount=evcount-n;
		}
		else
		{
			printf("/n%d is odd : ");
			od++;
			odcount= odcount-n;
		}
		i++;
		
	}
	printf("/nsum of even :%d ",&ev);
	printf("/nsum of odd :%d ",&od);
	printf("/nsum of evcount :%d",&evcount);
	printf("/nsum of odcount :%d",&odcount);
	
}
