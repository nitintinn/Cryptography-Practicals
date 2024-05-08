#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int inverse(int key)
{
	int r1,r2,r,q,t1,t2,t;
  r1=26;r2=key;
  t1=0;t2=1;
  while(r2>0)
  {
    q=r1/r2; //q=13
    r=r1-q*r2; // r=26-13 *2=0
    r1=r2;r2=r;//r1=2 r2=0
    t=t1-q*t2;
    t1=t2;t2=t;
  }
  if(r1==1)
  {
    if(t1<0)
    {
      t1+=26;
      
    }
	
  }
  cout<<"\n"<<t1;
    return t1;
}
int main()
{
	FILE *fp1;
	char pt[100],enc[100],dec[100];
	int l,i,j,key;
	cout<<"Enter the string:";
	gets(pt);
	cout<<"Enter key value:";
	cin>>key;
	l=strlen(pt);
	for(i=0;i<l;i++)
	{
		if(pt[i]!=' ')
		{
			if(pt[i]>='a'&&pt[i]<='z')
			enc[i]=((pt[i]-'a')*key)%26+'a';
			else
			enc[i]=((pt[i]-'A')*key)%26+'A';
		}
		else
		enc[i]=pt[i];
	}	
	enc[i]='\0';
	cout<<"Encrypted text:";
	puts(enc);
	
	cout<<"\n";
	for(i=0;i<l;i++)
	{
		cout<<pt[i]<<"\t"<<int(enc[i])<<"\t"<<enc[i];
		cout<<"\n";
	}
	int inv=inverse(key);
	for(i=0;i<l;i++)
	{
		if(enc[i]!=' ')
		{
			if(enc[i]>='a'&&enc[i]<='z')
			dec[i]=((enc[i]-'a')*inv)%26+'a';
			else
			dec[i]=((enc[i]-'A')*inv)%26+'A';
		}
		else
		dec[i]=enc[i];
	}
	dec[i]='\0';
	cout<<"\n\nDecrypted text:";
	puts(dec);
	
	return 0;
}
