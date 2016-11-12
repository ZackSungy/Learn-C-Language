#include<stdio.h>
#include<string.h>
const int MAXN = 20;
int s[1 << MAXN];                 //最大结点个数2^MAXN-1
int main()
{
	int D, I;
	while (scanf("%d%d", &D, &I) == 2);
	{
		memset(s, 0, sizeof(s));      //switch
		int k, n = (1 << D) - 1;     //n是最大结点偏号
		for (int i = 0; i < I; i++)
		{							//连续让I个小球下落
			k = 1;
			for (;;)
			{
				s[k] = !s[k];		//根据开关选择下落方向
				printf("%d\n", s[k]);
				printf("=%d=\n", k);
				k = s[k] ? k * 2 : k * 2 + 1;
				if (k>n)
					break;			//防止小球出界（已经出界）
			}
		}
		printf("%d\n", k / 2);			//出界前编号
	}
	return 0;
}