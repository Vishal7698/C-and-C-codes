#include<stdio.h>

void RangeDispEve(int iStart,int iEnd)
{
	int iCnt=0;
	
	if(iStart>iEnd)
		{
			printf("invalid");
		}
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		
		if((iCnt%2)==0)
		{
			printf("%d\t",iCnt);
		}
		
	}
}

int main()
{
	int iValue1=0,iValue2=0;

	printf("Enter the numbers:");
	scanf("%d %d",&iValue1,&iValue2);
	RangeDispEve(iValue1,iValue2);
	return 0;
}
