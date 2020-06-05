//Accept no and return largest factor
#include<stdio.h>
int MaxFact(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=(iNo/2);iCnt>1;iCnt--)
	{
		if((iNo%iCnt)==0)
		{
			break;
		}
	}
	return iCnt;
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the Value:");
	scanf("%d",&iValue);

	iRet=MaxFact(iValue);
	printf("Max factor is:%d\n",iRet);
	return 0;
}
			

