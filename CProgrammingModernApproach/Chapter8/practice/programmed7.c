#include <stdio.h>
#define N 5

int main()
{
	int arr[N][N],i,j,row_sum[N],col_sum[N];
	for(i=0;i<N;i++){
		printf("Enter row %d: ",i+1);
		for(j=0;j<N;j++){
			scanf("%d",&arr[i][j]);
		}
	}

	for(i=0;i<N;i++){
		int rowSum=0,colSum=0;
		for(j=0;j<N;j++){
			rowSum+=arr[i][j];
			colSum+=arr[j][i];
		}
		row_sum[i]=rowSum;
		col_sum[i]=colSum;
	}

	printf("Row totals:  ");
	for(i=0;i<N;i++){
		printf("%d ",row_sum[i]);
	}

	printf("\nColumn totals:  ");
	for(i=0;i<N;i++){
		printf("%d ",col_sum[i]);
	}

	return 0;
}
