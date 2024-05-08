#include <iostream>
using namespace std;
#include<string.h>
int main()
{
// Declaring all variables
        int i, key;
        char s[100];
        char c;  

    // Taking Input
	fflush(stdin);
    cout<<"Enter a plaintext to encrypt"<<endl;  
    cin.getline(s,100);
    cout<<"Enter key"<<endl;
    cin>>key;
    int n=strlen(s);

// Encrypting each letter according to the given key
    for(i = 0; i<n ; i++)  
    {  
        c = s[i];  
        if(c >= 'a' && c <= 'z')  
        {  
            c = c + key;  
            if(c > 'z')  
            {  
                c = c - 'z' + 'a' - 1;  
            }  
            s[i] = c;  
        }  
        else if(c >= 'A' && c < 'Z')  
        {  
            c = c + key;  
            if(c > 'Z')  
            {  
                c = c = 'Z' + 'A' - 1;  
            }  
            s[i] = c;  
        }  
    }  
s[i]='\0';
// Output the cipher

    cout<<"Encrypted message: "<<s<<endl;
   
    return 0;
}
