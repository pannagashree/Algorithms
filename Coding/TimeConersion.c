/*Given a time in -hour AM/PM format, convert it to military (-hour) time.

Note: Midnight is on a -hour clock, and on a -hour clock. Noon is on a -hour clock, and on a -hour clock.

Input Format

A single string containing a time in 12-hour clock format (i.e.hh:mm:ssAM or hh:mm:ssPM).

Output Format

Convert and print the given time in 24-hour format.

Sample Input

07:05:45PM

Sample Output

19:05:45
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <ctype.h>
int main(){
    char hh[2],mm[2],ss[2],format;
    int count=0,j=0,hrs;
    char* time = (char *)malloc(10240 * sizeof(char));
    scanf("%s",time);
    for(int i=0;i<10;i++)
    {
        if(time[i]==':')
        {
            count++;
            continue;
        }
        if(count<1)
	{
            hh[j]=time[i];
	    printf("%c\n",hh[j]);
	}
        else if(count==1)
	{
            mm[j]=time[i];
	    printf("%c\n",mm[j]);
        }
        else
        {
            if(isalpha(time[i]))
            {
                format=time[i];
		printf("%c\n",format);
                break;
            }
	    else
	    {
            	ss[j]=time[i];
	    	printf("%c\n",ss[j]);
	    }
        }
        j++;
    }
    printf("abc\n");
    printf("%s\n",hh);
    printf("%s\n",mm);
    printf("%s\n",ss);
    printf("%c\n",format);
    /*if(format=='P')
    {
       hrs=atoi(hh);
       hrs=hrs+12;
       snprintf (hh, sizeof(hh), "%d",hrs);
    }
    strcat(time,hh);
    strcat(time,(char *)':');
    strcat(time,mm);
    strcat(time,(char *)':');
    strcat(time,ss);
    printf("%s",time);*/
    
    return 0;
}

