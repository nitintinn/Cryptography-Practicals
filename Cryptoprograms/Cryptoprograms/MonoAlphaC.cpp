//MONOALPHABATIC CIPHER
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char pt[28]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\0'};
char ct[28]={'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A','\0'};
char p[100]={'\0'};
char c[100]={'\0'};
char r[100]={'\0'};
int i,j;
// clrscr();
printf("\n enter the plain text:");
gets(p);

//converting plain text into cipher text (encryption)
for(i=0;i<strlen(p);i++)
{
for(j=0;j<26;j++)
{
if(pt[j]==p[i])
{
c[i]=ct[j];

}

}
}
c[i]='\0';
printf("\n cipher text is:");
puts(c);
//converting cipher text into plain text (decryption)
for(i=0;i<strlen(c);i++)
{
for(j=0;j<26;j++)
{
if(ct[j]==c[i])
{
r[i]=pt[j];
}
}
}
r[i]='\0';
printf("\n \n plain text is: %s",r);
}
