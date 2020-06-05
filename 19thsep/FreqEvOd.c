/*Accept no from user & display the frequancy of even digits and odd digits
ip:753 op:0 3
ip:222 op 3 0
ip:2678 op:3 1
ip:1008 op:3 1
ip:o op:1 0
*/

#include<stdio.h>
void Frequency(int iNo)
{
	int iDigit=0;
	int iEven=0;
	int iOdd=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo==0)
	{
		printf("1 0");
		return;
	}

	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			iEven++;
		}
		else
		{
			iOdd++;
		}
		iNo=iNo/10;
	}

	printf("%d\t",iEven);
	printf("%d\t",iOdd);
}

int main()
{
	int iValue=0;
	printf("Enter the no");
	scanf("%d",&iValue);
	Frequency(iValue);
	return 0;
}
		
 
