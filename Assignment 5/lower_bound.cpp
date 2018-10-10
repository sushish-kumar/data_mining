#include<iostream>
#include<algorithm>
using namespace std;
int test(int* arr,int n,int k)
{   int index;
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		if(k<=arr[i])
		{
		  return i;
		}
		
	}
	return -1;
}
int main()
{
	int arr[]={2,5,9,4,11}; //2 3 5 9 11 13
	int n=sizeof(arr)/sizeof(arr[0]);
	 cout<<test(arr,n,3);
	return 0;
}
