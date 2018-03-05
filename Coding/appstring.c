#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    char* t = (char *)malloc(512000 * sizeof(char));
    scanf("%s",t);
    int k; 
    scanf("%d",&k);
    int l1=strlen(s);
    int l2=strlen(t);
    int i=0;
    while(i<l1)
    {
        if(s[i]==t[i])
            i++;	//No of common characters
        else
       		break;
    }
    if((l1+l2-2*i)>k)
	printf("No");
    else if((l1+l2-2*i)%2==k%2)
	printf("Yes");
    else if((l1+l2-k)<0)
	printf("Yes");
    else
	printf("No");
}
