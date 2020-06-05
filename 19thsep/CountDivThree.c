/*Accept no form user &count all such digits which are divisiable by three
ip:369 op:3
ip:311 op:1
ip:7757 op:0
*/

#include<stdio.h>

int CountDivThree(int iNo)
{
	int iDigit=0;
	int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}

	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%3)==0)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue=0,iRet=0;
	printf("Enter the number:");
	scanf("%d",&iValue);
	iRet=CountDivThree(iValue);
	printf("%d",iRet);
	return 0;
}
		

	
