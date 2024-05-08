#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char P[100]; //Plain text
	char K[100]; // Key
	cout<<"Enter your plain text"<<endl;
	cin.getline(P,100);
	cout<<"Enter your key"<<endl;
	cin.getline(K,100);
	// increase key length 
	char NK[100];  // Increased Key
	int i,j;
	for(i=0;K[i]!='\0';i++)
	{
		if(K[i]>='a' && K[i]<='z')
		{
		K[i]=K[i]-32;
	}
	}
	int PL=strlen(P);
	int KL=strlen(K);
	for(i=0,j=0;i<PL;i++,j++)
	{
		if(j==KL)
		{
			j=0;
		}
		NK[i]=K[j];
	}
	NK[i]='\0';
	cout<<endl;
	cout<<"NEW KEY"<<endl;
	cout<<NK;
	//convert the plain text to upper case
	for(i=0;i<PL;i++)
	{
		if(P[i]>='a' && P[i]<='z')
		{
			P[i]=P[i]-32;
		}
	}
	
	//encryption
	char C[100];   //Cipher Text
	for(i=0;i<PL;i++)
	{
		if(P[i]!=' ')
		{
		C[i]=((P[i]+NK[i])%26) + 'A';
		}
		else
		{
			C[i]=P[i];
		}
	}
	C[i]='\0';
	cout<<endl;
	cout<<"Encryption of plain text in upper case"<<endl;
	cout<<C;
	//decryption
	char O[100]; //original text
	for(i=0; C[i]!='\0';i++)
	{
		if(C[i]!=' ')
		{
		O[i]=(((C[i]-NK[i]) + 26) % 26) + 'A';
	}
	else
	{
		O[i]=C[i];
	}
	}
	O[i]='\0';
	cout<<endl;
	cout<<"Decryption of cipher text in upper case"<<endl;
	cout<<O;
}
