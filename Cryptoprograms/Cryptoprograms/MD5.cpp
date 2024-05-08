#include<iostream>
using namespace std;
int main()
{
	int b,i;
	cout<<"Enter no. of bits:";
	cin>>b;
	
	for(i=1;i<200;i++)
	{
		if(((512*i)-64) > b)
		break;
	}
	cout<<"\nBits to be padded are:"<<512*i-64-b;
	cout<<"\nTotal bits:"<<512*i-64;
	return 0;
}
