#include<iostream>
#include<string>
using namespace std;

typedef struct Book
{
	int bookid;
	int Lend = 0;
	string Name;
	string Prees;
	string BookName;
	Book *next;
};

Book *head = NULL;
int length = 0;

void Creat()
{
	int num, j = 0;
	cout << "你要注册的书本数：\n";
	cin >> num;
	if (num == 0)
	{
		cout << "图书录入失败！";
		return;
	}
	Book *node, *p;
	p = new Book;
	p = head;
	while (head != NULL&&p->next != head)
	{
		p = p->next;
		j++;
	}
	cout << "请输出书编号，书名，作者名，出版社\n";
	for (int i = 0; i < num; i++)
	{
		node = new Book;
		cin >> node->bookid >> node->BookName >> node->Name >> node->Prees;
		if (head == NULL)
			head = node;
		else
			p->next = node;
		p = node;
		length++;
	}
	p->next = head;
	cout << "图书录入成功！\n";
	return;
}

void check()
{
	Book *p = head;
	if (length == 0)
	{
		cout << "书库里没有书！\n";
		return;
	}
	else
		cout << "书编号 书名    作者名 出版社\n";
	for (int i = 0; i < length; i++)
	{
		cout << p->bookid << "  " << p->BookName << "  " << p->Name << "  " << p->Prees << endl;
		p = p->next;
	}
	return;
}

void Delete()
{
	check();
	if (head == NULL)
		return;
	cout << "\n\n请输出删除图书编号!\n";
	int Booknum, num = length;
	cin >> Booknum;
	if (length == 1 && head->bookid == Booknum)
	{
		head = NULL;
		length--;
		cout << "图书删除成功！\n";
		return;
	}
	else if (length == 1)
	{
		cout << "没有该编号图书,删除失败！\n";
		return;
	}
	Book *p;
	p = new Book;
	p = head;
	for (int i = 0; i < length; i++)
	{
		if (p->bookid == Booknum&&p == head)
		{
			head = p->next;
			p = head;
			length--;
		}
		else if (p->next->bookid == Booknum&&p->next->next == head)
		{
			p->next = head;
			length--;
		}
		else if (p->next->bookid == Booknum)
		{
			p->next = p->next->next;
			length--;
		}
		else
			p = p->next;
	}
	if (num != length)
	{
		p->next = head;
		cout << "图书删除成功！\n";
	}
	else
		cout << "没有该编号图书,删除失败！\n";
	return;
}

void Scheck()
{
	Book *p = head;
	if (length == 0)
	{
		cout << "书库里没有书！\n";
		return;
	}
	else
		cout << "书编号 书名    作者名 出版社\n";
	for (int i = 0; i < length; i++)
	{
		cout << p->bookid << "  " << p->BookName << "  " << p->Name << "  " << p->Prees << " " << (p->Lend == 0 ? "未借" : "借出") << endl;
		p = p->next;
	}
	return;
}

void Borrow()
{
	int Booknum, k = 0;
	Book *p = head;
	Scheck();
	if (head == NULL)
		return;
	cout << "输出你要借的书编号!\n";
	cin >> Booknum;
	for (int i = 0; i < length; i++)
	{
		if (p->bookid == Booknum&&p->Lend == 0)
		{
			p->Lend = 1;
			k = 1;
			break;
		}
		else if (p->bookid == Booknum&&p->Lend == 1)
		{
			k = 2;
			break;
		}
		p = p->next;
	}
	if (k == 1)
		cout << "借阅成功!\n";
	else if (k == 2)
		cout << "该书已借出!\n";
	else
		cout << "没有这本书!\n";
	return;
}

void still()
{
	int  Booknum, k = 0;
	Book *p = head;
	Scheck();
	if (head == NULL)
		return;
	cout << "输出你要还的书编号!\n";
	cin >> Booknum;
	for (int i = 0; i < length; i++)
	{
		if (p->bookid == Booknum&&p->Lend == 1)
		{
			p->Lend = 0;
			k = 1;
			break;
		}
		else if (p->bookid == Booknum&&p->Lend == 0)
		{
			k = 2;
			break;
		}
		p = p->next;
	}
	if (k == 1)
		cout << "还书成功！\n";
	else if (k == 2)
		cout << "该书未借出！\n";
	else
		cout << "没有这本书！\n";
	return;
}

int main()
{
	char Code;
	int Chioce;
	string atext = "", apassword = "", stext = "", spassword = "";
	while (1)
	{
		cout << "+-----------------------+\n";
		cout << "|      图书管理系统     |\n";
		cout << "|\t1.管理员     \t|\n|\t2.学生\t\t|\n|\t3.注册\t\t|\n|\t0.退出\t\t|\n";
		cout << "+-----------------------+\n\n";
		cin >> Chioce;
		if (Chioce == 1)
		{
			if (atext == "")
				cout << "请先注册！\n";
			else
			{
				while (1)
				{
					int sink = 0;
					string a, b;
					cout << "账号:\n";
					cin >> a;
					cout << "密码:\n";
					cin >> b;
					if (a == atext&&b == apassword)
					{
						cout << "管理员登录成功！\n";
						while (1)
						{
							int ad;
							cout << "你选择的操作是：\n1.增加图书\n2.删除图书\n3.查看图书\n0.退出登录\n";
							cin >> ad;
							if (ad == 1)
								Creat();
							else if (ad == 2)
								Delete();
							else if (ad == 3)
								check();
							else if (ad == 0)
							{
								sink = 1;
								break;
							}
							else
								cout << "没有该操作，请重新选择。\n";
						}
					}
					else
					{
						int k;
						cout << "账号密码输出错误！退出按0，重输按1！\n";
						cin >> k;
						if (k == 0)
							break;
					}
					if (sink == 1)
						break;
				}
			}
		}
		else if (Chioce == 2)
		{
			if (stext == "")
				cout << "请先注册！\n";
			else
			{
				while (1)
				{
					int sink = 0;
					string a, b;
					cout << "账号:\n";
					cin >> a;
					cout << "密码:\n";
					cin >> b;
					if (a == stext&&b == spassword)
					{
						cout << "学生登录成功！\n";
						while (1)
						{
							int std;
							cout << "你选择的操作是：\n1.借书\n2.还书\n3.个人资料\n0.退出登录\n";
							cin >> std;
							if (std == 1)
								Borrow();
							else if (std == 2)
								still();
							else if (std == 3)
								Scheck();
							else if (std == 0)
							{
								sink = 1;
								break;
							}
							else
								cout << "没有该操作，请重新选择。\n";
						}
					}
					else
					{
						int k;
						cout << "账号密码输出错误！退出按0，重输按1！\n";
						cin >> k;
						if (k == 0)
							break;
					}
					if (sink == 1)
						break;
				}
			}
		}
		else if (Chioce == 3)
		{
			int id;
			cout << "你的身份是：\n1.管理员\n2.学生\n";
			cin >> id;
			if (id == 1)
			{
				cout << "账号：";
				cin >> atext;
				cout << "\n密码:";
				cin >> apassword;
				cout << endl << "管理员注册成功！\n";
			}
			else if (id == 2)
			{
				cout << "账号：";
				cin >> stext;
				cout << "\n密码:";
				cin >> spassword;
				cout << endl << "学生注册成功！\n";
			}
		}
		else if (Chioce == 0)
			break;
		else
			cout << "没有该操作，请重新选择。\n";
	}
	return 0;
}