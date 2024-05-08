#include<iostream>
using namespace std;

int egcd(int a,int b,int *x,int *y)
{
	if(a==0) { 
		*x=0; *y=1; return b;
	}
	int x1=0,y1=1;
	int gcd=egcd(b%a,a,&x1,&y1);
	*x=y1-(b/a)*x1;
	*y=x1;
	return gcd;
}
int main()
{
	int f1,f2;
	int xa,ya;
	int *x=&xa,*y=&ya;
	cout<<"Enter value of f1 & f2:";
	cin>>f1>>f2;
	
	int r=egcd(f1,f2,x,y);
	cout<<"GCD is "<<r<<" x="<<*x<<" y="<<*y;
	return 0;
}
