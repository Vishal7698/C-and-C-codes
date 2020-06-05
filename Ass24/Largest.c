/*1. Accept N numbers from user and return the largest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 93
*/
#include<stdio.h>
#include<stdlib.h>

int Largest(int Arr[],int iLength)
{
	int iCnt=0,iTemp=0;
	if((NULL==Arr)||(iLength<=0))
	{
		return -1;
	}
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>=iTemp)
		{
			iTemp=Arr[iCnt];
		}
	}
	return iTemp;
}

int main()
{
	int iCnt=0,iSize=0;
	int bRet=0;
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
		
	bRet=Largest(p,iSize);
	printf("%d",bRet);
	
	free(p);
	return 0;
}
