#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include <stdlib.h>
struct operands
{
	char var;
	int flag:1;
	int coeff;
	int power;
};
void main()
{
	//printf("%d\n",sizeof(struct operands));

	char poly[50];
	int k=-1,num,n,p=0,np[5],count=0,flag=0,x,signinversion_flag=0;
	int coef[3];
	static struct operands exparr[3][10];
	printf("Enter a polynomial expression:%s",poly);
	scanf("%s",poly);
	n=strlen(poly);
	//printf("%s\n",poly);
	for(int i=0;i<n;i++)
	{
		if(poly[i]=='(')
		{
			count++;
			continue;
		}
		else if(isdigit(poly[i]))
		{
			num=poly[i]-'0';
			//printf("%d\n",num);
			if(num==0)
				continue;
			else if((i-1)>-1 && isalpha(poly[i-1]))
			{
				exparr[p][k].power=num;
			}
			else
			{
				k+=1;
				if(signinversion_flag)
				{
					if(poly[i-1]!='-' || (i-1)<0)
						exparr[p][k].coeff=-num;
					else
						exparr[p][k].coeff=+num;
				}
				else
				{
					if(poly[i-1]!='-' || (i-1)<0)
						exparr[p][k].coeff=num;
					else
						exparr[p][k].coeff=-num;
				}
			}
		}
		else if(isalpha(poly[i]))
		{	
			if(!isdigit(poly[i-1]))
			{
				k+=1;
				exparr[p][k].coeff=1;
			}
			exparr[p][k].var=poly[i];
			if(!isdigit(poly[i+1]))
			{
				exparr[p][k].power=1;
			}
		}
		else if(poly[i]==')')
		{
			count--;
			if(poly[i+1]!='=' && (i+1)!=n)
			{
				//printf(")\n");
				np[p]=k;
				p+=1;
				k=-1;
				flag++;
			}
		}
		else if(poly[i]=='=' && poly[i+1]!='0')
		{
			//printf("=\n");
			flag++;
			signinversion_flag=1;
		}
		else
			continue;
	}
	if(count)
	{
		printf("Invalid expression\n");
		exit(0);
	}
	printf("%d\t%d\n",p,flag);
	np[p]=k;	
	for(int j=0;j<=p;j++)
	{
		for(int i=0;i<=np[j];i++)
		{
			printf("%d%c^%d\t",exparr[j][i].coeff,exparr[j][i].var,exparr[j][i].power);
		}
		printf("\n");
	}
	if(flag)
	{
		if(p)
		{
			++p;
			k=-1;
			for(int i=0;i<=np[0];i++)
			{
				for(int j=0;j<=np[1];j++)
				{
					struct operands x=exparr[0][i];
					struct operands y=exparr[1][j];
					exparr[p][++k].coeff=x.coeff*y.coeff;
					exparr[p][k].var=x.var;
					exparr[p][k].power=x.power+y.power;
				}
			}
			np[p]=k;
			for(int i=0;i<=np[p];i++)
			{
				for(int j=i+1;j<=np[p];j++)
				{
					if(exparr[p][i].power == exparr[p][j].power)
					{
						exparr[p][i].coeff= exparr[p][i].coeff + exparr[p][j].coeff;
						exparr[p][j].flag=1;
					}
				}
			}
		}
		else
		{
			for(int i=0;i<=np[0];i++)
			{
				for(int j=i+1;j<=np[0];j++)
				{
					if(exparr[0][i].power == exparr[0][j].power)
					{
						exparr[0][i].coeff= exparr[0][i].coeff + exparr[0][j].coeff;
						exparr[p][j].flag=1;
					}
				}
			}
		}
	}
	k=0;
	for(int i=0;i<=np[p];i++)
	{
		if(~(exparr[p][i].flag))
		{
			printf("%d%c^%d\t",exparr[p][i].coeff,exparr[p][i].var,exparr[p][i].power);
			coef[k++]=exparr[p][i].coeff;
		}
	}
	printf("\na=%d b=%d c=%d \n",coef[0],coef[1],coef[2]);
}
