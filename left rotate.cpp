#include<stdio.h>
#include<iostream>
using namespace std;
	void leftrotate(int arr[],int n)
	{
			int temp=arr[0];
			for (int i=1;i<=n;i++)
				{
					arr[i-1]=arr[i];	
				}
					arr[n-1]=temp;
	}
	int main()
	{
		int arr[]={1,5,8,9,6};
		int n=5;
		cout<<"array before rotation="<<endl;
		for (int i=0;i<n;i++)
		{
			cout<<arr[i]<<endl;
		}
		leftrotate(arr,n);
		cout<<"array after rotation"<<endl;
		for (int i=0;i<n;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
	


