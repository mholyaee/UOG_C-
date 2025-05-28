#include<iostream>
using namespace std;
int main()
{
	int sum=0,cost,i,j=1;
	for(i=1;i<=12;i++)
	{
	cin>>cost;
	sum+=cost;
	if(i%3==0)
	{
	cout<<"The average of season"<<j<<":"<<sum/3<<"\n";
	sum=0;
	j++;
	}
}
}
