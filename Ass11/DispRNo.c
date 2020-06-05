#include<stdio.h>
void DispRNo(int iStart,int iEnd)
{
	int iCnt=0;
	for(iCnt=iEnd;iCnt>=iStart;iCnt--)
	{
		printf("%d\t",iCnt);
	}
}

int main()
{
	int iValue1=0,iValue2=0,iRet=0;

	printf("Enter the two number:");
	scanf("%d %d",&iValue1,&iValue2);
	DispRNo(iValue1,iValue2);
	return 0;
}

