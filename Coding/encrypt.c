#include<stdio.h>
#include<string.h>
void main()
{
	int t;
	for(int i=0;i<t;i++)
	{
		char str[100],str1[100];int len,min,m=0;
		scanf("%s",str);
		len=strlen(str);
		for(int j=0;j<len;j++);
		{
			min=(int)str[j];
			for(int k=j+1;k<len;k++)
			{
				if((int)str[j]<min)
					min=(int)str[j];
			}
			str[m]=min;
			

