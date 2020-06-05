/*Accept number from user and display below pattern.
Input : 4
Output : # 1 * # 2 * # 3 * # 4 *
*/
#include<stdio.h>
void Pattern4(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("#");
		printf("%d",iCnt);
		printf("*\t");
	}
}

int main()
{
	int iValue=0;
	printf("Enter the no:");
	scanf("%d",&iValue);
	Pattern4(iValue);
	return 0;
}
