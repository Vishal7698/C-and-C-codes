/*Accept no from user and return product of even digit from that no
ip:753 op:0
ip:275 op:2
ip:2617 op:12
*/

#include<stdio.h>
int EvenProduct(int iNo)
{
	int iDigit=0;
	int iMul=1;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	

	while(iNo>0)
	{
		iDigit=iNo%10;
		if(((iDigit%2)==0)&&(iDigit!=0))
		{
			iMul=iMul*iDigit;
		}
			
		iNo=iNo/10;
		
	}
	if(iMul==1)
	{
		iMul=0;
	}
	return iMul;
}

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter the no:");
	scanf("%d",&iValue);
	iRet=EvenProduct(iValue);
	printf("%d",iRet);
	return 0;
}
	
