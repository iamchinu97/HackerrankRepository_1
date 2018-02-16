//============================================================================
// Name        : AcmICPCTeam.cpp
// Author      : Chinmay Shimpi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void myfunction(int a[500],int n,int m)
{
	int i=0,j=1,k=0,num1,r1,num2,r2;
	int max=0,count=0,total=0;
	for(i=0;i<n;i++)
	{
		num1=a[i];
		while(j<n)
		{
			num2=a[j];
			for(k=0;k<m;k++)
			{
				r1=num1%10;
				r2=num2%10;
				num1=num1/10;
				num2=num2/10;
				if((r1|r2)==1)
				{
					count++;
				}
			}
			cout<<"\ncount="<<count;
			if(count>max)
			{
				max=count;
			}
			if(count==max)
			{
				total++;
			}
			j=(j+1)%n;
		}
	}
	cout<<"\ntotal="<<total;
}
int main() {
	int n,m,a[500];
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	myfunction(a,n,m);
}
