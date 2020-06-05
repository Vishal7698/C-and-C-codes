/*1.Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not.

Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : TRUE
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : FALSE
*/

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkNo(int Arr[],int iLength,int iNo)
{
	int iCnt=0,iCount=0;
	if((NULL==Arr)||(iLength<=0))
	{
		return -1;
	}
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			break;
		}
	}
	
		if(iCnt==iLength)
		{
			return FALSE;
		}
		else
		{
			return TRUE;
		}
}

int main()
{
	int iCnt=0,iSize=0,iValue=0;
	BOOL bRet=FALSE;
	int * p=NULL;

	printf("Enter number of elements:");
	scanf("%d",&iSize);

	p=(int *)malloc(iSize*sizeof(int));

	if(NULL==p)
	{
		printf("unable to allocate the memory:");
		return -1;
	}
	
	printf("Enter %d elements",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	printf("Enter element no:");
	scanf("%d",&iValue);
	
		
	bRet=ChkNo(p,iSize,iValue);
	if(bRet==TRUE)
	{
		printf("%d is Present",iValue);
	}
	else
	{
		printf("%d is not Presnt",iValue);
	}
	
	free(p);
	return 0;
}
