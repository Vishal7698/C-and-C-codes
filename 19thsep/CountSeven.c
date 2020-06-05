/*Accept no from user and count the frequancy of 7 in that no
ip:711 op:1
ip:952 op:0
ip:777 op:3
*/

#include<stdio.h>

int CountSeven(int iNo)
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
		if(iDigit==7)
		{
			//iCnt=iCnt+1;
			iCnt++;
		}
		
		iNo=iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue=0,iRet=0;
	printf("Enter the Number:");
	scanf("%d",&iValue);
	
	iRet=CountSeven(iValue);
	printf("%d\n",iRet);
	return 0;
}
		
