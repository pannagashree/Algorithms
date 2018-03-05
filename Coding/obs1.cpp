/*When you pass an array into a function in C, the array decays into a pointer to its first element. When you use sizeof on the parameter, you are taking the size of the pointer, not the array itself.*/
#include <iostream>
using namespace std;
void func(int *arr)
{
	cout<<sizeof(arr)<<"\n"<<arr;
	return;
}
int main()
{
	int n;
	cout<<"Enter the number of elements:";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements:";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<sizeof(arr)<<"\n"<<arr<<"\n";
 	func(arr);
}