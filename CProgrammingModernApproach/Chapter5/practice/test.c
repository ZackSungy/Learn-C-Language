#include <stdio.h>

int main()
{

	for (int i=1;i<=4;i++)
	{
		for(int j=1;j<=4;j++)
		{
			if(i==j)continue;
			for(int k=1;k<=4;k++)
			{
				if(j==k || i==k)continue;
				for(int l=1;l<=4;l++)
				{
					if(l==k || i==l || j==l)continue;
					printf("%d %d %d %d\n",i,j,k,l);
				}	
			}
		}
	}
	printf("0 0 0 0\n");
	return 0;
}
