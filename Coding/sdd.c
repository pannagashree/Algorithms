#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int parsecondition(char *input,int cntr,char dest[100],int len);
void gen(char s1[],char s2[],char s3[],int elsepart);
int main()
{
	int elseflag=0,len,counter=0;
	char strb1[100];char strb2[100];char strb3[100];
	char stmt[100];
	printf("\nEnter the statement");
	scanf("%s",stmt);
	len=strlen(stmt);
	counter=counter+2;
	counter=parsecondition(stmt,counter,strb1,len);
	if(stmt[counter]==')')
		counter++;
	counter=counter+2;
	counter=parsecondition(stmt,counter,strb2,len);
	if(stmt[counter+1]==';')
	{
		printf("\nSyntax directed definition...");
		gen(strb1,strb2,strb3,elseflag);
		return 0;
	}
	if(stmt[counter]==')')
		counter=counter+1;
	counter=counter+3;
	counter=parsecondition(stmt,counter,strb3,len);
	counter=counter+2;
	if(counter==len)
	{
		elseflag=1;
		printf("\nSyntax directed definition...");
		gen(strb1,strb2,strb3,elseflag);
		return 0;
	}
}
int parsecondition(char *input,int cntr,char dest[100],int len)
{
	int pos=0,index=0;
	while(input[cntr]!='(' && cntr<=len)
	cntr++;
	if(cntr>=len)
		return 0;
	index=cntr;
	while(input[cntr]!=')')
		cntr++;
	if(cntr>=len)
		return 0;
	while(index<=cntr)
		dest[pos++]=input[index++];
	dest[pos]='\0';
	return cntr;
}
void gen(char s1[],char s2[],char s3[],int elsepart)
{
	int l1=105,l2=102,l3=104;
	if(!elsepart)
	{
		printf("100:if %s goto %d",s1,l2);
		printf("101:goto %d",l3);
		printf("102:%s",s2);
		printf("103:");
	}
	else
	{
		printf("100:if %s goto %d",s1,l2);
		printf("101:goto %d",l3);
		printf("102:%s",s2);
		printf("103:goto %d",l1);
		printf("104:%s",s3);
	}
}

	
	
