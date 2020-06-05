#include<stdio.h>
void DispNo(int iStart,int iEnd)
{
	int iCnt=0;
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		printf("%d\t",iCnt);
	}
}

int main()
{
	int iValue1=0,iValue2=0,iRet=0;

	printf("Enter the two number:");
	scanf("%d %d",&iValue1,&iValue2);
	DispNo(iValue1,iValue2);
	return 0;
}

