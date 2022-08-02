#include<iostream>
using namespace std;
template<typename t>
t sort_ascend(t arr[],t n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				t temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
template<typename t>
t sort_descend(t arr[],t n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				t temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main()
{
	int arr[5],i,n;
	cout<<"\nenter the size of array : ";
	cin>>n;
	cout<<"\nenter the array elements : \n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort_ascend<int>(arr,n);
	cout<<"\nthe array sort in ascending order is : ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	sort_descend<int>(arr,n);
	cout<<"\nthe array sort in descending order is : ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}	
}

