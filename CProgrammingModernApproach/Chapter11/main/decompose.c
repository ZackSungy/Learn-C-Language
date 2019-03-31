#include <stdio.h>

void decompose(double x,long *int_part,double *frac_part);

int main()
{
	long x;
	double y;
	decompose(3.14159,&x,&y);

	printf("x=%ld,y=%f\n",x,y);
	return 0;
}

void decompose(double x,long *i_part,double *f_part)
{
	*i_part=x;
	*f_part=x-*i_part;
}
