#include <iostream>
using namespace std;

int check(string a,int start,int end)
{
    if(end-start==0)
    {
        return 1;
    }
    else
    {
    	if(a[start]=a[end])
    	{
    		check(a,start+1,end-1);
		}
		else
		{
			return 0;
		}
	}
}

int main()
{
	string a;
	cout<<"Enter the String:"<<endl;
	cin>>a;
	int n= a.length();
	if(check(a,0,n-1))
	{
		cout<<"Pallindrome";
	}
	else
	{
		cout<<"NO";
	}
}