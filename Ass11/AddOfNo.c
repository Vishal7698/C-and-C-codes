#include<stdio.h>

int AddOfNo(int iStart,int iEnd)
{
	int iCnt=0;
	int iAdd=0;
	if(iStart<0)
	{
		iStart=-iStart;
	}

	if(iEnd<0)
	{
		iEnd=-iEnd;
	}

	if(iStart>iEnd)
	{
		printf("invalid");
	}

	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		iAdd=iAdd+iCnt;
	}
	return iAdd;
}

int main()
{
	int iValue1=0,iValue2=0;
	int iRet=0;
	printf("Enter two numbers:");
	scanf("%d %d",&iValue1,&iValue2);
	iRet=AddOfNo(iValue1,iValue2);
	printf("%d\n",iRet);
	return 0;
}
