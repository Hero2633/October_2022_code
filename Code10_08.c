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
//			printf("请输入有效数据:");
//			scanf("%c", &(str->val));
//			getchar();
//			tree[i] = str;
//		}
//		else
//			tree[i] = NULL;
//	}//建立顺序单个数
//	struct BinTree* root = tree[1];//保留根节点
//	for (int i = 1; i < len; i++)//利用双亲找孩子，建立二叉关系
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
//	int step = 0;//要建立的二叉树的最大深度
//	step = 4;//假设为4;
//	printf("请输入你想建立的二叉树的深度：");
//	scanf("%d",&step);
//	int n = (int)(pow(2, step) - 1);//总的节点个数（包括空节点）
//	char* tmp = (char*)calloc(n + 1, sizeof(char));//建立辅助数组判断
//	if (!tmp)
//		return;
//	memset(tmp,-1,(n+1)*sizeof(char));
//	int len = n + 1;
//	int node = 0;
//	printf("请输入无效节点个数:");
//	scanf("%d",&node);
//	while (node--)
//	{
//		printf("请输入节点的无效效位置：");
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
//	//char arr[20] = "小米";
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
//	//fputs("小米科技",pf);
//	//char arr[20];
//	////fputs(arr,pf);//将字符串拷贝到文件里面去，遇到\0停止拷贝（所以一定要注意添加\0）//错误返回-1
//	char ch[20] = "****************";
//	char*p=fgets(ch,3,pf);//遇到\n或读到文件末尾会停止读取，同时\n会被读走，同时会自动追加\0
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
//	fputs("\n换行了!",pf);*/
//	char ch[20] = { 0 };
//	while (fgets(ch, 20, pf) != NULL)
//	{
//		printf(ch);
//	}
//	return 0;
//}
//int main()
//{
//	//r w a基本操作//+ b附加操作
//	//组合 r+ w+ a+// rb wb ab //rb+ wb+ ab+
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