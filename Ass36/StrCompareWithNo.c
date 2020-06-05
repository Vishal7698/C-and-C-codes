/*3. Write a program which 2 strings from user and check whether first N contents of two strings are equal or not. (Implement strcmp()function). Note : If third parameter is greater than the size of second string then concat whole string after first string.

Input : “Marvellous Infosystems”
“Marvellous Logic Building”
10

Output : TRUE
*/


#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL StrCompare(char *Src,char *Dest,int iNo)
{

	int iCnt=0;
	if((Src==NULL)&&(Dest==NULL)&&(iNo<0))
	{
		return FALSE;
	}

	while((*Src !='\0')&&(*Dest!='\0')&&(iNo!=0))
	{
		if(*Src!=*Dest)
		{
			break;
		}
		Src++;
		Dest++;
		iNo--;
		
	}
	
	
	if((*Src==*Dest))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char Arr[40];
	char Brr[40];
	int iNo=0;
	BOOL bRet=FALSE;

	printf("Enter the 1st String:\n");
	scanf("%[^'\n']%*c",Arr);

	printf("Enter the 2nd String:\n");
	scanf("%[^'\n']%*c",Brr);

	printf("Enter the number:\n");
	scanf("%d",&iNo);

	bRet=StrCompare(Arr,Brr,iNo);
	
	if(bRet==TRUE)
	{
		printf("Both string are equal\n");
	}
	else 
	{
		printf("String are not equal");
	}
	return 0;
}
		
