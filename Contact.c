//#define  _CRT_SECURE_NO_WARNINGS 0
//#include<stdio.h>
//#include<windows.h>
//#include<assert.h>
//#include<stdlib.h>
//#define FUN 5//有多少种排序方式
//#define DEFAULT_SZ 3//默认初始大小
//#define DEFAULT_ADD 5//默认增加
//#pragma warning (disable:6031)
//enum INPUT
//{
//	EXIT,
//	ADD,
//	DEL,
//	SEARCH,
//	MODIFY,
//	SHOW,
//	SORT
//};
//typedef struct PeoInfo
//{
//	char name[10];
//	char sex[5];
//	char num[20];
//	char addres[25];
//	int age;
//}PeoInfo;
//typedef struct Contact
//{
//	PeoInfo* data;
//	int sz;
//	int capacity;
//}Contact;
//
//int Check_Capacity(Contact* p)
//{
//	assert(p);
//	if (p->capacity == p->sz)
//	{
//		PeoInfo* ptr = (PeoInfo*)realloc(p->data, sizeof(PeoInfo) * (p->capacity + DEFAULT_ADD));
//		if (!ptr)
//		{
//			perror("AddContact");
//			return 0;
//		}
//		else
//		{
//			p->data = ptr;
//			p->capacity += DEFAULT_ADD;
//		}
//
//	}
//	return 1;
//}
//void InitContact(Contact* p)
//{
//	assert(p);
//	p->capacity = DEFAULT_SZ;
//	p->sz = 0;
//	PeoInfo* ptr = (PeoInfo*)malloc(sizeof(PeoInfo) * p->capacity);
//	if (!ptr)
//	{
//		perror("InitContact");
//		return;
//	}
//	p->data = ptr;
//	FILE* pf = fopen("Contact.txt","r");
//	if (!pf)
//	{
//		perror("fopen");
//		return;
//	}
//	PeoInfo tmp = { 0 };
//	while (fread(&tmp,sizeof(PeoInfo),1,pf)==1)
//	{
//		Check_Capacity(p);
//		p->data[p->sz].age = tmp.age;
//		strcpy(p->data[p->sz].addres, tmp.addres);
//		strcpy(p->data[p->sz].name, tmp.name);
//		strcpy(p->data[p->sz].sex, tmp.sex);
//		strcpy(p->data[p->sz].num,tmp.num);
//		p->sz++;
//	}
//	fclose(pf);
//	pf = NULL;
//}
//void AddContact(Contact* p)
//{
//	assert(p);
//	if (!Check_Capacity(p))
//	{
//		perror("AddContact");
//		return;
//	}
//	printf("请输入名字:");
//	scanf("%s", p->data[p->sz].name);
//	printf("请输入年龄:");
//	scanf("%d", &(p->data[p->sz].age));
//	printf("请输入性别:");
//	scanf("%s", p->data[p->sz].sex);
//	printf("请输入电话:");
//	scanf("%s", p->data[p->sz].num);
//	printf("请输入住址:");
//	scanf("%s", p->data[p->sz].addres);
//	p->sz++;
//}
//void ShowContact(const Contact* p)
//{
//	assert(p);
//	if (p->sz == 0)
//	{
//		printf("NULL\n");
//		return;
//	}
//	printf("%-10s\t%-10s\t%-5s\t%-20s\t%-25s\t\n", "姓名", "性别", "年龄", "号码", "住址");
//	for (int i = 0; i < p->sz; i++)
//	{
//		printf("%-10s\t%-10s\t%-5d\t%-20s\t%-25s\t\n", p->data[i].name, p->data[i].sex, p->data[i].age, p->data[i].num, p->data[i].addres);
//	}
//}
//int Find_People(Contact* p, char* name)
//{
//	assert(p && name);
//	int i = 0;
//	for (i = 0; i < p->sz; i++)
//	{
//		if (strcmp(p->data[i].name, name) == 0)
//			return i;
//	}
//	return -1;
//}
//void DelContact(Contact* p)
//{
//	assert(p);
//	assert(p->sz);
//	char name[20];
//	printf("请输入你要删除的人的名字:");
//	scanf("%s", name);
//	int ret = Find_People(p, name);
//	if (ret == -1)
//	{
//		printf("被删除人不存在\n");
//		return;
//	}
//
//	for (int i = ret; i < p->sz - 1; i++)
//	{
//		p->data[i] = p->data[i + 1];
//	}
//	p->sz--;
//	printf("删除成功\n");
//}
//void SearchContact(Contact* p)
//{
//	assert(p);
//	assert(p->sz);
//	char name[20];
//	printf("请输入你要查找的人的名字:");
//	scanf("%s", name);
//	name[19] = '\0';
//	int i = 0;
//	for (i = 0; i < p->sz; i++)
//	{
//		if (strcmp(p->data[i].name, name) == 0)
//		{
//			printf("%-10s\t%-10s\t%-5s\t%-20s\t%-25s\t\n", "姓名", "性别", "年龄", "号码", "住址");
//			printf("%-10s\t%-10s\t%-5d\t%-20s\t%-25s\t\n", \
//				p->data[i].name, 
//				p->data[i].sex, \
//				p->data[i].age,\
//				p->data[i].num, \
//				p->data[i].addres);
//			return;
//		}
//	}
//	printf("被查找人不存在\n");
//}
//void ModifyContact(Contact* p)
//{
//	assert(p);
//	assert(p->sz);
//	char name[20];
//	printf("请输入你要修改的人的名字:");
//	scanf("%s", name);
//	int ret = Find_People(p, name);
//	if (ret == -1)
//	{
//		printf("被修改人不存在\n");
//		return;
//	}
//	printf("请输入名字:");
//	scanf("%s", p->data[ret].name);
//	printf("请输入年龄:");
//	scanf("%d", &(p->data[ret].age));
//	printf("请输入性别:");
//	scanf("%s", p->data[ret].sex);
//	printf("请输入电话:");
//	scanf("%s", p->data[ret].num);
//	printf("请输入住址:");
//	scanf("%s", p->data[ret].addres);
//
//}
//int cmpByname(const void* p1, const void* p2)
//{
//	PeoInfo* ptr1 = (PeoInfo*)p1;
//	PeoInfo* ptr2 = (PeoInfo*)p2;
//	return strcmp(ptr1->name, ptr2->name);
//}
//int cmpBysex(const void* p1, const void* p2)
//{
//	PeoInfo* ptr1 = (PeoInfo*)p1;
//	PeoInfo* ptr2 = (PeoInfo*)p2;
//	return strcmp(ptr1->sex, ptr2->sex);
//}
//int cmpBynum(const void* p1, const void* p2)
//{
//	PeoInfo* ptr1 = (PeoInfo*)p1;
//	PeoInfo* ptr2 = (PeoInfo*)p2;
//	return strcmp(ptr1->num, ptr2->num);
//}
//int cmpByaddres(const void* p1, const void* p2)
//{
//	PeoInfo* ptr1 = (PeoInfo*)p1;
//	PeoInfo* ptr2 = (PeoInfo*)p2;
//	return strcmp(ptr1->addres, ptr2->addres);
//}
//int cmpByage(const void* p1, const void* p2)
//{
//	PeoInfo* ptr1 = (PeoInfo*)p1;
//	PeoInfo* ptr2 = (PeoInfo*)p2;
//	return ptr1->age - ptr2->age;
//}
//void SortContact(Contact* p)
//{
//	assert(p);
//	assert(p->sz);
//	int input = 0;
//	int (*CMP[FUN])(const void*, const void*) = { cmpByname,cmpBysex,cmpBynum,cmpByaddres,cmpByage };
//	do
//	{
//		system("cls");
//		printf("*****************\n");
//		printf("+-0、按名字排序-+\n");
//		printf("+-1、按性别排序-+\n");
//		printf("+-2、按号码排序-+\n");
//		printf("+-3、按住址排序-+\n");
//		printf("+-4、按年龄排序-+\n");
//		printf("*****************\n");
//		printf("请选择:");
//		scanf("%d", &input);
//		if (input >= FUN || input < 0)
//		{
//			printf("选择错误\n");
//			printf("排序失败\n");
//			system("pause");
//		}
//	} while (input >= FUN || input < 0);
//	qsort(p->data, p->sz, sizeof(PeoInfo), CMP[input]);
//	ShowContact(p);
//}
//void DestoryContact(Contact* p)
//{
//	assert(p);
//	FILE* pf = fopen("Contact.txt","w");
//	if (!pf)
//	{
//		perror("fopen");
//		return;
//	}
//	for (int i = 0; i < p->sz; i++)
//	{
//		fwrite(p->data+i,sizeof(PeoInfo),1,pf);
//	}
//	fclose(pf);
//	pf = NULL;
//	free(p->data);
//	p->capacity = 0;
//	p->sz = 0;
//}
//void menu()
//{
//	printf("**************************************\n");
//	printf("*****   1. add      2. del       *****\n");
//	printf("*****   3. search   4. modify    *****\n");
//	printf("*****   5. show     6. sort      *****\n");
//	printf("*****   0. exit                  *****\n");
//	printf("**************************************\n");
//}
//
//void test2()
//{
//	Contact con;
//	InitContact(&con);
//	AddContact(&con);
//	AddContact(&con);
//	AddContact(&con);
//	AddContact(&con);
//	AddContact(&con);
//
//}
//int main()
//{
//	/*test2();*/
//	int input = 0;
//	struct Contact con;
//	InitContact(&con);
//	do
//	{
//		menu();
//		printf("请输入:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//			AddContact(&con);
//			break;
//		case DEL:
//			DelContact(&con);
//			break;
//		case SEARCH:
//			SearchContact(&con);
//			break;
//		case MODIFY:
//			ModifyContact(&con);
//			break;
//		case SHOW:
//			ShowContact(&con);
//			break;
//		case SORT:
//			SortContact(&con);
//			break;
//		case EXIT:
//			DestoryContact(&con);
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//		system("pause");
//		system("cls");
//
//	} while (input);
//	return 0;
//}
