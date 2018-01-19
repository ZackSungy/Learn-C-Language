#include <stdio.h>

int main()
{
	int square[4][4],rsum[4]={0,0,0,0},csum[4]={0,0,0,0},dsum[2]={0,0};

	printf("Enter the numbers from 1 to 16 in any order:");
	for (int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			scanf("%d",&square[i][j]);

	
	for (int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%2d ",square[i][j]);
			rsum[i]+=square[i][j];
			csum[j]+=square[i][j];
			if(i==j)
				dsum[i-j]+=square[i][j];
			if(j+i==3)
				dsum[1]+=square[i][j];
		}
		printf("\n");
	}

	printf("Row sums:");
	for (int i=0;i<4;i++)
		printf("%d ",rsum[i]);
	
	printf("\nColumn sums:");
	for (int i=0;i<4;i++)
		printf("%d ",csum[i]);
	
	printf("\nDiagonal sums:%d %d\n",dsum[0],dsum[1]);

	return 0;
}
