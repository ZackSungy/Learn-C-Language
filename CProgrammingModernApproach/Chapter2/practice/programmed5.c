#include <stdio.h>

int main()
{
	int x,array[]={3,2,5,1,7,6},ans=0;
	char sign[]={'+','+','-','-','+','-'};
	
	scanf("%d",&x);
	
	for(int i=0;i<=5;i++)
	{
		int s=1;
		for(int j=5-i;j>0;j--)
			s*=x;
		
		if(sign[i]=='+')
			ans+=array[i]*s;
		else	
			ans-=array[i]*s;
	}
	printf("%d\n",ans);
	return 0;
}
