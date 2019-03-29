#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


#define STACK_SIZE 100

int contents[STACK_SIZE];
int top=0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char);
void pop(void);
void judge(char);

int main()
{
	char symbol;

	printf("Enter parenteses and braces:");
	while((symbol=getchar())!='\n'){
		switch(symbol){
			case '(': case '{':push(symbol);break;
			case ')': case '}':judge(symbol);pop();break;
			default:printf("Enter error!\n");return 0;
		}
	}

	printf("Braces are nested properly\n");
}

void make_empty(void)
{
	top=0;
}

bool is_full(void)
{
	return top==STACK_SIZE;
}

bool is_empty(void)
{
	return top==0;
}

void push(char symbol)
{
	if(is_full())
		exit(1);
	else
		contents[top++] = symbol;
}

void pop(void)
{
	if(is_empty())
		exit(1);
	else
		top--;
}

void judge(char symbol)
{
	int j=top-1;
	if(contents[j]=='(' && symbol=='}' || contents[j]=='{' && symbol==')'){
		printf("Braces are nested error!\n");
		exit(0);
	}
}
