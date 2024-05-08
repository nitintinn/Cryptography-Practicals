#include<stdio.h>
#include<process.h>
#include<iostream>
#include<string.h>
using namespace std;
//#include<fstream.h>
int main()
{
	FILE *fp1,*fp2;
	char ch,pwd[13],fn[20],ln[20],ver[50],dob[10],pass[15];
	int i=0,l;
	pwd[4]='\0';

	
	fp2= fopen("encrypt.txt","w");
	cout<<"Enter your first name:";
	gets(fn);
	for(i=0;i<strlen(fn);i++)
	{
			if(fn[i]>='a' && fn[i]<='z')
		{
			
			fn[i]=fn[i]-'a'+'A';
			
		}
	}
	cout<<"Enter your last name:";
	gets(ln);
		for(i=0;i<strlen(ln);i++)
	{
			if(ln[i]>='a' && ln[i]<='z')
		{
			
			ln[i]=ln[i]-'a'+'A';
			
		}
	}
	cout<<"First name and Last name in capital:";
	puts(fn);
	puts(ln);
	l=strlen(ln);
	pwd[0]=fn[0];
	pwd[1]=fn[1];
	pwd[2]=ln[l-2];
	pwd[3]=ln[l-1];
	cout<<"\nEnter your date of birth: ddmmyyyy :";
	gets(dob);
	
	strcat(pwd,dob);

	
	for(i=0;i<12;i++)
	{
		fprintf(fp2,"%c",pwd[i]);
	}
	fclose(fp2);
	fp1= fopen("encrypt.txt","r");

	ch=getc(fp1);
	i=0;
	cout<<"\ncheck:\n";
	while(ch!=EOF)
	{
		ver[i++]=ch;
		ch=getc(fp1);
	}
	ver[i]='\0';
	
	while(1)
	{
		cout<<"\nEnter your password:";
		gets(pass);
		if(strcmp(ver,pass)==0)
		{
			cout<<"Login successful!";
			break;
		}
		cout<<"\n!!!!!!!!!!!Enter correct pwd!!!!!!!!!";
	}
	
	fclose(fp1);
	
	fp1= fopen("abc.txt","r");
	ch=getc(fp1);
	i=0;
	cout<<"\nabc contents:\n";
	while(ch!=EOF)
	{
		cout<<ch;
		ch=getc(fp1);
	}
	


	
	return 0;
}
