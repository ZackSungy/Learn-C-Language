#include <stdio.h>
#include <string.h>



int main()
{
	int size;
	printf("This program creates a magic square of a specified size.");
	printf("\nThe size must be an odd number between 1 and 99.");
	printf("\nEnter size of magic square: ");

	scanf("%d",&size);
	if(size%2==0)
		return 0;

	int square[size][size],i,x=0,y=size/2;
	memset(square,0,sizeof(int)*size*size);	

	for(i=1;i<=size*size;i++){
		square[x][y]=i;
		if(square[x-1<0?size-1:x-1][y+1>size-1?0:y+1]){
			x++;
		}
		else{
			x=x-1<0?size-1:x-1;
			y=y+1>size-1?0:y+1;
		}
	}

	for(x=0;x<size;x++){
		for(y=0;y<size;y++)
			printf("%5d ",square[x][y]);
		printf("\n");
	}

	return 0;
}
