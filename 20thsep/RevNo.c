/*Accept no from user & return the reverce of that no
ip: 157 op:751
ip:2310 op:132
ip:-751 op:157
ip:1032 op:2301
*/

#include<stdio.h>
int ReveNo(int iNo)
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
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	return iRev;
}

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Entr the no:");
	scanf("%d",&iValue);
	iRet=ReveNo(iValue);
	printf("%d",iRet);
	return 0;
}
