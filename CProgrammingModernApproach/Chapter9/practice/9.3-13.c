#include <stdio.h>
#define N 8

int evaluate_position();

int main()
{
	int board[N][N],i,j;
	char ch;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
				while(1){
				ch=getchar();
				if(isalpha(ch)){
					board[i][j]=ch;
					break;
				}
			}
		}
	}

	if(evaluate_position(board)>0)
		printf("The write win!\n");
	else
		printf("The brack win!\n");
	return 0;
}

int evaluate_position(char a[][N])
{
	int i,j,write=0,brack=0,score;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			switch(toupper(a[i][j])){
				case 'P':score=1;break;
				case 'B': case 'N':score=3;break;
				case 'R':score=5;break;
				case 'Q':score=9;break;
				default:score=0;break;
			}
			if(isupper(a[i][j]))
				write+=score;
			else
				brack+=score;
		}
	}
	return write-brack;
}
