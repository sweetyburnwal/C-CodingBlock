#include<iostream>
#include<stack>
using namespace std;

void printSpan(int arr[],int n)
{
	stack<int> s;
	int ans[100]={};
	
	for(int currDay=0;currDay<n;currDay++)
	{
		int currPrice=arr[currDay];
		while(s.empty()==false && arr[s.top()]<currPrice)
		{
			s.pop();
		}
		int betterDay=s.empty() ? 0 : s.top();
		                
	    int span=currDay-betterDay;
	    ans[currDay]=span;
	    s.push(currDay);
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}
}

int main()
{
	int n=7;
	int arr[100]={100,80,60,70,60,75,85};
	
	printSpan(arr,n);
	return 0;
}
