#include<stdio.h>
#include<string.h>
struct student
{
	int num;
	int math, c, eng;
	float ave;
};
int main()
{
	struct student stu[5] = { { 1, 80, 65, 88 }, { 2, 74, 92, 50 }, { 3, 66, 50, 98 }, { 4, 72, 78, 80 }, { 5, 84, 92, 93 } };
	struct student temp, *pstu1, *pstu2, *pmax;
	for (pstu1 = stu; pstu1 < stu + 5; pstu1++)
		pstu1->ave = (float)(pstu1->math + pstu1->c + pstu1->eng) / 3;
	printf("排序前：\n");
	printf("学号  数学  c语言  英语  平均分\n");
	for (pstu1 = stu; pstu1 < stu + 5; pstu1++)
		printf("%-6d%-6d,%-6d,%-6d,%-6f\n", pstu1->num, pstu1->math, pstu1->c, pstu1->eng, pstu1->ave);
	for (pstu1 = stu; pstu1 < stu + 5; pstu1++)
	{
		pmax = pstu1;
		for (pstu2 = pstu1 + 1; pstu2 < stu + 5; pstu2++)
		if (pmax->ave < pstu2->ave)
			pmax = pstu2;
		if (pmax != pstu1)
		{
			temp = *pmax;
			*pmax = *pstu1;
			*pstu1 = temp;
		}
	}
	printf("排序后：\n");
	printf("学号  数学  c语言  英语  平均分\n");
	for (pstu1 = stu; pstu1 < stu + 5; pstu1++)
		printf("%-6d%-6d,%-6d,%-6d,%-6f\n", pstu1->num, pstu1->math, pstu1->c, pstu1->eng, pstu1->ave);
	return 0;
}