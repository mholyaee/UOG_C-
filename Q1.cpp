#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b&&a>c &&a*a==b*b+c*c) cout<<"yse";
	else if(b>a&&b>c &&b*b==a*a+c*c) cout<<"yes";
	else if(c>a&&c>b &&c*c==a*a+b*b) cout<<"yes";
	else cout<<"no";
}
