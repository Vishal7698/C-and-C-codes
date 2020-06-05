#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Name:TicketCountr
//Input:Int
//Output:none
//Authore:Shraddha Mali
//Date:28-8-19
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TicketCounter(int iAge)
{
	if((iAge<0)||(iAge>100))
	{
		printf("\nInvalid value:\n");
		return;
	}

	if((iAge>=0)&&(iAge<5))
	{
		printf("free entry:\n");
	}

	else if((iAge>=5)&&(iAge<15))
	{
		printf("\nEntry fee is 500:\n");
	}

	else if((iAge>=15)&&(iAge<=50))
	{
		printf("\nEntry fees is 1000:\n");
	}

	else if(iAge>50)
	{
		printf("\nEntry fee is 750:\n");
	}
}

int main()
{
	int ivalue=0;
	printf("enter Age:");
	scanf("%d",&ivalue);
	TicketCounter(ivalue);
	return 0;
}

