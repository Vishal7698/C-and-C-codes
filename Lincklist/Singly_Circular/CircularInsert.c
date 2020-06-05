#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


typedef struct node
{
	int Data;
	struct node *Next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE,PPNODE,int);
void InsertLast(PPNODE,PPNODE,int);
void Display(PNODE,PNODE);


void InsertFirst(PPNODE First,PPNODE Last,int iNo)
{
	PNODE newN=NULL;

	newN=(PNODE)malloc(sizeof(NODE));

	newN->Data=iNo;
	newN->Next=NULL;

	if((*First==NULL)&&(*Last==NULL))
	{
		*First=newN;
		*Last=newN;
	}

	else
	{
		newN->Next=*First;
		*First=newN;
	}
	
	(*Last)->Next=(*First);
}

void InsertLast(PPNODE First,PPNODE Last,int iNo)
{
	PNODE newN=NULL;
	newN=(PNODE)malloc(sizeof(NODE));

	newN->Data=iNo;
	newN->Next=NULL;

	if((*First==NULL)&&(*Last==NULL))
	{
		*First=newN;
		*Last=newN;
	}
	else
	{
		(*Last)->Next=newN;
		(*Last)=(*Last)->Next;
	}
	(*Last)->Next=(*First);
}


void Display(PNODE First,PNODE Last)
{
	PNODE Temp=First;
	if(First==NULL)
	{
		printf("LinckedList is empty");
	}
	else
	{
		do
		{
		printf("%d\t",Temp->Data);
		Temp=Temp->Next;
		}
		while(Temp!=First);
	}
}

int main()
{
	PNODE Head=NULL;
	PNODE Tail=NULL;
	
		InsertFirst(&Head,&Tail,51);
		InsertFirst(&Head,&Tail,21);
		InsertFirst(&Head,&Tail,11);
		InsertFirst(&Head,&Tail,101);
		InsertFirst(&Head,&Tail,111);
		InsertLast(&Head,&Tail,60);
		Display(Head,Tail);
		return 0;
}
