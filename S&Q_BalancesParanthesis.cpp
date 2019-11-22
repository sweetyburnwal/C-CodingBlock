#include<iostream>
#include<stack>
using namespace std;

bool checkExpression(string str)
{
	stack<char> s;
	
	for(int i=0;i<str.size();i++)
	{
		char currChar=str[i];
		if(currChar=='(')
		{
			s.push(currChar);
		}
		else if(currChar==')')
		{
			if(s.empty() || s.top()!='(')
			{
				return false;
			}
			s.pop();
		}
	}
	return s.empty();
}

int main()
{
	string str;
	cin>>str;
	bool isValid=checkExpression(str);
	cout<<isValid;
	
	return 0;
}
