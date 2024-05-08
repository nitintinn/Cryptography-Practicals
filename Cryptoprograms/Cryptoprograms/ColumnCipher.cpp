//column
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int row,col=5,i,j,k,count=0;
	char p[100];
	cout<<"Enter plain text:";
	gets(p);
	if(strlen(p)%col==0)
	{
		row=strlen(p)/col;
	}
	else
	{
		row=(strlen(p)/col)+1;
		k=strlen(p)%col;
	}

	char mat[row][col],c[col][row],pt[row][col];

	
	for(i=0;i<row;i++)
	{
	for(j=0;j<col;j++)
	{ 
		if((i==row-1)&&(j>=k))
		{
		mat[i][j]='\0';}
		else
		{
		mat[i][j]=p[count]; cout<<p[count];count++;}
	}
	}
	cout<<"\nencrypt";
	for(i=0;i<col;i++)
	{
	for(j=0;j<row;j++)
	{
		c[i][j]=mat[j][i];
	}
	}

	for(i=0;i<col;i++)
	{
	for(j=0;j<row;j++)
	{
		if(c[i][j]!='\0')
		cout<<c[i][j];
	}
	}
	
		cout<<"\ndecrypt:";
	for(i=0;i<row;i++)
	{
	for(j=0;j<col;j++)
	{
		pt[i][j]=c[j][i];
	}
	}

	for(i=0;i<row;i++)
	{
	for(j=0;j<col;j++)
	{
		if(pt[i][j]!='\0')
		cout<<pt[i][j];
	}
	}
	
	
	//decryption
	
	
	return 0;
}
