#include <stdio.h>

int main() {
	int t,n,m,temp,l,o;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    int a[n];
	    for(int j=0;j<n;j++)
	        scanf("%d",&a[j]);
	    scanf("%d",&m);
	    for(int j=0;j<n;j=j+m)
	    {
		//printf("abc\n");
		if((j+m)<n)
			o=j+m;
		else
			o=n;
	        for(int k=j;k<o;k++)
	        {
	            temp=a[(o-1)-0];
	            l=o-1;
	            while(l!=k)
	            {
	                a[l-0]=a[l-1-0];
	                l--;
	            }
		    a[k]=temp;
		}
	    }
	    for(int j=0;j<n;j++)
	        printf("%d ",a[j]);
	}
	return 0;
}
