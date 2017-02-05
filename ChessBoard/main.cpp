#include<stdio.h>

int board[1000][1000], tile = 1;

void Chess_Board(int dr, int dc, int x, int y, int size)
{
	if (size == 1)
		return;
	int s = size / 2;
	int t = tile++;
	if (dr + s > x&&dc + s > y)//左上
		Chess_Board(dr, dc, x, y, s);
	else
	{
		board[dr + s - 1][dc + s - 1] = t;
		Chess_Board(dr, dc, dr + s - 1, dc + s - 1, s);//dr和dc作为开头的行和列
	}
	if (dr + s > x&&dc + s <= y)//右上
		Chess_Board(dr, dc + s, x, y, s);
	else
	{
		board[dr + s - 1][dc + s] = t;
		Chess_Board(dr, dc + s, dr + s - 1, dc + s, s);
	}
	if (dr + s <= x&&dc + s > y)//左下
		Chess_Board(dr + s, dc, x, y, s);
	else
	{
		board[dr + s][dc + s - 1] = t;
		Chess_Board(dr + s, dc, dr + s, dc + s - 1, s);
	}
	if (dr + s <= x&&dc + s <= y)//右下
		Chess_Board(dr + s, dc + s, x, y, s);
	else
	{
		board[dr + s][dc + s] = t;
		Chess_Board(dr + s, dc + s, dr + s, dc + s, s);
	}
}

int main()
{
	int k, size, x, y;
	scanf("%d", &k);
	size = 1 << k;
	scanf("%d%d", &x, &y);
	Chess_Board(0, 0, x, y, size);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			printf("%3d ", board[i][j]);
		printf("\n");
	}
	return 0;
}