#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#define N 10

void generate_random_walk(char walk[N][N]);
void print_array(char walk[N][N]);

int main()
{
	char checkerboard[N][N];
	generate_random_walk(checkerboard);
	print_array(checkerboard);
	return 0;

}

void generate_random_walk(char walk[N][N])
{

	bool sign=false;
	int i=0,j=0,k,directionx[4]={0,1,0,-1},directiony[4]={1,0,-1,0};
	char ch='A';
	memset(walk,'.',sizeof(char)*N*N);
	
	srand((unsigned) time(NULL));
	
	while(ch!=('Z'+1)){
		walk[i][j]=ch;
		sign=true;
		for(k=0;k<4;k++){
			int dir_judgex=directionx[k]+i,dir_judgey=directiony[k]+j;
			if(dir_judgex<0 || dir_judgex>9 || dir_judgey<0 || dir_judgey>9)
			 	continue;
			if(walk[dir_judgex][dir_judgey]=='.'){
				sign=false;
				break;
			}
		}

		if(sign)
			break;
		while(1){
			int random=rand()%4,dir_judgex=i+directionx[random],dir_judgey=j+directiony[random];

			if(dir_judgex>=0 && dir_judgex<10 && dir_judgey>=0 && dir_judgey<10){
				if(walk[dir_judgex][dir_judgey]=='.'){
					i=dir_judgex;
					j=dir_judgey;
					ch++;
					break;
				}
			}
		}
	}
}

void print_array(char walk[N][N])
{
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			printf("%c ",walk[i][j]);
		printf("\n");
	}
}
