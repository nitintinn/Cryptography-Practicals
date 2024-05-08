#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int a1,a2,a3,m1,m2,m3,M1,M2,M3,Mi1,Mi2,Mi3,M,X;
	cout<<"Enter a1 and m1, a1(mod.m1): ";
	cin>>a1>>m1;
	cout<<"Enter a2 and m2, a2(mod.m2): ";
	cin>>a2>>m2;
	cout<<"Enter a3 and m3, a3(mod.m3): ";
	cin>>a3>>m3;
	
	int flag1=0,flag2=0,flag3=0,i;
	for(i=2;i<(m1/2);i++){if(m1%i==0)flag1=1;}
	for(i=2;i<(m2/2);i++){if(m2%i==0)flag2=1;}
	for(i=2;i<(m3/2);i++){if(m3%i==0)flag3=1;}
	
	if(flag1==1 || flag2==1 || flag3==1)
	{cout<<"Please enter prime numbers for m1, m2 and m3";exit(0);}

	M=m1*m2*m3;
	cout<<"\nM="<<M;
	M1=M/m1;
	M2=M/m2;
	M3=M/m3;
	cout<<"\nM1 M2 M3 = "<<M1<<" "<<M2<<" "<<M3;
	
	for(i=1;i<M;i++)
	{
		if((M1*i)%m1==0)break;
	}
	Mi1=i;
	for(i=1;i<M;i++)
	{
		if((M2*i)%m1==0)break;
	}
	Mi2=i;
	for(i=1;i<M;i++)
	{
		if((M3*i)%m1==0)break;
	}
	Mi3=i;
	
	cout<<"\nMinverse1 Minverse2 Minverse3 = "<<Mi1<<" "<<Mi2<<" "<<Mi3;
	
	X=(a1*M1*Mi1 + a2*M2*Mi2 + a3*M3*Mi3)%M;
	cout<<"\nX = "<<X;
	

return 0;
}

