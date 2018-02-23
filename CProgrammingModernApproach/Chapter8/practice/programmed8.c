#include <stdio.h>
#define N 5

int main()
{
	int i,j;
	double arr[N][N],row_sum[N],max[N],min[N];
	for(i=0;i<N;i++){
		printf("The  %d Student is: ",i+1);
		for(j=0;j<N;j++){
			scanf("%lf",&arr[i][j]);
		}
	}

	for(i=0;i<N;i++){
		double rowSum=0;
		max[i]=arr[i][0];
		min[i]=arr[i][0];
		for(j=0;j<N;j++){
			rowSum+=arr[i][j];
			if(max[i]<arr[i][j]){
				max[i]=arr[i][j];
			}
			if(min[i]>arr[i][j]){
				min[i]=arr[i][j];
			}
		}
		row_sum[i]=rowSum;
	}

	printf("Student sum is:  ");
	for(i=0;i<N;i++){
		printf("%lf ",row_sum[i]);
	}

	printf("\nStudent avg is::  ");
	for(i=0;i<N;i++){
		printf("%lf ",row_sum[i]/N);
	}

	printf("\nStudent heighest score is:");
	for(i=0;i<N;i++){
		printf("%lf ",max[i]);
	}
	
	printf("\nStudent lowest score is:");
	for(i=0;i<N;i++){
		printf("%lf ",min[i]);
	}

	printf("\n");
	return 0;
}
