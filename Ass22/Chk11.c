/*Accept N numbers from user check whether that numbers contains 11 in
it or not.
Input : N : 6
Elements : 85 66 11 80 93 88
Output : 11 is present
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 11 is absent
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check11(int Arr[],int iLength)
{
	int iCnt=0;
	if((Arr==NULL)||(iLength<=0))
	{
		return -1;
	}
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==11)
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
	int iSize=0,iCnt=0;
	BOOL bRet=FALSE;
	int * p=NULL;

	printf("enter the element:");
	scanf("%d",&iSize);
	
	p=(int *)malloc(iSize*sizeof(int));

	printf("Enter %delements",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	bRet=Check11(p,iSize);

	if(bRet==TRUE)
	{
		printf("11 is present\n");
	}
	else
	{
		printf("11 is not present:\n");
	}
	free(p);
	return 0;
}
