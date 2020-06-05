/*1.Write a program which number from user and display below pattern.

Input : 7846

Output : 
6 4 8 7
6 4 8 7
6 4 8 7
6 4 8 7
*/

#include<stdio.h>
void Patter1(int iNo)
{
	int iCnt=0,i=0,j=0,iRev=0,iDigit=0;
	int Temp=iNo;
	
	while(Temp>0)
	{
		iCnt++;
		Temp=Temp/10;
		
	}
		
		for(i=1;i<=iCnt;i++)
		{
			for(j=1,Temp=iNo;j<=iCnt;j++)
			{
					
				printf("%d\t",Temp%10);
				Temp=Temp/10;		
			}
			
			printf("\n");
		}
		
		
	
}


int main()
{
	int iValue=0;
	printf("enter the number:");
	scanf("%d",&iValue);
	Patter1(iValue);
	
	return 0;
}
