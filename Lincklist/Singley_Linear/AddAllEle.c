/*Addition of all elements in linked kist
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
int AdditionEle(PNODE);


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


int AdditionEle(PNODE First)
{
	int sum=0;
	while(First!=NULL)
	{
		sum=sum+First->Data;
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
	InsertFirst(&Head,101);
	InsertFirst(&Head,51);
	InsertFirst(&Head,21);
	InsertFirst(&Head,11);
	
	Display(Head);
	
	iRet=AdditionEle(Head);
	printf("\nAddition of all no is:%d\n",iRet);
	return 0;
}
