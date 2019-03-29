#include <stdio.h>

#define MAX_DIGITS 10

int segment[10][7]={
{1,1,1,1,1,1,0},
{0,1,1,0,0,0,0},
{1,1,0,1,1,0,1},
{1,1,1,1,0,0,1},
{0,1,1,0,0,1,1},
{1,0,1,1,0,1,1},
{1,0,1,1,1,1,1},
{1,1,1,0,0,0,0},
{1,1,1,1,1,1,1},
{1,1,1,1,0,1,1},
};


char digits[3][4*MAX_DIGITS];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void)
{
	clear_digits_array();
	print_digits_array();
}

void clear_digits_array(void)
{
	int i,j;
	char digit;
	for(i=0;i<3;i++){
		for(j=0;j<4*MAX_DIGITS;j++){
			digits[i][j]=' ';
		}
	}

	printf("Enter a numbre:");

	for(i=0;digit=getchar();){
		if(digit=='\n')
			break;
		if(i<MAX_DIGITS && '0' <= digit && digit <= '9'){
			process_digit(digit-'0',0+i*4);
			i++;
		}
		
	}
}

void process_digit(int digit, int position)
{
	int i;
	for(i=0;i<7;i++){
		if(segment[digit][i]){
			switch(i){
				case 0:digits[0][position+1]='_';break;
				case 1:digits[1][position+2]='|';break;
				case 2:digits[2][position+2]='|';break;
				case 3:digits[2][position+1]='_';break;
				case 4:digits[2][position+0]='|';break;
				case 5:digits[1][position+0]='|';break;
				case 6:digits[1][position+1]='_';break;
			}
		}
	}
}

void print_digits_array(void)
{
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4*MAX_DIGITS;j++){
			printf("%c",digits[i][j]);
		}
		printf("\n");
	}
}
