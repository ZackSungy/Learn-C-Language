#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#define N 10

int main()
{
	bool sign=false;
	int i=0,j=0,k,directionx[4]={0,1,0,-1},directiony[4]={1,0,-1,0};
	char checker_board[N][N],ch='A';
	memset(checker_board,'.',sizeof(char)*N*N);
	
	srand((unsigned) time(NULL));
	
	while(ch!=('Z'+1)){
		checker_board[i][j]=ch;
		sign=true;
		for(k=0;k<4;k++){
			int dir_judgex=directionx[k]+i,dir_judgey=directiony[k]+j;
			if(dir_judgex<0 || dir_judgex>9 || dir_judgey<0 || dir_judgey>9)
			 	continue;
			if(checker_board[dir_judgex][dir_judgey]=='.'){
				sign=false;
				break;
			}
		}

		if(sign)
			break;
		while(1){
			int random=rand()%4,dir_judgex=i+directionx[random],dir_judgey=j+directiony[random];

			if(dir_judgex>=0 && dir_judgex<10 && dir_judgey>=0 && dir_judgey<10){
				if(checker_board[dir_judgex][dir_judgey]=='.'){
					i=dir_judgex;
					j=dir_judgey;
					ch++;
					break;
				}
			}
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			printf("%c ",checker_board[i][j]);
		printf("\n");
	}
	return 0;

}
