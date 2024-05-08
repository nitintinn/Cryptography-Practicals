#include<stdio.h>
int main()
{
int IPkey[8]={1,6,7,8,5,2,3,4};
int i, cnt;
char input[9], output[9], dec[9];

printf("Enter your 8 bits input:");
scanf("%s",&input);
input[8]='\0';
printf("Your input is:%s\n", input);
printf("IP key used : ");
for(i=0; i<8; i++) {
printf("%d",IPkey[i]);
}
printf("\n");
for(i=0; i<8; i++)
{
cnt=IPkey[i];
output[i]=input[cnt-1];
}
output[8]='\0';

printf("Your output is %s", output);

printf("\nDecrypted text:");
	for(i=0; i<8; i++)
	{
	cnt=IPkey[i];
	dec[i]=output[cnt-1];
	}
dec[8]='\0';
printf("Your output is %s", dec);

return 0;
}
