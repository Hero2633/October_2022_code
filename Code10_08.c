#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//#pragma warning (disable:6031)
//#pragma warning (disable:4031)
//#pragma warning (disable:6385)
//#pragma warning (disable:6386)
//struct BinTree
//{
//	char val;
//	struct BinTree* LeftChild;
//	struct BinTree* RightChild;
//};
//void FrontPrint(struct BinTree* root)//ABCDFEG
//{
//	if (!root)
//		return;
//	printf("%c ",root->val);
//	FrontPrint(root->LeftChild);
//	FrontPrint(root->RightChild);
//}
//struct BinTree* BuildTree(char*tmp, int len)
//{
//	struct BinTree** tree = (struct BinTree**)malloc(sizeof(struct BinTree*) * len);
//	if (!tree)
//		exit(1);
//	for (int i = 1; i < len; i++)
//	{
//		if (tmp[i])
//		{
//			struct BinTree* str = (struct BinTree*)malloc(sizeof(struct BinTree));
//			if (!str)
//				exit(1);
//			printf("��������Ч����:");
//			scanf("%c", &(str->val));
//			getchar();
//			tree[i] = str;
//		}
//		else
//			tree[i] = NULL;
//	}//����˳�򵥸���
//	struct BinTree* root = tree[1];//�������ڵ�
//	for (int i = 1; i < len; i++)//����˫���Һ��ӣ����������ϵ
//	{
//		if (tree[i])
//		{
//			int left = 2 * i;
//			if (left >= len)
//				tree[i]->LeftChild = NULL;
//			else
//				tree[i]->LeftChild = tree[left];
//			int right = 2 * i + 1;
//			if (right >= len)
//				tree[i]->RightChild = NULL;
//			else
//				tree[i]->RightChild = tree[right];
//		}
//	}
//	free(tree);
//	return root;
//}
//int MAX(int a, int b)
//{
//	return a > b ? a : b;
//}
//int BinHeight(struct BinTree*);
//int BinHeight(struct BinTree* root)
//{
//	return root ? MAX(BinHeight(root->LeftChild)+1, BinHeight(root->RightChild)+1) : 0;
//}
//void test1()
//{
//	int step = 0;//Ҫ�����Ķ�������������
//	step = 4;//����Ϊ4;
//	printf("���������뽨���Ķ���������ȣ�");
//	scanf("%d",&step);
//	int n = (int)(pow(2, step) - 1);//�ܵĽڵ�����������սڵ㣩
//	char* tmp = (char*)calloc(n + 1, sizeof(char));//�������������ж�
//	if (!tmp)
//		return;
//	memset(tmp,-1,(n+1)*sizeof(char));
//	int len = n + 1;
//	int node = 0;
//	printf("��������Ч�ڵ����:");
//	scanf("%d",&node);
//	while (node--)
//	{
//		printf("������ڵ����ЧЧλ�ã�");
//		int i = 0;
//		scanf("%d",&i);
//		tmp[i] = 0;
//	}
//	getchar();
//	struct BinTree *ret=BuildTree(tmp,len);
//	int Height = BinHeight(ret);
//	printf("\n%d\n", Height);
//	FrontPrint(ret);
//	free(tmp);
//}
//int main()
//{
//	test1();
//	return 0;
//} 
//int main()
//{
//	FILE* pf = fopen("C:\\Code\\test10_08.txt", "w");
//	if (!pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//fputc('A', pf);
//	//fputc('B', pf);
//	//fputc('C',pf);
//	for (int i = 0; i < 26; i++)
//	{		fputc('A' + i, pf);
//			fputc(' ', pf);
//
//        }
//
//
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("C:\\Code\\test10_08.txt","r");
//	if (!pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	/*for (int i = 0; i < 26; i++)
//	{
//
//		int ch = fgetc(pf);
//		printf("%c", ch);
//		int ah = fgetc(pf);
//		printf("%c", ah);
//	}*/
//	//int ch = 0;
//	//int i = 0;
//	//char arr[20] = { 0 };
//	//while ((ch = fgetc(pf)) != EOF)
//	//{
//	//	//printf("%c",ch);
//	//	arr[i++] = ch;
//	//}
//	/////printf(arr);
//	//printf("%s",arr);
//	//char arr[20] = "С��";
//	//for (int i = 0; i < 20; i++)
//	//	printf("%c ",arr[i]);
//	//printf(arr);
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("C:\\Code\\test10_08.txt","r");
//	if (!pf)
//		return 1;
//	//fputs("С�׿Ƽ�",pf);
//	//char arr[20];
//	////fputs(arr,pf);//���ַ����������ļ�����ȥ������\0ֹͣ����������һ��Ҫע�����\0��//���󷵻�-1
//	char ch[20] = "****************";
//	char*p=fgets(ch,3,pf);//����\n������ļ�ĩβ��ֹͣ��ȡ��ͬʱ\n�ᱻ���ߣ�ͬʱ���Զ�׷��\0
//	if (!p)
//		perror("fgets");
//	printf("%s",p);
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("C:\\Code\\test10_08.txt","r");
//	if (!pf)
//		return 1;
//	/*fputc('D', pf);
//	fputs("\n������!",pf);*/
//	char ch[20] = { 0 };
//	while (fgets(ch, 20, pf) != NULL)
//	{
//		printf(ch);
//	}
//	return 0;
//}
//int main()
//{
//	//r w a��������//+ b���Ӳ���
//	//��� r+ w+ a+// rb wb ab //rb+ wb+ ab+
//	FILE*pf=fopen("test.txt","ab");
//	if (!pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//fputs("\nbit ke ji!",pf);
//
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("C:\\Code\\test.txt","w");
//	if (!pf)
//		return 1;
//	char arr[20];
//	int ret=fprintf(pf,"%d+%d=%d",1,1,2);
//	/*fgets(arr,20,pf);
//	printf(arr);*/
//	int i = 0;
//	int n = 0;
//	printf("%d\n",ret);
//	//fscanf(pf,"%d%d",&i,&n);
//	//printf("%d %d",i,n);
//	return 0;
////}
//int main()
//{
//
//	//int a = 0;
//	//int b = 0;
//	//scanf("%d%d",&a,&b);
//	//printf("%d %d\n",a,b);
//#include <stdio.h>
//
//	int main()
//	{
//		char sentence[] = "Rudolph is 12 years old";
//		char str[20];
//		int i;
//
//		sscanf(sentence, "%s %*s %d", str, &i);
//		printf("%s -> %d\n", str, i);
//
//		return 0;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	char sentence[] = "Rudolph is 12 years old";
//	char str[20];
//	int i;
//
//	sscanf(sentence, "%s%s%d", str,str, &i);
//	printf("%s -> %d\n", str, i);
//
//	return 0;
//}