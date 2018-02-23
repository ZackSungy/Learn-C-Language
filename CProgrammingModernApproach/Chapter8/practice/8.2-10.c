#include <stdio.h>
#define N 8

int main()
{
	int i,j;
	char checker_board[N][N],ch='B';
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			(i+j)%2?checker_board[i][j]=ch+16:(checker_board[i][j]=ch);
		}
	}

	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%c ",checker_board[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
