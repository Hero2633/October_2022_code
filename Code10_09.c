#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
//int main()
//{
//	//摄氏度×9/5+32=华氏度。
//	float c = 0.0f;
//	float f = 0.0f;
//	scanf("%f",&f);
//	printf("%.2f`F\n",(f-32.0f)*5/9.0f);
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt","w");
//	if (!pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fclose(pf);//关闭文件
//	return 0;
//}
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("C:\\Code\\test.txt","w");
//	if (!pf)//对文件指针进行判NULL
//	{
//		perror("fopen");
//		return 1;
//	}
//	//将大写字母写入文件；
//	for (int i = 0; i < 26; i++)
//		fputc('A'+i,pf);
//	//关闭文件
//	fclose(pf);
//	return 0;
//}
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("C:\\Code\\test.txt", "r");
//	if (!pf)//对文件指针进行判NULL
//	{
//		perror("fopen");
//		return 1;
//	}
//	//将大写字母写入文件；
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ",ch);
//	}
//	//关闭文件
//	fclose(pf);
//	return 0;
//}
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("C:\\Code\\test.txt", "w");
//	if (!pf)//对文件指针进行判NULL
//	{
//		perror("fopen");
//		return 1;
//	}
//	//将字符串写入文件；
//	int ch = 0;
//	const char* p = "I love China!";
//	fputs(p,pf);
//	//关闭文件
//	fclose(pf);
//	return 0;
//}
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("C:\\Code\\test.txt", "w");
//	if (!pf)//对文件指针进行判NULL
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (int i = 1; i <= 9; i++)//在文件里面输出9x9乘法表
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			fprintf(pf,"%-2d*%2d=%2d  ",j,i,j*i);
//		}
//		fputc('\n',pf);
//	}
//	//关闭文件
//	fclose(pf);
//	return 0;
//}
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("C:\\Code\\test.txt", "w");
//	if (!pf)//对文件指针进行判NULL
//	{
//		perror("fopen");
//		return 1;
//	}
//	int ch = 0;
//	//const char* p = "I love China!";
//	char arr[20];
//	fgets(arr, 20, pf);
//	printf(arr);
//	//关闭文件
//	fclose(pf);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	fclose(stdin);
//	scanf("%d",&a);
//	fclose(stdout);
//	printf("%d",1);
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("C:\\Code\\test.txt","r+");
//	if (!pf)
//		return 1;
//	int i = 0;
//	float f = 0.0f;
//	fscanf(pf,"%d%f",&i,&f);
//	printf("%d %f\n",i,f);
//
//	return 0;
//}
struct S
{
	int  a;
	float f;
	char name[20];
};
//int main()
//{
//	FILE* pf = fopen("C:\\Code\\test.txt", "r+");
//	if (!pf)
//		return 1;
//	struct S s = {0};
//		//int a=fread(&s, sizeof(struct S), 1, pf);
//		//printf("%d\n",a);
//		while(fread(&s, sizeof(struct S), 1, pf))
//			printf("%d %f %s\n", s.a, s.f, s.name);
//	return 0;
//}
//int main()
//{
//	char arr[20] = "1 2 3 4 ";
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	const char* p = "1 2 3";
//	fscanf(p,"%d%d%d",&a,&b,&c);
//	printf("%d %d %d",a,b,c);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char sentence[] = "Rudolph 12 years old";
//	char str[20];
//	int i;
//
//	sscanf(sentence, "%s%d", str, &i);
//	printf("%s -> %d\n", str, i);
//
//	return 0;
//}
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	/*char buffer[50];
//	int n, a = 5, b = 3;
//	n = sprintf(buffer, "%d plus %d is %d", a, b, a + b);
//	printf("[%s] is a string %d chars long\n", buffer, n);*/
//	int* tmp = (int*)calloc(0,sizeof(int));
//	if (!tmp)
//	{
//		perror("calloc");
//	}
//	tmp[0] = 1;
//	return 0;
////}
//#include<time.h>
//#define MAX_SZ 20//最多生成20位
//#define STEP 5//至少生成5位
////void random_num()
////{
////	char arr[10][10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
////	char num[MAX_SZ+1] = { 0 };
////	int count = 0;
////	int step = 0;
////	count = rand() % (MAX_SZ+1-STEP) + STEP;//生成随机位数
////	step = count;
////	num[0] = (rand() % 9 + 1)+'0';//随机生成最高位（1~9）;
////	count--;
////	for (int i = 1; i < step; i++)
////	{
////		num[i] = rand() % 10 + '0';
////	}
////	printf("The value is %s\n",num);
////	for (int i = 0; i < step; i++)
////		printf("%s ",arr[num[i]-'0']);
////}
////int main()
////{
////	srand((unsigned int)time(NULL));
////	random_num();
////	return 0;
////}
//#include<stdbool.h>
//#define COL 3
//#define ROW 3
//bool is_max(int num[][COL], int key, int R, int c)
//{
//	for (int i = 0; i < R; i++)
//		if (num[i][c] > key)
//			return false;
//	return true;
//}
//int saddle(int num[][COL], int R, int C)
//{
//	int r = 0;
//	int c = 0;
//	int* tmp = (int*)malloc(sizeof(int) * R);
//	if (!tmp)
//		exit(1);
//	int count = 0;
//	while (r < R)
//	{
//		int Rmin = num[r][0];
//		for (int i = 0; i < C; i++)//搜索最小值
//		{
//			if (Rmin > num[r][i])
//				Rmin = num[r][i];
//		}
//		int k = 0;
//		for (int i = 0; i < C; i++)//保存行最小值列下标
//		{
//			if (Rmin == num[r][i])
//				tmp[k++] = i;
//		}
//		for (int j = 0; j < k; j++)//判断每列中的最大值是不是等于Rmin
//		{
//			if (is_max(num, Rmin, R, tmp[j]))
//				count++;
//		}
//		r++;
//	}
//	free(tmp);
//	tmp = NULL;
//	return count;
//}
//int main()
//{
//	int arr[ROW][COL] = { {1,3,1},
//		{1,1,1},{1,1,1} };
//	int ret=saddle(arr,ROW,COL);
//	printf("%d\n",ret);
//	return 0;
//}