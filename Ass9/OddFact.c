#include<stdio.h>

int EvenFact(int iNo)
{
	int iCnt=0;
	int iMul=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{	
		if((iCnt%2)!=0)
		{
			iMul=iMul*iCnt;
		}
		
	}
	return iMul;
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
