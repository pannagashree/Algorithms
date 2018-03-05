#include<stdio.h>
#include<locale.h>
#include<limits.h>
#include<unistd.h>
void main()
{
	/*printf("%s",setlocale(LC_NUMERIC,NULL));*/
	/*printf("\n%s",setlocale(LC_NUMERIC,""));
	printf("\n%s",setlocale(LC_NUMERIC,NULL));
	printf("\n%s",setlocale(LC_ALL,""));
	printf("\n%s",setlocale(LC_NUMERIC,"en_US.utf8"));
	printf("\n%s",setlocale(LC_NUMERIC,NULL));
	int i,n=_POSIX_CHILD_MAX,child;
	long m=sysconf(_SC_CHILD_MAX);
	printf("%d %ld",n,m);
	for(i=0;i<=m;i++)
	{
		child=fork();
	}
	printf("abc");*/
	for(int  i=0;i<10;)
	{
		printf("%d\n",i);
	}
}
