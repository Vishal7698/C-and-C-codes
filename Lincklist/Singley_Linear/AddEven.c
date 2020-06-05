/*Adition of all even number in given linklist
*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Node
{
	int Data;
	struct Node *Next;
};

	typedef struct Node NODE;
	typedef struct Node *PNODE;
	typedef struct Node **PPNODE;


//declaration of functions 

void InsertFirst(PPNODE,int);
void Display(PNODE);
int EvenAddition(PNODE);


//Insert first at possition 1st in linked list
void InsertFirst(PPNODE First, int No)
{
	PNODE newN=NULL;
	
	newN=(PNODE)malloc(sizeof(NODE));
	
	newN->Data=No;
	newN->Next=NULL;

	if(*First==NULL)
	{
		*First=newN;
	}
	else
	{
		newN->Next=*First;
		*First=newN;
	}
}


int EvenAddition(PNODE First)
{
	int sum=0;
	while(First!=NULL)
	{
		if((First->Data %2)==0)
		{
			sum=sum+First->Data;
		}
		First=First->Next;
	}
	return sum;
}


//Display The the Node in linklist
void Display(PNODE First)
{
	while(First!=NULL)
	{
		printf("%d\t",First->Data);
		First=First->Next;
	}
}

int main()
{
	PNODE Head=NULL;
	int iRet=0;
	InsertFirst(&Head,100);
	InsertFirst(&Head,50);
	InsertFirst(&Head,21);
	InsertFirst(&Head,11);
	
	Display(Head);
	
	iRet=EvenAddition(Head);
	printf("\nAddition of even no is:%d\n",iRet);
	return 0;
}
