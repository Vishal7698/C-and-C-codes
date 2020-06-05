#include<stdio.h>

int EvenFact(int iNo)
{
	int iCnt=0;
	int iMulE=1;
	int iMulO=1;
	int Diff=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{	
		if((iCnt%2)==0)
		{
			iMulE=iMulE*iCnt;
		}
		else
		{
			iMulO=iMulO*iCnt;
		}
		Diff=iMulE-iMulO;
		
	}
	return Diff;
}

int main()
{
	int iValue=0,iRet=0;
	printf("Enter the number:");
	scanf("%d",&iValue);
	iRet=EvenFact(iValue);
	printf("%d",iRet);
	return 0;
}

//Input : 10
//Output : 945 (9 * 7 * 5 * 3 * 1)
