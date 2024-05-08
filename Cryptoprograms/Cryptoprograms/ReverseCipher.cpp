#include<iostream>
using namespace std;
#include <string.h>
//strrev() strcmp() strcat()
int main()
{
	char c[20],p[20],fl[20],fl2[20],fl3[20];
	int i,j;
	cout<<"Enter your string:\n";
	gets(c);
	int l=strlen(c);
	strrev(c);
	cout<<"\n Cipher text is:\n";
	puts(c);
	
	cout<<"\n\n=======Character by character======";
	strrev(c);
	cout<<"\nplain text:\n";
	puts(c);
	p[l]='\0';
	for(i=0;i<l;i++)
	{
		p[l-1-i]=c[i];
	}
	cout<<"\nCipher text by char by char:\n";
	puts(p);
	
	
	cout<<"\n\n=====First and Last letter is same======";
	cout<<"\nplain text:\n";
	puts(c);
	fl3[0]=c[l-1];
	fl[0]=c[0];
	fl[1]='\0';
	fl2[l-2]='\0';
	fl3[1]='\0';
	for(i=1;i<l-1;i++)
	{
		fl2[l-2-i]=c[i];
	}
	cout<<"\nCipher text by char by char:\n first string:\n";
	puts(fl);
	cout<<"\nSecond string:\n";
	puts(fl2);
		cout<<"\nSecond string:\n";
	puts(fl3);
	
	cout<<"\nConcatenated string:\n";
	strcat(fl,fl2);
	strcat(fl,fl3);
	puts(fl);
	return 0;
}
