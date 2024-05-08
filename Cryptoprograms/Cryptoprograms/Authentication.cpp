//flush(stdin)
#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	FILE *fp1;
	char ch,id[30],pwd[12],userpwd[20];
	int key=3;
	fp1= fopen("pwd.txt","r");
	int i=0;
	ch=getc(fp1);
	while(ch!=EOF)
	{
		
		
			if(ch>='a' && ch<='z')
		{
			ch=ch-key;
			if(ch<'a')
			ch=ch+'z'-'a'+1;
			
		}
		else if(ch>='A' && ch<='Z')
		{
			ch=ch-key;
			if(ch<'A')
			ch=ch+'Z'-'A'+1;
			
		}
		else
		ch=ch;
		
		pwd[i]=ch;
		i++;
		
			
		ch=getc(fp1);
	}	
	pwd[i]='\0';
	puts(pwd);
	fclose(fp1);
	
	
	cout<<"Enter Login Id:";
	gets(id);
	if(strlen(id)!=8)
	{
		cout<<"Invalid ID!";
		exit(0);
	}
	cout<<"\nEnter Password:";
	gets(userpwd);
	cout<<"\nstrcmp:"<<strcmp(pwd,userpwd);
	if(strcmp(pwd,userpwd)!=0)
	{
		cout<<"\nInvalid Password";
		exit(0);
	}
	cout<<"\nLogged in successfully";
	
	
	return 0;
}
