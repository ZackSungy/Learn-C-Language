#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_CARDS 5
#define NUM_HAND 2

int hand[NUM_CARDS][NUM_HAND];
bool straight,flush,four,three;
int pairs;

void read_cards(void);
void analyze_hand(void);
void print_result(void);

int main(void)
{
	for(;;){
		read_cards();
		analyze_hand();
		print_result();
	}
}

void read_cards(void)
{
	char ch,rank_ch,suit_ch;
	int rank,suit,i;
	bool bad_card,ignored;
	int cards_read=0;

	while(cards_read<NUM_CARDS){
		bad_card=false,ignored=false;
		printf("Enter a card: ");
		rank_ch=getchar();
		switch(rank_ch){
			case '0': exit(EXIT_SUCCESS);
			case '2': rank=0;break;
			case '3': rank=1;break;
			case '4': rank=2;break;
			case '5': rank=3;break;
			case '6': rank=4;break;
			case '7': rank=5;break;
			case '8': rank=6;break;
			case '9': rank=7;break;
			case 't': case 'T': rank=8;break;
			case 'j': case 'J': rank=9;break;
			case 'q': case 'Q': rank=10;break;
			case 'k': case 'K': rank=11;break;
			case 'a': case 'A': rank=12;break;
			default: bad_card=true;
		}

		suit_ch=getchar();
		switch(suit_ch){
			case 'c':case 'C':suit=0;break;
			case 'd':case 'D':suit=1;break;
			case 'h':case 'H':suit=2;break;
			case 's':case 'S':suit=3;break;
			default: bad_card=true;
		}

		while((ch=getchar())!='\n'){
			if(ch!=' ')bad_card=true;
		}

		for(i=0;i<cards_read;i++){
			if(hand[i][0]==rank&&hand[i][1]==suit){
				ignored=true;
				break;
			}
		}

		if(bad_card)
			printf("Bad card; ignored.\n");
		else if(ignored)
			printf("Duplicate card; ignored.\n");
		else{
			hand[cards_read][0]=rank;
			hand[cards_read][1]=suit;
			cards_read++;
		}
	}
}

void analyze_hand(void)
{
	int num_consec=0;
	int  i,j,rank,same;

	straight=true;
	flush=true;
	four=false;
	three=false;
	pairs=0;

	for(i=1;i<NUM_CARDS;i++){
		for(j=0;j<NUM_CARDS-i;j++){
			rank=hand[j][0];
			if(hand[j+1][0]<rank){
				hand[j][0]=hand[j+1][0];
				hand[j+1][0]=rank;
			}
		}
	}

	for(i=0;i<NUM_CARDS;i++){
		printf("%d ",hand[i][0]);
	}
	printf("\n");

	for(i=0;i<NUM_CARDS-1;i++){
		if(hand[i][1]!=hand[i+1][1])
			flush=false;
	}

	for(i=0;i<NUM_CARDS-1;i++){
		if((hand[i][0]+1)!=hand[i+1][0])
			straight=false;
	}
	
	i=0;
	while(i<NUM_CARDS){
		rank=hand[i][0];
		i++;
		same=1;
		while(i<NUM_CARDS&&hand[i][0]==rank){
			same++;
			i++;
		}
		switch(same){
			case 4:four=true;
			case 3:three=true;
			case 2:pairs++;
		}
	}
}

void print_result(void)
{
	if(straight && flush) printf("Straight flush");
	else if(four)	printf("Four of a kind");
	else if(three && pairs == 1)	printf("Full house");
	else if(flush)	printf("flush");
	else if(straight) printf("Straight");
	else if(three) printf("Three of a kind");
	else if(pairs == 2) printf("Two pairs");
	else if(pairs ==1) printf("Pairs");
	else printf("High card");
	printf("\n\n");
}
