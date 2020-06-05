/*1. Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.
*/
#include<stdio.h>
void ASCII()
{
	int iCnt=0;
	for(iCnt=0;iCnt<255;iCnt++)
	{
		//if(iCnt>='0'cdxo)
		printf("%c\n",iCnt);
		printf("%d\n",iCnt);
		printf("%x\n",iCnt);
		printf("%o\n",iCnt);
	}
}

int main()
{
	/*char ch='\0';
	printf("enter number");
	scanf("%c",&ch);*/
	ASCII();
	return 0;
}
