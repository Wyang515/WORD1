//ͷ�ļ�˵����
//����ȫ�ֱ�����
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
struct material
{
	string name;
	int price;
	int in;
	int ivt;
	int out;
	string who;
	int itime[3];
	int otime[3];
	string ps;
}stu[1000];
struct list
{
	int data;
	list *next;
}*New,*head=NULL,*fin;
//���塢��д���뺯����
void input()
{
	cout << "��������ϱ��";
	int i;
	freopen("1.txt","r",stdin);
	freopen("2.txt","w",stdout);
	scanf("%d",&i);
	if (head == NULL)
	{
		New = (list*)malloc(sizeof(list));
		New->data = i;
		head = fin = New;
		fin->next = NULL;
	}
	else
	{
		New = (list*)malloc(sizeof(list));
		New->data = i;
		fin->next = New;
		fin = New;
		fin->next = NULL;
	}
	cout << "������������ơ��۸�";
	cin >> stu[i].name >> stu[i].price;
	cout << "�����������������������������������";
	cin >> stu[i].in >> stu[i].ivt >> stu[i].out;
	cout << "��������ϱ�����";
	cin >> stu[i].who;
	cout << "��������Ͻ���ʱ�䣬��ʽΪ�� �� ��";
	cin >> stu[i].itime[0] >> stu[i].itime[1] >> stu[i].itime[2];
	cout << "��������ϳ���ʱ�䣬��ʽΪ�� �� ��";
	cin >> stu[i].otime[0] >> stu[i].otime[1] >> stu[i].otime[2];
	cout << "�����뱸ע";
	cin >> stu[i].ps;
	system("pause");
}
//���塢��д��ʾ������
void display()
{
	list *p = head;
	while (p != NULL)
	{
		int x = p->data;
		cout <<"���룺"<< x << " " <<"���ƣ�"<<stu[x].name << " " <<"�۸�"<< stu[x].price << endl;
		cout << "���������"<<stu[x].in << " " <<"���������"<< stu[x].ivt << " " <<"����������"<< stu[x].out << endl;
		cout << "�����ˣ�"<<stu[x].who << endl;
		cout << "���ʱ�䣺"<<stu[x].itime[0] << " " << stu[x].itime[1] << " " << stu[x].itime[2] << endl;
		cout << "����ʱ�䣺"<<stu[x].otime[0] << " " << stu[x].otime[1] << " " << stu[x].otime[2] << endl;
		cout << "��ע��"<<stu[x].ps<<endl;
		p = p->next;
	}
	system("pause");
}
//���塢��д�޸ĺ�����
void modify()
{
	int x;
	char s;
	cout << "��������Ҫ�޸ĵĲ��ϱ��";
	cin >> x;
	cout << "��������Ҫ�޸ĵĲ������ݴ��룬��1��Ϊ���ƣ���2��Ϊ�۸񣬡�3��Ϊ����";
	cin >> s;
	if (s >'3')
	{
		cout << "�������"; return;
	}
	else
	{ 
		switch (s)
		{
		case'1':cin >> stu[x].name;
			cout << "�޸ĳɹ�"; return;
		case'2':cin >> stu[x].price;
			cout << "�޸ĳɹ�"; return;
		case'3':cout << "��������Ҫ�޸ĵĲ������ݴ��룬��1��Ϊ�����������2��Ϊ�����������3��Ϊ������������4��Ϊ����";
			cin >> s;
			if (s >'4')
			{
				cout << "�������"; return;
				
			}
			else switch (s)
			{
			case'1':cin >> stu[x].in;
				cout << "�޸ĳɹ�"; return;
			case'2':cin >> stu[x].ivt;
				cout << "�޸ĳɹ�"; return;
			case'3':cin >> stu[x].out;
				cout << "�޸ĳɹ�"; return;
			case'4':cout << "��������Ҫ�޸ĵĲ������ݴ��룬��1��Ϊ���ϱ����ˣ���2������";
				cin >> s;
				if (s > '2')
				{
					cout << "�������"; return;
					
				}

				else switch (s)
				{
				case'1':cin >> stu[x].who;
					cout << "�޸ĳɹ�"; return;
				case'2':cout << "��������Ҫ�޸ĵĲ������ݴ��룬��1��Ϊ����ʱ�䣬��2��Ϊ����ʱ�䣬��3��Ϊ��ע";
					cin >> s;
					if (s > '3')
					{
						cout << "�������"; return;
						
					}
					else switch (s)
					{
					case'1':cin >> stu[x].itime[0] >> stu[x].itime[1] >> stu[x].itime[2];
						cout << "�޸ĳɹ�"; return;
					case'2':cin >> stu[x].otime[0] >> stu[x].otime[1] >> stu[x].otime[2];
						cout << "�޸ĳɹ�"; return;
					case'3':cin >> stu[x].ps;
						cout << "�޸ĳɹ�"; return;
					}
				}
			}
		}
				
	}
	system("pause");
	
	
}
//���塢��д���Һ�����
void find()
{
	cout << "��������Ҫ���ҵĲ��ϱ��";
	int x;
	cin >> x;
	cout << "�����ҵĲ������ֺͼ۸�Ϊ"<<stu[x].name << " " << stu[x].price <<endl;
	cout << "�����ҵĲ��������������������ͳ�������Ϊ"<<stu[x].in << " " << stu[x].ivt << " " << stu[x].out << endl;
	cout << "�����ҵĲ��Ϲ�����Ϊ"<<stu[x].who << endl;
	cout << "�����ҵĲ������ʱ��Ϊ"<<stu[x].itime[0]<<"��"  << stu[x].itime[1] << "��" << stu[x].itime[2] << "��"<<endl;
	cout << "�����ҵĲ��ϳ���ʱ��Ϊ"<<stu[x].otime[0] <<"��" << stu[x].otime[1] << "��" << stu[x].otime[2] << "��"<<endl;
	cout << "��ע"<<stu[x].ps;
	system("pause");
}

