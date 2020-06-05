/*Accept N numbers from user and return frequency of even numbers.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 3
*/

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
	int iCnt=0,iCount=0;
	
	if((NULL==Arr)||(iLength<=0))
	{
		return -1;
	}
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			iCount++;
		}
	}
	return iCount;
}

int main()
{
	int iSize=0,iRet=0,iCnt=0;
	int *p=NULL;

	printf("Enter the number of element:");
	scanf("%d",&iSize);

	p=(int *)malloc(iSize*sizeof(int));

	if(NULL==p)
	{
		printf("unable to allocate the memory");
		return -1;
	}

	printf("Enter %d elements:\n",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}

	iRet=CountEven(p,iSize);
	printf("even numbers are:%d\n",iRet);
	free(p);
	return 0;
}
	
	
