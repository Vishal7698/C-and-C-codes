#include<stdio.h>
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Name:Divisiable
//input:integer
//output:integer
//Author:shraddha
//Date:3/9/19
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Divi(int iNo)
{
	if(iNo%3==0)
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
	int iValue=0;
	int iRet=0;
	printf("Enter the number:");
	scanf("%d",&iValue);
	
	iRet=Divi(iValue);
	if(iRet=TRUE)
	{

		printf("\nno is divisiable bye 3\n");
	}
	
	else
	{
		printf("\nno is not divisiabl\n");
	}

        return 0;
}
