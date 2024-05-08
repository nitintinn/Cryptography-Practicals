#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main(){
	

char arr[6][6]={"GRAVI","TYFLS","BCDEH","KMNOP","QUWXZ"};
char pt[100];
char p[2]={'X','\0'};
int i, j, r1=0, r2=0, c1=0, c2=0,k;


    gets(pt);

    for(i=0,j=0;i<strlen(pt);i++)
    {
        if(pt[i]!=' ')
        pt[j++]=pt[i];
    }
    pt[j]='\0';

    //    if(getlen(pt)%2==1)
        if(strlen(pt)%2==1)
        strcat(pt,p);
    for(i=0;i<strlen(pt);i++)
    {if(pt[i]=='J') pt[i]='I';}
    //puts(pt);
    //    {    printf(pt[getlen(pt)-1]);        }
    k=0;
    while(k<strlen(pt))
    {
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                if(arr[i][j] == pt[k])
                {
                r1=i; c1=j;
                }
                if(arr[i][j] == pt[k+1])
                {
                r2=i; c2=j;
                }
            }
        }
        //<<r1<<c1<<" "<<r2<<c2;
        if(r1==r2) //when both characters in same row
        {
        if(c2==4) //for char in last column
        printf("%c%c", arr[r1][c1+1], arr[r2][0]);
        else if(c1==4) //for char in last column
        printf("%c%c", arr[r1][0], arr[r2][c2+1]);
        else
        printf("%c%c", arr[r1][c1+1], arr[r2][c2+1]);
        }
        if(c1==c2)//when both characters in same column
        {
        if(r2==4) //for char in last row
        printf("%c%c", arr[r1+1][c1], arr[0][c2]);
        else if(r1==4) //for char in last row
        printf("%c%c", arr[0][c1], arr[r2+1][c2]);
        else
        printf("%c%c", arr[r1+1][c1], arr[r2+1][c2]);
        }
        //when characters are not in a same row and column
        if(r1 != r2 && c1 != c2)
        {
        printf("%c%c", arr[r1][c2], arr[r2][c1]);
        }
        k=k+2;
    }  
	
	

	
	  
    return 0;
}
