#include<stdio.h>

#include<stdlib.h>

#define LIST_INIT_SIZE 100

#define LISTINCREMENT 10

typedef int Status;

typedef int ElemType;

typedef struct LNode{
	struct LNode *Next;
	ElemType data;
}LNode, *LinkList;

void CreateList_L(LinkList L, int n){
	LinkList p = NULL;
	for (int i = n; i > 0; --i)
	{
		p = (LinkList)malloc(sizeof(LNode));
		scanf("%d", &p->data);
		L->Next = p;
		L = L->Next;
	}
	L->Next = NULL;
}

Status ListTraverse(LinkList L, int n)
{

	LinkList p = (LinkList)malloc(sizeof(LNode));
	p = L->Next;
	int i;
	for (i = 1; i <= n; i++)
	{
		printf("%d ", p->data);
		p = p->Next;
	}
	printf("\n");
	free(p);
	return 1;
}


int main()
{
	int a;
	LinkList L;
	scanf("%d", &a);
	L = (LinkList)malloc(sizeof(LNode));
	CreateList_L(L, a);
	ListTraverse(L, a);
}
