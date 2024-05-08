#include<iostream>
using namespace std;
#include<fstream>
#include<string.h>
int main()
{
	char P[100]; // plain text
	char K[100];  // given key
	char NK[100];  // enhanced key equal to the length of plain text
	/*ifstream fin;
	fin.open("vignere.txt",ios::in); // read the file
	fin.getline(P,100);
	fin>>K;
	fin.close();*/
	cout<<"Enter your plain Text"<<endl;
	cin.getline(P,100);
	fflush(stdin);
	cout<<"Enter your key in alphabets"<<endl;
	cin.getline(K,100);
	cout<<"Plain Text are\n";
	cout<<P<<endl;
	cout<<"\nGiven Key are\n";
	cout<<K<<endl;
	
	//increase the length of given key to the length of plain text
	int PL;  //store the length of plain text
	int KL;  // KL stroes the length of key
	PL=strlen(P);
	KL=strlen(K);
	cout<<"Current Length of Plain Text"<<endl;
	cout<<"\n"<<PL<<endl;
	cout<<"Current Length of Key"<<endl;
	cout<<"\n"<<KL<<endl;
	int i,j;
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
	cout<<"New Enhanced Key is\n";
	cout<<NK<<endl;
	
	//convert key and plain text into upper case
	for(i=0;i<PL;i++)
	{
		if(P[i]>='a' && P[i]<='z')
		{
		P[i]=P[i]-32;
      	}
	}
	
	for(i=0;i<PL;i++)
	{
		if(NK[i]>='a' && NK[i]<='z')
		{
		NK[i]=NK[i]-32;
      	}
	}
	
	cout<<"\nPlain text in upper case\n";
	cout<<P<<endl;
	cout<<"\n Key in upper case\n";
	cout<<NK<<endl;
	
	char C[100], O[100];
	
	//encrypt the text using vignere cipher
	for(i=0;i<PL;i++)
	{   if (P[i]!=' ')
	    {
		C[i]=((P[i]+NK[i]) % 26) + 'A';
	}
	else
	{
		C[i]=P[i];
	}
}
C[i]='\0';

cout<<endl;
cout<<"Encryption"<<endl;
cout<<C<<endl;

	//decrypt the text using vignere cipher
	for(i=0;i<PL;i++)
	{   if (C[i]!=' ')
	    {
		O[i]=(((C[i]-NK[i]) +26) % 26) + 'A';
	}
	else
	{
		O[i]=C[i];
	}
}
O[i]='\0';
cout<<endl;
cout<<"Decryption"<<endl;
cout<<O;
}
