/*Accept N numbers from user and return difference between summation
of even elements and summation of odd elements.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181)
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
	int iSumE=0,iSumOd=0,iDiff=0,iCnt=0;
	if((NULL==Arr)||(iLength<=0))
	{
		return 0;
	}
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			iSumE=iSumE+Arr[iCnt];
		}
		else
		{
			iSumOd=iSumOd+Arr[iCnt];
		}
	}
	iDiff=iSumE-iSumOd;
	return iDiff;
			
}

int main()
{
	int iSize=0,iRet=0,iCnt=0;
	int *p=NULL;

	printf("Enter the number:");
	scanf("%d",&iSize);

	p=(int *)malloc(iSize*sizeof(int));
	
	if(NULL==p)
	{
		printf("Unable to allocate the memory:");
		return -1;
	}
	
	printf("Enter the no of elements:");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	iRet=Difference(p,iSize);
	printf("Differnce is:%d",iRet);
	free(p);
	return 0;
}


