#include<iostream>
using namespace std;
int main()
{ int a,b;
  char op;
	while(1)
	{
		cout<<"\n;"
		cin>>op;
		if(op=='+'){
		cin>>a>>b;
		cout<<a+b;}
		
		else if(op=='-'){
		cin>>a>>b;
		cout<<a-b;	
		}
		
		else if(op=='*'){
		cin>>a>>b;
		cout<<a*b;	
		}
		
		else if(op=='/')
		{
			cin>>a>>b;
			if(b!=0)cout<<a/b;
			else cout<<"Divide by zero";
		}
		
		else if(op=='!'){
		cin>>a;
		int i,f=1;
		for(i=1;i<=a;i++)
		f*=i;
		cout<<f;}
		
		else if(op=='^')
		{
			int p=1;
			cin>>a>>b;
			for(int i=1;i<=b;i++)
			p*=a;
			cout<<p;
		}
		else 
		break;
		
	}
}
