/*Accept N numbers from user and accept one another number as NO ,return frequency of NO form it.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 2
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : 0
*/

#include<stdio.h>
#include<stdlib.h>

int Freq(int Arr[],int iLength,int iNo)
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
			iCount++;
		}
	}
	return iCount;
}

int main()
{
	int iSize=0,iRet=0,iCnt=0,iValue=0;
	int *p=NULL;

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
	printf("Enter searching no:");
	scanf("%d",&iValue);
	
		
	iRet=Freq(p,iSize,iValue);
	printf("%d",iRet);
	free(p);
	return 0;
}
