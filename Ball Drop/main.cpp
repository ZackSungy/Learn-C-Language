#include<stdio.h>
#include<string.h>
const int MAXN = 20;
int s[1 << MAXN];                 //��������2^MAXN-1
int main()
{
	int D, I;
	while (scanf("%d%d", &D, &I) == 2);
	{
		memset(s, 0, sizeof(s));      //switch
		int k, n = (1 << D) - 1;     //n�������ƫ��
		for (int i = 0; i < I; i++)
		{							//������I��С������
			k = 1;
			for (;;)
			{
				s[k] = !s[k];		//���ݿ���ѡ�����䷽��
				printf("%d\n", s[k]);
				printf("=%d=\n", k);
				k = s[k] ? k * 2 : k * 2 + 1;
				if (k>n)
					break;			//��ֹС����磨�Ѿ����磩
			}
		}
		printf("%d\n", k / 2);			//����ǰ���
	}
	return 0;
}