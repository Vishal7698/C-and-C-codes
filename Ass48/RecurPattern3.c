/*3.Write a recursive program which display below pattern.
Input : 5
Output : 5 4 3 2 1
*/


#include<stdio.h>
void DisplayI(int iNo)
{
	
	int i=0;
	
	for(i=iNo;i>=1;i--)
	{
		printf("%d\t",i);
		
	}
}

void DisplayR(int iNo)
{
	  //int i=0;
	  //i=iNo;
	
	 //static char ch='a';
	if(iNo>=1)
	{
		printf("\n\n%d\t\n",iNo);
		
		iNo--;
		DisplayR(iNo);
		
	}
}

int main()
{
	int iValue=0;
	printf("Enter the number:\n");
	scanf("%d",&iValue);

	
	DisplayI(iValue);
	DisplayR(iValue);
	return 0;
	
}


	