//���塢��д��Ӻ�����
void add()
{
	cout << "��������ϱ��";
	int i;
	cin >> i;
	if (head == NULL)
	{
		New = (list*)malloc(sizeof(list));
		New->data = i;
		head = fin = New;
		fin->next = NULL;
	}
	else
	{
		New = (list*)malloc(sizeof(list));
		New->data = i;
		fin->next = New;
		fin = New;
		fin->next = NULL;
	}
	cout << "������������ơ��۸�";
	cin >> stu[i].name >> stu[i].price;
	cout << "�����������������������������������";
	cin >> stu[i].in >> stu[i].ivt >> stu[i].out;
	cout << "��������ϱ�����";
	cin >> stu[i].who;
	cout << "��������Ͻ���ʱ�䣬��ʽΪ�� �� ��";
	cin >> stu[i].itime[0] >> stu[i].itime[1] >> stu[i].itime[2];
	cout << "��������ϳ���ʱ�䣬��ʽΪ�� �� ��";
	cin >> stu[i].otime[0] >> stu[i].otime[1] >> stu[i].otime[2];
	cout << "�����뱸ע";
	cin >> stu[i].ps;
	system("pause");
}
//�������ṹ���£�
int main()
{
	char i;
	for (;;)     //ѭ��ִ�й��ܲ˵�
	{
	system("cls") ;  //����Ļ
	printf("* * * * * * *Menue* * * * * *\n");
	printf("*          a. Input         *\n");
	printf("*          b. Display       *\n");
	printf("*          c. Modify        *\n");
	printf("*          d. Find          *\n");
	printf("*          e. Add           *\n");
	printf("*          f. Exit          *\n");
	printf("*    Please select a to f   *\n");
	printf("* * * * * * * * * * * * * * *\n");
	i = getchar();
	if (i == 'f') break;
	else switch (i)
	{
	case 'a': input();/*�������뺯��*/ break;
	case 'b': display();/*������ʾ����*/ break;
	case 'c': modify();/*�����޸ĺ���*/ break;
	case 'd': find();/*���ò��Һ���*/ break;
	case 'e': add();/*������Ӻ���*/ break;
	}
	}
}
