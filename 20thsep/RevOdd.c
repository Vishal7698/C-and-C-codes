/*Accept no from user &return its reverse no which only content its odd digits
ip:135 op:531
ip:2466 op:0
ip:2435 op:53
ip:1674 op:71
ip:3007 op:73
*/

#include<stdio.h>

int RevOdd(int iNo)
{
	int iDigit=0;
	int iRev=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}

	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%2)!=0)
		{
			iRev=iRev*10+iDigit;
		}
		iNo=iNo/10;
	}
	return iRev;
}

int main()
{
	int iValue=0,iRet=0;
	printf("Enter the no:");
	scanf("%d",&iValue);
	iRet=RevOdd(iValue);
	printf("%d\n",iRet);
	return 0;
}
