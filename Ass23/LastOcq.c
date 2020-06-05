/*3. Accept N numbers from user and accept one another number as NO ,return index of last occurrence of that NO.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 3
Input : N : 6
NO: 93
Elements : 85 66 3 66 93 88
Output : 4
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : -1
*/

#include<stdio.h>
#include<stdlib.h>

int LasttOqr(int Arr[],int iLength,int iNo)
{
	int iCnt=0,iCount=0;
	if((NULL==Arr)||(iLength<=0))
	{
		return -1;
	}
	
	for(iCnt=iLength-1;iCnt>=0;iCnt--)
	{
		if(Arr[iCnt]==iNo)
		{
			break;
		}
	}

	if(iCnt==iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
}

int main()
{
	int iSize=0,iRet=0,iCnt=0,iValue=0;
	int *p=NULL;

	printf("Enter number of elements:\n");
	scanf("%d",&iSize);

	p=(int *)malloc(iSize*sizeof(int));

	if(NULL==p)
	{
		printf("unable to allocate the memory:");
		return -1;
	}
	
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{	
		printf("Enter %d elements\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	printf("Enter Element no:\n");
	scanf("%d",&iValue);
	
		
	iRet=LasttOqr(p,iSize,iValue);
	if(iRet==-1)
	{
		printf("there is no such numbr");
	}
	else
	{
		printf("First occurrence of number is%d",iRet);
}
	free(p);
	return 0;
}
