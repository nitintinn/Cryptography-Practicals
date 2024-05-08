#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	if(a==0) return b;
	return gcd(b%a,a);
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
