#include<stdio.h>

void reduce(int numberator,int denominator,int *reduced_numerator,int *reduced_denominator);

int main()
{
	int nb,dm,rn,rd;

	printf("Enter a fraction:");
	scanf("%d/%d",&nb,&dm);

	reduce(nb,dm,&rn,&rd);

	printf("In lowest terms:%d/%d\n",rn,rd);
}

void reduce(int numberator,int denominator,int *reduced_numberator,int *reduced_denominator)
{
	int a,b,temp;

	a=numberator;
	b=denominator;	

	while(b!=0){
		temp=a%b;
		a=b;
		b=temp;
	}
	
	*reduced_numberator=numberator/a;
	*reduced_denominator=denominator/a;
}
