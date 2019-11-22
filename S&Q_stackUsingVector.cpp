#include<iostream>
#include<vector>
using namespace std;

//using vector
class stack
{
private:
	vector<int> v;
	
public:
	void push(int data)
	{
		v.push_back(data);
	}
	
	bool empty()
	{
		return v.size()==0;
	}
	
	void pop()
	{
		if(!empty())
		{
			v.pop_back();
		}
	}
	
	int top()
	{
		return v[v.size()-1];     //accessing last element in vector
	}
};

int main()
{
	stack s;
	for(int i=1;i<=5;i++)
	{
		s.push(i*i);
	}
	//try to print content of the stack by popping each element 
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}
