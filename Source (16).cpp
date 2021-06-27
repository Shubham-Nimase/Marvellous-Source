/*

LinkedList: Singly Circular Linked list...

Functions:

1]	void InsertFirst(PPNODE Head,int value);
2]	void Dispaly(PNODE Head);
3]	int Count(PNODE Head);
4]	void InsertLast(PPNODE Head,int value);
5]	void DeleteFirst(PPNODE Head);
6]	void DeleteLast(PPNODE Head);
7]	void InsertAtPos(PPNODE Head,int value,int Pos);
8]	void DeleteAtPos(PPNODE Head,int Pos);
*/

#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int value)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));

	newn->data = value;
	newn->next = NULL;

	if ((*Head == NULL) && (*Tail == NULL))
	{
		*Head = newn;
		*Tail = newn;
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
	}
		(*Tail)->next = *Head;
}

void Display(PNODE Head, PNODE Tail)
{
	printf("Data in the Linkedlist: ->");

	if ((Head == NULL) && (Tail == NULL))
	{
		printf("SORRY!! Your LinkedList is Empty!!\n\n");

		return;
	}

	do
	{
		printf("| %d |->", Head->data);
		Head = Head->next;
	} while (Head!=Tail->next);
	printf("\n");
}

int Count(PNODE Head, PNODE Tail)
{
	int iCnt = 0;
	if (Head == NULL || Tail == NULL)
	{
		return 0;
	}
	do
	{
		iCnt++;
		Head = Head->next;
	} while (Head != Tail->next);

	return iCnt;
}


void InsertLast(PPNODE Head, PPNODE Tail, int value)
{

	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));

	newn->data = value;
	newn->next = NULL;

	if ((*Head == NULL) && (*Tail == NULL))
	{
		*Head = newn;
		*Tail = newn;
	}
	else
	{
		(*Tail)->next = newn;
		*Tail = newn;
	}
	(*Tail)->next = *Head;
}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
	if ((*Head == NULL) && (*Tail == NULL))
	{
		return;
	}
	else if (*Head==*Tail)
	{
		free(*Head);
		*Head = NULL;
		*Tail = NULL;	
	}
	else
	{
		*Head = (*Head)->next;
		free((*Tail)->next);
	    (*Tail)->next = *Head;
	}
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
	if ((*Head == NULL) && (*Tail == NULL))
	{
		return;
	}
	else if (*Head == *Tail)
	{
		free(*Head);
		*Head = NULL;
		*Tail = NULL;
	}
	else
	{
		PNODE temp = NULL;
		temp = *Head;

		while (temp->next != *Tail)
		{
			temp = temp->next;
		}
		free(temp->next);
		*Tail = temp;
		(*Tail)->next = *Head;

		}
}

void InsertAtPos(PPNODE Head,PPNODE Tail, int value, int Pos)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));

	newn->data = value;
	newn->next = NULL;
	int size = 0;
	size = Count(*Head, *Tail);

		if ((Pos < 0) || (Pos > size + 1))
		{
			printf("SORRY!! Invalid Position!!!\n\n");
			return;
		}
		else if (Pos == 1)
		{
			InsertFirst(Head, Tail,value);
			printf("First Node is Updated...\n\n");

		}
		else if (Pos == size + 1)
		{
			InsertLast(Head, Tail,value);
			printf("Last Node is Updated...\n\n");

		}
		else
		{
			PNODE temp = *Head;
			temp = *Head;
			int i = 0;

			for (i = 1; i < Pos-1; i++)
			{
				temp = temp->next;
			}
			newn->next = temp->next;
			temp->next=newn;
			printf("Position %d Node is Updated...!!\n\n", Pos);

		}
}

void DeleteAtPos(PPNODE Head,PPNODE Tail, int Pos)
{
	int size = 0;
	size = Count(*Head,*Tail);

	PNODE temp1, temp2 = NULL;
	int i = 0;
	temp1 = *Head;

	if ((Pos < 1) || (Pos > size))
	{
		printf("SORRY!! Invalid Position!!!\n\n");
	}
	else if (Pos == 1)
	{
		DeleteFirst(Head,Tail);
		printf("First Node is Deleted!!\n\n");

	}
	else if (Pos == size)
	{
		DeleteLast(Head,Tail);
		printf("Last Node is Deleted!!\n\n");

	}
	else
	{
		for (i = 1; i < Pos - 1; i++)
		{
			temp1 = temp1->next;
		}
		temp2 = temp1->next;
		temp1->next = temp2->next;
		free(temp2);
		printf("Position %d Node is Deleted...!!\n\n", Pos);

	}

}
int main()
{
	PNODE First = NULL;
	PNODE Last = NULL;

	int no = 0;
	int iRet = 0;
	int Pos = 0;
	int Choice = 1;

	printf("\n~~~~~~~~~~~~~~~~~~~~~>> Welcome To Singly Circular LinkedList <<~~~~~~~~~~~~~~~~~~~~~\n\n\n");

	while (Choice)	//Terminates when Choice variable contain 0;
	{
		printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");

		printf("  >>Please Enter Your Choice:- \n\n");

		printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
		printf("	1: InsertFirst \n	2: InsertLast \n	3: InsertAtPos \n	4: DeleteFirst \n	5: DeleteLast \n	6: DeleteAtPos \n");
		printf("	7: Display \n	8: Count \n	0: Exit \n");

		printf("---------------------------------------------------------------------------------\n");

		printf("\nYour Choice:  ");
		scanf_s("%d", &Choice);

		switch (Choice)
		{
		case 1:

			printf("Enter the First Number:	");
			scanf_s("%d", &no);
			InsertFirst(&First,&Last, no);
			printf("LinkedList is Updated...\n\n");
			break;

		case 2:

			printf("Enter the Last Number:	");
			scanf_s("%d", &no);
			InsertLast(&First, &Last, no);
			printf("LinkedList is Updated...\n\n");
			break;

		case 3:

			printf("Enter the Position of Node Which you add:  ");
			scanf_s(" %d", &Pos);
			printf("Enter the Data of Node:	");
			scanf_s(" %d", &no);

			InsertAtPos(&First, &Last, no, Pos);

			break;


		case 4:

			DeleteFirst(&First,&Last);
			printf("First Node is Deleted!!\n\n");
			break;

		case 5:

			DeleteLast(&First, &Last);
			printf("Last Node is Deleted!!\n\n");
			break;

		case 6:

			printf("Which Position Node do you want to Delete?  :");
			scanf_s("%d", &Pos);
			printf("\n");
			DeleteAtPos(&First, &Last, Pos);
			break;

		case 7:

			Display(First,Last);
			printf("\n");
			break;

		case 8:

			iRet = Count(First,Last);
			printf("\nThere is %d Node(s) avaliable in LinkedList...\n\n", iRet);
			if (iRet == 0)
			{
				printf("SORRY!! Your LinkedList is Empty!!\n\n");
			}
			break;

		case 0:
			printf("\n~~~~~~~~~~~~~~~~~~~~~~>> Thank You for Using Application <<~~~~~~~~~~~~~~~~~~~~~~\n");
			break;


		default:
			printf(">>Wrong Choice!!\n\n");
			break;
		}
	}
	return 0;
}