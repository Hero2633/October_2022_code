#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//void test()
//{
//#define MAX 100;
//	int ret = MAX;
//}
//
//int main()
//{
//	int ret = MAX;
//#undef MAX
//	test();
//	return 0;
//}
//#ifdef MAV
//int g_val = MIN;
//#define MIN 9
//int main()
//{
//	int min = MIN;
//#undef MIN//取消MIN的定义
//	int ret = MIN;
//	return 0;
//}
//#endif
//int main()
//{
//	return 0;
//}
//int main()
//{
//#if 0
//	printf("haha");
//#endif
//	return 0;
//}
//int main()
//{
//#if 0//该处常量表达式为真，下面的代码才会被编译（为假，下面代码不会参与编译，在预编译阶段就被屏蔽掉了）
//	printf("you can see me!\n");
//#endif
//	return 0;
////}
//#define A 1
//#define B 3
//#define C 4
//#ifdef D
//int main()
//{
//	
//#if (A==1)&&(B==5)//只有当这个条件成立才会编译#if 下面的代码
//	printf("#if\n");
//#elif (C==4)||(A==1)//只有当这个条件成立才会编译#elif 下面的代码
//	printf("#elif\n");
//#else//若前两个条件都不成立，最后才会编译这里的代码
//	printf("#else\n");
//#endif
//	return 0;
//}
//#endif
//int main()
//{
//#if MAX
//	printf("haha");
//#endif
//	return 0;
//}
//#if defined(OS_UNIX)
//#ifdef OPTION1
//unix_version_option1();
//#endif
//#ifdef OPTION2
//unix_version_option2();
//#endif
//#elif defined(OS_MSDOS)
//#ifdef OPTION2
//msdos_version_option2();
//#endif
//#endif
//#define MAX 0
//int main()
//{
//#if n defined(MAX)//编译器只判断MAX这个符号有没有被定义，不管MAX的值是多少//等价于 #ifdef MAX
//	printf("haha");// 
//#endif
//	return 0;
//
//}
//#include<stdio.h>
////int main()
////{
////
////	return 0;
////}
////void reverseString(char* s, int sSize) {
////    int left = 0;
////    int right = sSize - 1;
////    while (left < right)
////    {
////        char tmp = s[left];
////        s[left] = s[right];
////        s[right] = tmp;
////        left++;
////        right--;
////    }
////}
//int reverse(int x) {
//    int res = 0;
//    int tmp = 0;
//    int newRes = 0;
//    while (x)
//    {
//        tmp = x % 10;
//        newRes = res * 10 + tmp;
//        if ((newRes - tmp) / 10 != res)
//            return 0;
//        res = newRes;
//        x /= 10;
//    }
//    return res;
//}
//int main()
//{
//    int ret=reverse(1534236469);
//    printf("%d\n",ret);
//    return 0;
//}
//#include<stdlib.h>
//#include<stdio.h>
//#include<limits.h>
//#include<string.h>
//void reverse_(char* s)
//{
//    int left = 0;
//    int right = strlen(s) - 1;
//    while (left < right)
//    {
//        char tmp = s[left];
//        s[left] = s[right];
//        s[right] = tmp;
//        left++;
//        right--;
//    }
//}
//int reverse(int x) {
//    if (x == INT_MIN)
//        return 0;
//    int flag = 1;
//    if (x < 0)
//        flag = -1;
//    x = abs(x);
//    char tmp[11] = { 0 };
//    for (int i = 0; i <10; i++)//初始化临时数组；
//        tmp[i] = '0';
//    char MAX[11] = { 0 };
//    sprintf(MAX, "%d", INT_MAX);//将最大值转换为字符串
//    sprintf(tmp,"%d",x);
//    int len = strlen(tmp);
//    if (len < 10)
//        tmp[len] = '0';
//    reverse_(tmp);//反转字符串
//    if (strcmp(MAX, tmp) < 0)//与MAX作比较
//        return 0;
//    int ret = atoi(tmp);
//    return ret * flag;
//}
//int main()
//{
//    int a = 0;
    //int ret = reverse(INT_MAX);
//    printf("%d\n",ret);
//    return 0;
//}