#include <stdio.h>
#include <ctype.h>

float compute_GPA(char grtades[],int n);

int main(void)
{
	int n,i;
	printf("Enter size:");
	scanf("%d",&n);
	char arr[n];
	printf("Enter the grades:");
	getchar();
	for(i=0;i<n;i++){
		scanf("%c",&arr[i]);
	}
	printf("The average is %f\n",compute_GPA(arr,n));
}

float compute_GPA(char grtades[],int n)
{
	int i;
	float avg=0.0f,count=0.0f;
	char ch;
	for(i=0;i<n;i++){
		ch=toupper(grtades[i]);
		if('A' <= ch && ch<='F' && ch!='E'){
			ch=ch=='F'?'E':ch;
			printf("%c\n",ch);
			avg-=ch-'E';
			count++;
		}	
	}

	return count?avg/count:0;
}
