//Affine cipher= Multiplicative + Caeser cipher
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
	char ch;
	char pt[100],enc[100],dec[100];
	int l,i=0,j,key,key1;
	cout<<"Enter the string:";
	gets(pt);
	cout<<"Enter key value for multiplication and addition:";
	cin>>key; cin>>key1;
	fp1=fopen("input.txt","w");
	while(i<l)
	{
		ch=pt[i++];
		fprintf(fp1,"%c",ch);
	}
	fclose(fp1);
	
	l=strlen(pt);
	for(i=0;i<l;i++)
	{
		if(pt[i]!=' ')
		{
			if(pt[i]>='a'&&pt[i]<='z')
			enc[i]=(((pt[i]-'a')*key)+key1)%26+'a';
			else
			enc[i]=(((pt[i]-'A')*key)+key1)%26+'A';
		}
		else
		enc[i]=pt[i];
	}	
	enc[i]='\0';
	cout<<"\nEncrypted text:";
	puts(enc);
		fp1=fopen("encrypt.txt","w");
	i=0;
	while(i<l)
	{
		ch=enc[i++];
		fprintf(fp1,"%c",ch);
	}
	fclose(fp1);
	
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
			{
			dec[i]=((enc[i]-'a')-key1);
			if(dec[i]<0)
				dec[i]=((25-dec[i])*inv)%26+'a';
			else
				dec[i]=(dec[i]*inv)%26+'a';
			}
			else
			{
			dec[i]=((enc[i]-'A')-key1);
			if(dec[i]<0)
				dec[i]=((25-dec[i])*inv)%26+'A';
			else
				dec[i]=(dec[i]*inv)%26+'A';
			}
		}
		else
		dec[i]=enc[i];
	}
	dec[i]='\0';
	cout<<"\n\nDecrypted text:";
	puts(dec);
	fp1=fopen("decrypt.txt","w");
	i=0;
	while(i<l)
	{
		ch=dec[i++];
		fprintf(fp1,"%c",ch);
	}
	fclose(fp1);
	
	return 0;
}
