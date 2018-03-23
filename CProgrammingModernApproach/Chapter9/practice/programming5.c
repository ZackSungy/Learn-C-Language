#include <stdio.h>
#include <string.h>

void create_magic_square();
void print_magic_square();

int main(void)
{
	int n;
	printf("Enter the size of magic square:");
	scanf("%d",&n);

	int magic_square[n][n];
	create_magic_square(n,magic_square);
	//print_magic_square(n,magic_square);
	return 0;
}

void create_magic_square(int n,char magin_square[n][n])
{
	int count=1,x=0,y=n/2;
	memset(magin_square,'.',sizeof(char)*n*n);
	while(count<=n*n){
		magin_square[x][y]='0'+count;
		if(magin_square[x-1<0?n:x-1][y+1>n?0:y+1]=='.')
			x++;
		else{
			x=x-1<0?n:x-1;
			y=y+1>n?0:y+1;
		}
	}
}

void print_magic_square(int n,char magin_square[n][n])
{
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%c ",magin_square[i][j]);
		printf("\n");
	}
} 
