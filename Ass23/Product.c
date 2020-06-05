/*5. Accept N numbers from user and return product of all odd elements.
Input : N : 6
Elements : 15 66 3 70 10 88
Output : 45
Input : N : 6
Elements : 44 66 72 70 10 88
Output : 0
*/

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
	int iCnt=0,iProduct=0;
	if((NULL==Arr)||(iLength<=0))
	{
		return -1;
	}
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)!=0)
		{
			if(iProduct==0)
			{
				iProduct=1;
			}
			iProduct=iProduct*Arr[iCnt];
		}
	}
	return iProduct;
}

int main()
{
	int iSize=0,iRet=0,iCnt=0;
	int *p=NULL;

	printf("Enter number of elements:\n");
	scanf("%d",&iSize);

	p=(int *)malloc(iSize*sizeof(int));

	if(NULL==p)
	{
		printf("unable to allocate the memory:");
		return -1;
	}
	
	printf("Enter Elements :\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{	
		scanf("%d",&p[iCnt]);
	}
	
			
	iRet=Product(p,iSize);
	printf("product is:%d\n",iRet);
	
	free(p);
	return 0;
}
