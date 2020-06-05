/*Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 5
Output :4 4 4 4 4
	3 3 3 3 3
	2 2 2 2 2
	1 1 1 1 1
*/

#include<stdio.h>
void Pattern4(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=iCol;i>=1;i--)
	{
		for(j=1;j<=iRow;j++)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
}


int main()
{	

	int iValue1 = 0, iValue2 = 0;
	printf("Enter rows and columns::\n");
	scanf("%d %d",&iValue1, &iValue2);
	Pattern4(iValue1, iValue2);

	return 0;
}
		
