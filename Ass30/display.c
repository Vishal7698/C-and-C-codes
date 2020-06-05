/*2. Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy()
function)

Input : “Marvellous Multi OS”
10

Output : “Marvellous

Note : If third parameter is greater than the size of source string then
copy whole string into destination.
*/
#include<stdio.h>
#include<stdlib.h> 
void CopyString(char *str,char *mtr,int iCnt)
{
	while((*str!='\0')&&(iCnt!=0))
	{
		*mtr=*str;
		str++;
		mtr++;
		iCnt--;
	}
}

int main()
{
//	char Arr[30]="Marvellous Multi Os";
	char Arr[30];
	char Brr[30];
	int iValue;
	printf("enter the string:");
	scanf("%s[^'\n']s",Arr);

	printf("enter the number:\n");
	
	scanf(" %d",&iValue);
	
	
	CopyString(Arr,Brr,iValue);
	printf("%s",Brr);
	return 0;
}
