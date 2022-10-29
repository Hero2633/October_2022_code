#define  _CRT_SECURE_NO_WARNINGS 0
#include<math.h>
#include<stdio.h>
#include<float.h>
#include<assert.h>
double f(double x,double n)
{
	return x * x - n;
}
//double my_sqrt(double n)
//{
//	assert(n>0);
//	double left = 0.0;
//	double right = n;
//	double mid = 0.0;
//	while (1)
//	{
//		mid = (right -left) / 2+left;
//		if (fabs(f(mid,n)) <1e-6)
//			break;
//        else if (f(mid,n) > 0)
//			right = mid;
//		else if (f(mid,n) < 0)
//			left = mid;
//	}
//	return mid;
//}
//double my_sqrt(double n)
//{
//	assert(n >=0);
//	if (n==0)
//		return n;
//	double left = 0.0;
//	double right = n;
//	double mid = 0.0;
//	while (1)
//	{
//		mid = (right - left) / 2 + left;
//		if (fabs(mid-n/mid) < 1e-20)//精度给的越高结果越准确
//			break;
//		else if (mid-n/mid > 0)
//			right = mid;
//		else if (mid - n / mid < 0)
//			left = mid;
//	}
//	return mid;
//}
//double SqrtByNewton(double a)
//{
//	if (a == 0)
//		return a;
//	//随便给一个值，这个无影响的
//	double value = a;
//
//	for (int i = 0; i < 20; ++i)//迭代10次，迭代次数越高，越精准
//	{
//		value = (value + a / value) / 2.0;
//	}
//
//	return value;
//}
//double SqrtByNewton(double a)
//{
//	if (a == 0)
//		return a;
//	//随便给一个值，这个无影响的
//	double value = a;
//
//	while (fabs(value - a / value) > DBL_EPSILON)
//	{
//		value = (value + a / value) / 2.0;
//	}
//	return value;
//}
//int main()
//{
//	/*INT_MAX*/;
//	//int n = 0;
//	double n = 0.0;
//	scanf("%lf",&n);
//	//n = 2147483647.0;
//	double ret2 = sqrt(n);
//	printf("%.50lf\n",ret2);
//	double ret = SqrtByNewton(n);
//	printf("%.50lf\n", ret);
//	return 0;
//}
//int hammingWeight(uint32_t n) {
//    size_t flag = 1;
//    int len = sizeof(uint32_t) * 8;
//    int i = 0;
//    int j = 0;
//    while (i < len)
//    {
//        if (n & (flag << i))
//            j++;
//        i++;
//    }
//    return j;
//}
//uint32_t reverseBits(uint32_t n) {
//    uint32_t flag = 1;
//    uint32_t sum = 0;
//    uint32_t tmp = 0;
//    int len = sizeof(uint32_t) * 8;
//    int i = 0;
//    while (i < len)
//    {
//        tmp = n & (flag << i);
//        if (tmp)
//            tmp = 1;
//        else
//            tmp = 0;
//        sum = sum * 2 + tmp;
//        i++;
//    }
//    return sum;
//}