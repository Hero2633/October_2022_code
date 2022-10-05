#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdio.h>
//int main() {
//    int nums[10] = { 0 };
//    int key = 0;
//    int tmp = 0;
//    scanf("%d",&key);
//    while (key)
//    {
//        tmp = key % 10;
//        if (!nums[tmp])
//        {
//            nums[tmp]++;
//            printf("%d", tmp);
//        }
//        key = key / 10;
//    }
//    return 0;
//}
//#include <stdio.h>
//#include<string.h>
//void reverse_(char* nums, int left, int right)
//{
//    while (left < right)
//    {
//        char tmp = nums[left];
//        nums[left] = nums[right];
//        nums[right] = tmp;
//        left++;
//        right--;
//    }
//}
//int main() {
//    int left = 0;
//    int right = 0;
//    char nums[10001] = { 0 };
//    fgets(nums,10001,stdin);
//    int len = strlen(nums);
//    len--;
//    reverse_(nums, 0, len - 1);
//    while (left < len)
//    {
//        while (nums[right] != ' ' && nums[right] != '\n')
//            right++;
//        reverse_(nums, left, right - 1);
//        right++;
//        left = right;
//    }
//    printf(nums);
//    return 0;
//}
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//int cmp(const void* p1, const void* p2)
//{
//    char* tmp1 = (char*)p1;
//    char* tmp2 = (char*)p2;
//    return strcmp(tmp1, tmp2);
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    getchar();
//    char ch[9][101];
//    for (int i = 0; i < n; i++)
//        gets(ch[i]);
//    qsort(ch, n, 101, cmp);
//    for (int i = 0; i < n; i++)
//    {
//        printf("%s\n", ch[i]);
//    }
//    return 0;
//}
//int main()
//{
//	//char ch[10];
//	//char arr[100]="********************************";
//	//gets(ch);
//	//strncpy(arr,ch,3);
//	//printf(arr);
//	char ch[10];
//	scanf("%s",ch);
//	char c = 0;
//	c=getchar();
//	printf("%s\n", ch);
//	if (c == '\n')
//	{
//		printf("scanf函数在读取字符串结束时，并不会清理缓冲区，上一次操作留下的\\n还在\n");
//	}
//	return 0;
//}
//int main()
//{
//	char ch[10];
//	gets(ch);
//	printf("%s\n",ch);
//	char c = 0;
//	c=getchar();
//	if (c != '\n')
//	{
//		printf("表示gets函数已经刷新缓冲区，getchar没有读取到\\n\n");
//	}
//	return 0;
//}
//int main()
//{
//	char ch[100] = "******\0*********";
//	char bit[10] = "aaaa";
//	strcat(ch,bit);
//	return 0;
//}
//int main()
//{
//	char ch[100] = "*******\0**********";
//	char arr[10] = "aaaaa";
//	strncat(ch,arr,2);
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	/*printf("**********");
//	printf("\b\b\b\b\b\b\b\b\babcd\t\t");*/
//	//测试一个Tab能走多远
//	printf("**********");
//	printf("\b\b\b\b\b\b\b\b\b\b\t");//一个Tab相当于8个空格//\b是移动光标，光标最终所在位置上的东西会被清除
//	printf("N");
//	return 0;
//}
//#include<windows.h>
//#include<float.h>
//int main()
//{
	//printf("heheh");
	//Sleep(1000);
	//fflush(stdin);
	//printf("%5.1f",3.14);
	///LLONG_MIN;
	//-1u;
	//printf("%e\n",FLT_MAX);
	//double d = 0x3.1415;
	//printf("%A\n", 3.1415926);
	//printf("%a\n", 3.1415926);
	//printf("%.7E\n", 3.1415926);
	//printf("%g\n", 3.1415926);
	//printf("%g\n", 3.147777777777777777);
	//printf("%d\n", 10);
	//printf("%i\n", 10);
	//printf("%i\n",-1);
	//printf("wwww%s%s","%%sjk","dnjqk");
	//printf("%%","w");
	//printf("%+d\n",-3);
	//printf("%#A",3.1415926);
	//printf("%g\n",6);
	/*int m = 511;
	printf("%hd",m);*/
	//long long a = 0x1122334455667788;
	//float a = 314.5f;
	/*long long a = 0x7D0234455667788;
	printf("%lf\n",a);*/
//	int a = 0;
//	scanf("%d",&a);
//	printf("%d",a);
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	int num = sizeof(int) * 8;
//	int count = 0;
//	int key = 0;
//	scanf("%d", &key);
//	for (int i = 0; i < num; i++)
//	{
//		if (key & (1 << i))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//#include <stdio.h>
//#include<string.h>
//int main() {
//	char arr[5001] = { 0 };
//	gets(arr);
//	int right = strlen(arr) - 1;
//	int left = right;
//	while (arr[left] != ' ' && left >= 0)
//		left--;
//	printf("%d\n", right - left);
//	return 0;
//}
//int bin_Add_Sub(int m, int n)
//{
//	int a = m ^ n;
//	int b = m & n;
//	return a + (b << 1);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	printf("%d\n",bin_Add_Sub(a,b));
//	return 0;
//}