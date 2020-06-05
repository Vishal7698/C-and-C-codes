/*Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output :2 4 6 8 10
	1 3 5 7 9
	2 4 6 8 10
	1 3 5 7 9
*/
#include<stdio.h>
void Pattern2(int iRow,int iCol)
{
	int i=0,j=0;

	for(i=1;i<=iRow+1;i++)
	{
		if((i%2==0))
		{
			for(j=1;j<=(iCol*2)+1;j++)
			{ 
				if((j%2)!=0)
				{
					printf("%d\t",j);
				}
			}
		}
		else
		{
			for(j=1;j<=iCol+1;j++)
			{
				printf("%d\t",j*2);
			}
		}
		printf("\n");
	}
}


int main()
{	

	int iValue1 = 0, iValue2 = 0;
	printf("Enter rows and columns:\n");
	scanf("%d %d",&iValue1, &iValue2);
	Pattern2(iValue1, iValue2);

	return 0;
}
	

	
