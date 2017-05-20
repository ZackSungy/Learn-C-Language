#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
	int i;
	char s1[10], s2[10], s3[10], s4[10];
	gets(s1);
	gets(s2);
	int len1 = strlen(s1), len2 = strlen(s2);
	if (len1 == len2)
	for (i = 0; i<strlen(s2); i++)
	{
		if ('A' <= s2[i] && s2[i] <= 'Z')
			s3[i] = s2[i] + 32;
		else
			s3[i] = s2[i];
		if ('A' <= s1[i] && s1[i] <= 'Z')
			s4[i] = s1[i] + 32;
		else
			s4[i] = s1[i];
	}
	s3[i] = '\0';
	s4[i] = '\0';

	if (len1 != len2)
		printf("1");
	else if (!strcmp(s1, s2))
		printf("2");
	else if (!strcmp(s4, s3))
		printf("3");
	else
		printf("4");
	return 0;
}