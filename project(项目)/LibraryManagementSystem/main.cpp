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
	cout << "��Ҫע����鱾����\n";
	cin >> num;
	if (num == 0)
	{
		cout << "ͼ��¼��ʧ�ܣ�";
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
	cout << "��������ţ���������������������\n";
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
	cout << "ͼ��¼��ɹ���\n";
	return;
}

void check()
{
	Book *p = head;
	if (length == 0)
	{
		cout << "�����û���飡\n";
		return;
	}
	else
		cout << "���� ����    ������ ������\n";
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
	cout << "\n\n�����ɾ��ͼ����!\n";
	int Booknum, num = length;
	cin >> Booknum;
	if (length == 1 && head->bookid == Booknum)
	{
		head = NULL;
		length--;
		cout << "ͼ��ɾ���ɹ���\n";
		return;
	}
	else if (length == 1)
	{
		cout << "û�иñ��ͼ��,ɾ��ʧ�ܣ�\n";
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
		cout << "ͼ��ɾ���ɹ���\n";
	}
	else
		cout << "û�иñ��ͼ��,ɾ��ʧ�ܣ�\n";
	return;
}

void Scheck()
{
	Book *p = head;
	if (length == 0)
	{
		cout << "�����û���飡\n";
		return;
	}
	else
		cout << "���� ����    ������ ������\n";
	for (int i = 0; i < length; i++)
	{
		cout << p->bookid << "  " << p->BookName << "  " << p->Name << "  " << p->Prees << " " << (p->Lend == 0 ? "δ��" : "���") << endl;
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
	cout << "�����Ҫ�������!\n";
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
		cout << "���ĳɹ�!\n";
	else if (k == 2)
		cout << "�����ѽ��!\n";
	else
		cout << "û���Ȿ��!\n";
	return;
}

void still()
{
	int  Booknum, k = 0;
	Book *p = head;
	Scheck();
	if (head == NULL)
		return;
	cout << "�����Ҫ��������!\n";
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
		cout << "����ɹ���\n";
	else if (k == 2)
		cout << "����δ�����\n";
	else
		cout << "û���Ȿ�飡\n";
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
		cout << "|      ͼ�����ϵͳ     |\n";
		cout << "|\t1.����Ա     \t|\n|\t2.ѧ��\t\t|\n|\t3.ע��\t\t|\n|\t0.�˳�\t\t|\n";
		cout << "+-----------------------+\n\n";
		cin >> Chioce;
		if (Chioce == 1)
		{
			if (atext == "")
				cout << "����ע�ᣡ\n";
			else
			{
				while (1)
				{
					int sink = 0;
					string a, b;
					cout << "�˺�:\n";
					cin >> a;
					cout << "����:\n";
					cin >> b;
					if (a == atext&&b == apassword)
					{
						cout << "����Ա��¼�ɹ���\n";
						while (1)
						{
							int ad;
							cout << "��ѡ��Ĳ����ǣ�\n1.����ͼ��\n2.ɾ��ͼ��\n3.�鿴ͼ��\n0.�˳���¼\n";
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
								cout << "û�иò�����������ѡ��\n";
						}
					}
					else
					{
						int k;
						cout << "�˺�������������˳���0�����䰴1��\n";
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
				cout << "����ע�ᣡ\n";
			else
			{
				while (1)
				{
					int sink = 0;
					string a, b;
					cout << "�˺�:\n";
					cin >> a;
					cout << "����:\n";
					cin >> b;
					if (a == stext&&b == spassword)
					{
						cout << "ѧ����¼�ɹ���\n";
						while (1)
						{
							int std;
							cout << "��ѡ��Ĳ����ǣ�\n1.����\n2.����\n3.��������\n0.�˳���¼\n";
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
								cout << "û�иò�����������ѡ��\n";
						}
					}
					else
					{
						int k;
						cout << "�˺�������������˳���0�����䰴1��\n";
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
			cout << "�������ǣ�\n1.����Ա\n2.ѧ��\n";
			cin >> id;
			if (id == 1)
			{
				cout << "�˺ţ�";
				cin >> atext;
				cout << "\n����:";
				cin >> apassword;
				cout << endl << "����Աע��ɹ���\n";
			}
			else if (id == 2)
			{
				cout << "�˺ţ�";
				cin >> stext;
				cout << "\n����:";
				cin >> spassword;
				cout << endl << "ѧ��ע��ɹ���\n";
			}
		}
		else if (Chioce == 0)
			break;
		else
			cout << "û�иò�����������ѡ��\n";
	}
	return 0;
}