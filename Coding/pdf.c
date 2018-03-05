#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int *h = malloc(sizeof(int) * 26);
    for(int h_i = 0; h_i < 26; h_i++){
       scanf("%d",&h[h_i]);
    }
    int len,max=0;
    char* word = (char *)malloc(512000 * sizeof(char));
    char temp;
    scanf("%s",word);
    len=strlen(word);
    for(int i=0;i<len;i++)
    {
        temp=word[i];
        max = max < h[temp - 97] ? h[temp - 97] : max;
    }
    printf("%d",max*len);
    return 0;
}

