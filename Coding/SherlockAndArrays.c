/***********************************************************************************************************************
						SHERLOCK AND ARRAYS

Watson gives Sherlock an array of integers. His challenge is to find an element of the array such that the sum of all elements to the left is equal to the sum of all elements to the right.

***********************************************************************************************************************/

/*Base logic is derived from quick sort logic*/
char* balancedSums(int arr_count, int* arr) {
    int pivot = arr_count - 1;
    int i,j,sum1=0,sum2=0;
    for(i=0;i<pivot;i++)
            sum1=sum1+arr[i];
    for(j=pivot+1;j<arr_count;j++)
            sum2=sum2+arr[j];
    while(pivot >= 0)
    {
        if(sum1==sum2)
            return "YES";
        pivot--;
        sum1=sum1-arr[pivot];
        sum2=sum2+arr[pivot+1];
    }
    return "NO";
}
