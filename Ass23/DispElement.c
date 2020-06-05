/*4. Accept N numbers from user and accept Range, Display all elements from
that range
Input : N : 6
Start: 60
End : 90
Elements : 85 66 3 76 93 88
Output : 66 76 88
Input : N : 6
Start: 30
End : 50
Elements : 85 66 3 76 93 88
Output : 
*/

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
	int iCnt=0;
	/*if((NULL==Arr)||(iLength<=0))
	{
		return -1;
	}*/
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]>iStart)&&(Arr[iCnt]<iEnd))
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
	
}

int main()
{
	int iSize=0,iCnt=0,iStart=0,iEnd=0,iRet=0;
	int *p=NULL;
	
	printf("Enter the no of element:");
	scanf("%d",&iSize);
	
	printf("Enter the starting poin:\n");
	scanf("%d",&iStart);
	
	printf("Enter the ending point:\n");
	scanf("%d",&iEnd);

	p=(int *)malloc(iSize*sizeof(int));
	if(NULL==p)
	{
		printf("unable to allocate the memory");
		return -1;
	}
	
	printf("enter %d elements:\n",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	Range(p,iSize,iStart,iEnd);
		free(p);
	return 0;
}
