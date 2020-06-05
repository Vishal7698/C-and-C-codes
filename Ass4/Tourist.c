#include<stdio.h>

int TouristBill(int iKilometer)
{
	//int iCnt=0;
	if(iKilometer<0)
	{
		iKilometer=-iKilometer;
	}

	if(iKilometer<100)
	{
		iKilometer=iKilometer*25;
		//printf("amount:%d\n",iKilometer);
		return iKilometer;
	}

	else if(iKilometer>100)
	{
		iKilometer=(((iKilometer-100)*15)+(100*25));
		return iKilometer;
	}
}

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter kilometers:");
	scanf("%d",&iValue);
	iRet=TouristBill(iValue);
	printf("amout is:%d",iRet);
	return 0;
}

	
