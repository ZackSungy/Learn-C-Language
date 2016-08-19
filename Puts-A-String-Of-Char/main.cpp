#include<stdio.h>
#include<string.h>
int main()
{
	char str1[] = "ÎÒ°®ÖĞ¹ú";
	/*char str2[] = "ilovechina";
	int n, m;
	n = strlen(str1);
	m = strlen(str2);
	printf("%20d\n,%20d", n, m);*/
	char *str2 = &str1[4];
	puts(str2);
	str2 = str1;
	str2[4] = '\0';
	puts(str2);
	return 0;
}