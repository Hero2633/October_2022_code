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
//#undef MIN//ȡ��MIN�Ķ���
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
//#if 0//�ô��������ʽΪ�棬����Ĵ���Żᱻ���루Ϊ�٣�������벻�������룬��Ԥ����׶ξͱ����ε��ˣ�
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
//#if (A==1)&&(B==5)//ֻ�е�������������Ż����#if ����Ĵ���
//	printf("#if\n");
//#elif (C==4)||(A==1)//ֻ�е�������������Ż����#elif ����Ĵ���
//	printf("#elif\n");
//#else//��ǰ���������������������Ż��������Ĵ���
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
//#if n defined(MAX)//������ֻ�ж�MAX���������û�б����壬����MAX��ֵ�Ƕ���//�ȼ��� #ifdef MAX
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
//    for (int i = 0; i <10; i++)//��ʼ����ʱ���飻
//        tmp[i] = '0';
//    char MAX[11] = { 0 };
//    sprintf(MAX, "%d", INT_MAX);//�����ֵת��Ϊ�ַ���
//    sprintf(tmp,"%d",x);
//    int len = strlen(tmp);
//    if (len < 10)
//        tmp[len] = '0';
//    reverse_(tmp);//��ת�ַ���
//    if (strcmp(MAX, tmp) < 0)//��MAX���Ƚ�
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