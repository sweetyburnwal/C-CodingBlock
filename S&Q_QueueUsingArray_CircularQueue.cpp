#include<iostream>
using namespace std;

//implementing a templated circular queue class
template<typename T>

class queue
{
	T* arr;     //dynamic array of fixed size
	int f;
	int r;
	int cs;
	int ms;
	
public:
	//constructors
	queue(int ds=4)      //ds=default size
	{
		f=0;
		r=ms-1;
		cs=0;
		ms=ds;
		arr=new T[ms];
	}
	
	bool full()
	{
		return cs==ms;
	}
	
	bool empty()
	{
		return cs==0;
	}
	
	void push(T data)
	{
		if(!full())
		{
			r=(r+1)%ms;
			arr[r]=data;
			cs++;
		}
	}
	
	void pop()
	{
		if(!empty())
		{
			f=(f+1)%ms;
			cs--;
		}
	}
	
	T front()
	{
		return arr[f];
	}
};

int main()
{
	queue<int>q;
	
	for(int i=1;i<=6;i++)
	{
		q.push(i);
	}
	q.pop();
	q.push(8);
	
	while(!q.empty())
	{
		cout<<q.front()<<endl;
		q.pop();
	}
	
	return 0;
}
