#include<stdio.h>
struct stu
{
	int num;
	char *name;
	char sex;
	float score;
};
typedef struct stu student;
void output_student(student *s1)
{
	printf("%-6d%-10s%c     %.lf\n", s1->num, s1->name, s1->sex, s1->score);
}
float ave(student *ps)
{
	int i;
	float ave, s = 0;
	for (i = 0; i < 5; i++)
	{
		s += ps->score;
	}
	ave = s / 5;
	return ave;
}
int main()
{
	student *ps;
	int i;
	void output_student(student *s1);
	float ave(struct stu *ps);
	student group[5] = {
		{ 101, "����", 'F', 88 },
		{ 102, "����", 'F', 73.5 },
		{ 103, "����", 'M', 92.5 },
		{ 104, "����", 'F', 87 },
		{ 105, "���", 'M', 92 },
	};
	printf("ѧ��  ����    �Ա�   �ɼ�\n");
	for (i = 0; i < 5; i++)
	{
		output_student(&group[i]);
	}
	ps = group;
	printf("����                  %.lf\n", ave(ps));

}