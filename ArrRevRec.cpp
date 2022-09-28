#include <iostream>
using namespace std;

void ForArr(int arr[],int start,int end)
{
	if(start>end)
	{
		return;
	}
	else{
		cout<<arr[start]<<"  ";
		ForArr(arr,start+1,end);	
	}
	cout<<"\n";	
}

void RevArr1(int arr[],int start,int end)
{
	if(start>end)
	{
		return;
	}
	else{
		//cout<<arr[start]<<"  ";
		RevArr1(arr,start+1,end);
		cout<<arr[start]<<"  ";	
	}
	//cout<<"\n";	
}
/*void RevArr(int arr[],int start,int end)
{
	if(start>end)
	{
		return;
	}
	else{
		cout<<arr[end]<<"  ";
		RevArr(arr,start,end-1);	
	}
	cout<<"\n";	
}*/


/*void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
		
	}
	cout<<endl;
}*/

int main()
{
	int arr[100];
	int n;
	cout<<"Enter the size of array:\n";
	cin>>n;
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the Elements in the array:";
		cin>>arr[i];
	}
	//print(arr,n);
	cout<<"Forward Array is:"<<endl;
	ForArr(arr,0,n-1);
	
	//print(arr,n);
	cout<<"Reverse Array is:"<<endl;
	//RevArr(arr,0,n-1);
	RevArr1(arr,0,n-1);
	
	//print(arr,n);
}
