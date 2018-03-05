#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a=1,b=1,c=1,count=0;
	//printf("%d %d %d",a,b,c);
	while(1)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(a==0 && b==0 && c==0)
			return 0;
		/*else
		{
			int d=b-a;
			int r=b/a;
			//printf("\n%d",(int)pow(r,3));
			if((c-b)==d)
			{
				printf("\nAP\t");
				printf("%d",a+3*d);
			}
			else if((c/b)==r)
			{
				printf("\nGP\t");
				printf("%d",a*(int)pow(r,3));
			}
		}*/
		else if(a+c==2*b)
			printf("\nAP\t%d",2*c-b);
		else if(b*b==a*c)
			printf("\nGP\t%d",c*(b/a));
	}
	return 0;
}

				
