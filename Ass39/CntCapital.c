/*2.Write a program which accept two strings from user and display
count of Capital characters from both the strings.

Input : “MarvelloUS”
“InfoSystEMs”

Output : 3 4
*/
#include<stdio.h>

void CntCapital(char *str1,char *str2)
{
	int iCount1=0;
	int iCount2=0;

	while(*str1!='\0')
	{
		if((*str1>='A')&&(*str1<='Z'))
		{
			iCount1++;
		}
		str1++;
	}

	while(*str2!='\0')
	{
		if((*str2>='A')&&(*str2<='Z'))
		{
			iCount2++;
		}
		str2++;
	}
	printf("\n%d %d",iCount1,iCount2);
}

int main()
{
	char Arr[40];
	char Brr[40];

	printf("Enter the string:");
	scanf("%[^'\n']%*c",Arr);
	
	printf("Enter the 2nd String\n");
	scanf("%[^'\n']%*c",Brr);

	CntCapital(Arr,Brr);
	return 0;
}
