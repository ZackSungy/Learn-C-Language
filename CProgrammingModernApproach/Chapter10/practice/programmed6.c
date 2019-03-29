#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define STACK_SIZE 100

int num[STACK_SIZE];
char symbol[STACK_SIZE];
int num_top=0,symbol_top=0,result;

void pop(bool judge);
void push(char ch,bool judge);
void write(void);
void operation(void);
void print_result(int result);


int main()
{
	while(1){
		write();
		operation();
	}
}

void pop(bool judge)
{
	if(judge && symbol_top>0)
		symbol_top--;
	else if(num_top>0)
		num_top--;
	else{
		printf("Not enouge operands in expression!\n");
		exit(1);
	}
}

void push(char ch,bool judge)
{
	if(judge && symbol_top<STACK_SIZE){
		symbol[symbol_top]=ch;
		symbol_top++;
	}
	else if(!judge && num_top<STACK_SIZE){
		num_top++;
		num[num_top]=ch-'0';
	}
	else{
		printf("Expression is too complex!\n");
		exit(1);
	}
}

void write(void)
{
	char ch;
	printf("Enter an RPN expressio: ");
	while(1){
		scanf(" %c",&ch);
		if(ch=='='){
			if(num_top!=0 && num_top<=(symbol_top-num_top)){
				printf("Not enouge operands in expression!\n");
				exit(1);
			}
			break;
		}
		else if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
			push(ch,true);
		}
		else if('0' <= ch && ch <= '9'){
			push(ch,true);
			num_top++;
		}
		else if(ch=='q' || ch == 'Q'){
			exit(0);
		}
		else{
			printf("Enter error!");
			exit(1);	
		}
		if(num_top!=0 && num_top<=(symbol_top-num_top)){
			printf("Not enouge operands in expression!\n");
			exit(1);
		}
	}
}

void operation(void)
{
	int i;
	if(num_top-1!=(symbol_top-num_top)){
		printf("Not enouge operands in expression!\n");
		exit(1);
	}
	num_top=0;
	num[num_top]=symbol[0]-'0';
	for(i=0;i<symbol_top;i++){
		

		if('0'<=symbol[i] && symbol[i]<='9'){
			push(symbol[i],false);
			continue;
		}

		switch(symbol[i]){
			case '+':num[num_top-1]+=num[num_top],pop(false);break;
			case '-':num[num_top-1]-=num[num_top],pop(false);break;
			case '*':num[num_top-1]*=num[num_top],pop(false);break;
			case '/':num[num_top-1]/=num[num_top],pop(false);break;
		}
	}
	print_result(num[num_top]);
}

void print_result(int result)
{
	printf("Value of expression: %d\n",result);
	num_top=0;
	symbol_top=0;
}
