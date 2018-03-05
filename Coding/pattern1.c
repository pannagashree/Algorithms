/* 1
   2*3
   4*5*6
   7*8*9*10
   7*8*9*10
   4*5*6
   2*3
   1*/
#include <stdio.h>
void main()
{
	int i=1,k=1,c,n;
	while(i<=10)
	{
		c=0;
		while(c!=k)
		{
			printf("%d",i);
			c++;
			i++;
			if(c!=k)
				printf("*");
			else
				printf("\n");
		}
		k++;
	}
	n=7;	
	i=7;
	k=4;
	while(i<=(n+k))
	{
		c=0;
		while(c!=k)
		{
			printf("%d",i);
			i++;
			c++;
			if(c!=k)
				printf("*");
			else
				printf("\n");
		}
		k--;
		n=n-k;
		i=n;
	}

}