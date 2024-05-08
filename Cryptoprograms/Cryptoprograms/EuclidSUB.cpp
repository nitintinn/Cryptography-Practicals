#include<iostream>
using namespace std;

int sub(int a,int b)
{
	while(a!=b)
	{
		if(a>b) a=a-b;
		else b=b-a;
	}
		return a;
	
}
int main()
{
	int f1,f2;
	cout<<"Enter value of f1 & f2:";
	cin>>f1>>f2;
	
	int r=gcd(f1,f2);
	cout<<"GCD is "<<r;
	return 0;
}
