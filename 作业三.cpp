//头文件说明；
//定义全局变量；
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
//定义、编写输入函数；
void input()
{
	cout << "请输入材料编号";
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
	cout << "请输入材料名称、价格";
	cin >> stu[i].name >> stu[i].price;
	cout << "请输入材料入库数量、库存数量、出库数量";
	cin >> stu[i].in >> stu[i].ivt >> stu[i].out;
	cout << "请输入材料保管人";
	cin >> stu[i].who;
	cout << "请输入材料进货时间，格式为年 月 日";
	cin >> stu[i].itime[0] >> stu[i].itime[1] >> stu[i].itime[2];
	cout << "请输入材料出货时间，格式为年 月 日";
	cin >> stu[i].otime[0] >> stu[i].otime[1] >> stu[i].otime[2];
	cout << "请输入备注";
	cin >> stu[i].ps;
	system("pause");
}
//定义、编写显示函数；
void display()
{
	list *p = head;
	while (p != NULL)
	{
		int x = p->data;
		cout <<"编码："<< x << " " <<"名称："<<stu[x].name << " " <<"价格："<< stu[x].price << endl;
		cout << "入库数量："<<stu[x].in << " " <<"库存数量："<< stu[x].ivt << " " <<"出库数量："<< stu[x].out << endl;
		cout << "保管人："<<stu[x].who << endl;
		cout << "入库时间："<<stu[x].itime[0] << " " << stu[x].itime[1] << " " << stu[x].itime[2] << endl;
		cout << "出库时间："<<stu[x].otime[0] << " " << stu[x].otime[1] << " " << stu[x].otime[2] << endl;
		cout << "备注："<<stu[x].ps<<endl;
		p = p->next;
	}
	system("pause");
}
//定义、编写修改函数；
void modify()
{
	int x;
	char s;
	cout << "请输入需要修改的材料编号";
	cin >> x;
	cout << "请输入需要修改的材料数据代码，“1”为名称，“2”为价格，“3”为其他";
	cin >> s;
	if (s >'3')
	{
		cout << "输入错误"; return;
	}
	else
	{ 
		switch (s)
		{
		case'1':cin >> stu[x].name;
			cout << "修改成功"; return;
		case'2':cin >> stu[x].price;
			cout << "修改成功"; return;
		case'3':cout << "请输入需要修改的材料数据代码，“1”为入库数量，“2”为库存数量，“3”为出库数量，“4”为其他";
			cin >> s;
			if (s >'4')
			{
				cout << "输入错误"; return;
				
			}
			else switch (s)
			{
			case'1':cin >> stu[x].in;
				cout << "修改成功"; return;
			case'2':cin >> stu[x].ivt;
				cout << "修改成功"; return;
			case'3':cin >> stu[x].out;
				cout << "修改成功"; return;
			case'4':cout << "请输入需要修改的材料数据代码，“1”为材料保管人，“2”其他";
				cin >> s;
				if (s > '2')
				{
					cout << "输入错误"; return;
					
				}

				else switch (s)
				{
				case'1':cin >> stu[x].who;
					cout << "修改成功"; return;
				case'2':cout << "请输入需要修改的材料数据代码，“1”为进货时间，“2”为出货时间，“3”为备注";
					cin >> s;
					if (s > '3')
					{
						cout << "输入错误"; return;
						
					}
					else switch (s)
					{
					case'1':cin >> stu[x].itime[0] >> stu[x].itime[1] >> stu[x].itime[2];
						cout << "修改成功"; return;
					case'2':cin >> stu[x].otime[0] >> stu[x].otime[1] >> stu[x].otime[2];
						cout << "修改成功"; return;
					case'3':cin >> stu[x].ps;
						cout << "修改成功"; return;
					}
				}
			}
		}
				
	}
	system("pause");
	
	
}
//定义、编写查找函数；
void find()
{
	cout << "请输入需要查找的材料编号";
	int x;
	cin >> x;
	cout << "待查找的材料名字和价格为"<<stu[x].name << " " << stu[x].price <<endl;
	cout << "待查找的材料入库数量、库存数量和出库数量为"<<stu[x].in << " " << stu[x].ivt << " " << stu[x].out << endl;
	cout << "待查找的材料管理人为"<<stu[x].who << endl;
	cout << "待查找的材料入库时间为"<<stu[x].itime[0]<<"年"  << stu[x].itime[1] << "月" << stu[x].itime[2] << "日"<<endl;
	cout << "待查找的材料出库时间为"<<stu[x].otime[0] <<"年" << stu[x].otime[1] << "月" << stu[x].otime[2] << "日"<<endl;
	cout << "备注"<<stu[x].ps;
	system("pause");
}

//定义、编写添加函数；
void add()
{
	cout << "请输入材料编号";
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
	cout << "请输入材料名称、价格";
	cin >> stu[i].name >> stu[i].price;
	cout << "请输入材料入库数量、库存数量、出库数量";
	cin >> stu[i].in >> stu[i].ivt >> stu[i].out;
	cout << "请输入材料保管人";
	cin >> stu[i].who;
	cout << "请输入材料进货时间，格式为年 月 日";
	cin >> stu[i].itime[0] >> stu[i].itime[1] >> stu[i].itime[2];
	cout << "请输入材料出货时间，格式为年 月 日";
	cin >> stu[i].otime[0] >> stu[i].otime[1] >> stu[i].otime[2];
	cout << "请输入备注";
	cin >> stu[i].ps;
	system("pause");
}
//主函数结构如下：
int main()
{
	char i;
	for (;;)     //循环执行功能菜单
	{
	system("cls") ;  //清屏幕
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
	case 'a': input();/*调用输入函数*/ break;
	case 'b': display();/*调用显示函数*/ break;
	case 'c': modify();/*调用修改函数*/ break;
	case 'd': find();/*调用查找函数*/ break;
	case 'e': add();/*调用添加函数*/ break;
	}
	}
}
