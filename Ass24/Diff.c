/*3. Accept N numbers from user and return the difference between largest
and smallest number.
Input : N : 6
Elements : 85 66 3 66 93 88
Output : 90 (93 -3)
*/
#include<stdio.h>
#include<stdlib.h>

int Differnce(int Arr[],int iLength)
{
	int iCnt=0,iSmall=0,iLarg=0,iDiff=0;
	if((NULL==Arr)||(iLength<=0))
	{
		return -1;
	}
	iSmall=Arr[0];
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{	
		if(Arr[iCnt]>=iLarg)
		{
			iLarg=Arr[iCnt];
		}
		else
		{
			if(Arr[iCnt]<=iSmall)
			{
				iSmall=Arr[iCnt];
			}
		}
	}
	iDiff=iLarg-iSmall;
	return iDiff;
}

int main()
{
	int iCnt=0,iSize=0;
	int bRet=0;
	int * p=NULL;

	printf("Enter number of elements:\n");
	scanf("%d",&iSize);

	p=(int *)malloc(iSize*sizeof(int));

	if(NULL==p)
	{
		printf("unable to allocate the memory:");
		return -1;
	}
	
	printf("Enter %d elements:\n",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
		
	bRet=Differnce(p,iSize);
	printf("Diff is :%d\n",bRet);
	
	free(p);
	return 0;
}
