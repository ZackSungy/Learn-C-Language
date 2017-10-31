#include<stdio.h>
#include<stdlib.h>

typedef struct weapon
{
	int price;
	int atk;
	struct weapon *next;
}weapon;

weapon * creat()
{
	int n = 0;
	weapon *head;
	weapon *p1, *p2;
	p1 = p2 = (weapon*)malloc(sizeof(weapon));
	scanf("%d%d", &p1->price, &p1->atk);
	while (p1->price != 0)
	{
		n++;
		if (n == 1)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (weapon*)malloc(sizeof(weapon));
		scanf("%d%d", &p1->price, &p1->atk);

	}
	p2->next = NULL;
	return head;
}

int main()
{
	weapon *p = creat();
	while (p != NULL)
	{
		printf("%d %d", p->price, p->atk);
		p = p->next;
	}
	return 0;
}