#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void solve(int year){
    int sum=31,dd;
    int count=1;
    if(year<1918)
    {
        if(year%4==0)
            sum=sum+29;
        else 
            sum=sum+28;
	count++;
    }
    else if(year==1918)
    {
        sum+=15;
	count++;
    }
    else if(year>1918)
    {
        if((year%4==0)&&(year%100!=0)||(year%400==0))
            sum=sum+29;
        else
            sum+=28;
	count++;
    }
    while(sum<=256)
    {
        count++;
        if(count%2!=0)
	{
            sum+=31;
	   // printf("\n%d\t%d",count,sum);
	}
        else if(count%2==0)
	{
            sum+=30;
	   // printf("\n%d\t%d",count,sum);
	}
    }
    if(sum>256)
    {
        if(count%2!=0)
            sum-=31;
        else if(count%2==0)
            sum-=30;
        count--;
	//printf("\n%d\t%d",count,sum);
    }
    if(sum!=256)
    {
        dd=256-sum;
	count++;
    }
     if(count<10)
        printf("%d.0%d.%d",dd-1,count,year);
    else
        printf("%d.%d.%d",dd-1,count,year);
}

int main() {
    int year; 
    scanf("%d", &year);
    int result_size;
    solve(year);
    return 0;
}

