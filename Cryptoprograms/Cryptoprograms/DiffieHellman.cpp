#include<iostream>
#include<fstream>
using namespace std;
#include<stdio.h>
#include<math.h>
int main()
{
	double G=9,P=10,x,y,a,b,A,B,z=1;
	char ch;
	FILE *f1,*f2;
	f1=fopen("alice.txt","w");
	fprintf(f1,"4");
	f2=fopen("bob.txt","w");
	fprintf(f2,"3");
	fclose(f1);
	fclose(f2);
	f1=fopen("alice.txt","r");
	ch=fgetc(f1);
	a=ch-48;
	f2=fopen("bob.txt","r");
	ch=fgetc(f2);
	b=ch-48;
	x=fmod(pow(G,a),P);
	y=fmod(pow(G,b),P);
	cout<<"x:"<<x<<" y:"<<y;
	fclose(f1);
	fclose(f2);
/*	
	f1=fopen("alicepublic.txt","w");
	while(z!=0)
	{
	z=fmod(x,10);
	ch=x+48;
			fprintf(f1,"%c",ch);
			x=x/10;
	}
	f2=fopen("bobpublic.txt","w");
	z=1;
	while(z!=0)
	{
	z=fmod(y,10);
	ch=y+48;
	fprintf(f1,"%c",ch);
	y=y/10;
	}
	fprintf(f2,"%c",ch);
	fclose(f1);
	fclose(f2);
*/	
	A=fmod(pow(y,a),P);
	B=fmod(pow(x,b),P);
	
	cout<<"\nA:"<<A<<" B:"<<B;
	return 0;
}
