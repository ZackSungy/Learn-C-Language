#include<stdio.h>

int  roll_dice()
{
	int sign,dice;
	printf("You rolled:");
	scanf("%d",&dice);
	switch(dice){
		case 7: case 11:
		printf("You win\n");return 1;
		case 2: case 3: case 12:
		printf("You lose\n");return 0;
		default:
		sign=dice;printf("Your point is %d\n",sign);
	}
	while(1){
		printf("You rolled:");
		scanf("%d",&dice);
		if(dice==7){
			printf("You lose\n");
			return 0;
		}
		if(dice==sign){
			printf("You win\n");
			return 1;
		}
	}
}

void play_game()
{
	int win=0,lose=0;
	char judge='y';
	while(judge=='y'){
		if(roll_dice())
			win++;
		else
			lose++;
		judge='d';
		printf("Play again?('y' or 'n')");
		while((judge=getchar())!='y' && judge!= 'n');
			
	}
	printf("Wins:%d Losses:%d\n",win,lose);
}

int main()
{
	play_game();
	return 0;
}
