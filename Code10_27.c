#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
//#include<time.h>
//void InsertSort(int* nums, int begin,int gap, int len)
//{
//	for (int i = begin; i < len - gap; i += gap)
//	{
//		int end = i;
//		int key = nums[end + gap];
//		while (end >= begin)
//		{
//			if (nums[end] > key)
//				nums[end + gap] = nums[end];
//			else
//				break;
//			end -= gap;;
//		}
//		nums[end + gap] = key;
//	}
//}
//void ShellSort(int* nums, int len)
//{
//	int gap = 5;
//	int begin = 0;
//	int j = 1;
//	while (gap>=1)
//	{
//		for (int i = 0; i < gap; i++)
//		{
//			begin = i;
//			InsertSort(nums, begin, gap, len);
//		}
//		j++;
//		gap = -2 * j + 7;
//	}
//}
//#define len 1000000
//void test1()
//{
//	/*int arr[] = {9,8,7,6,5,4,3,2,1,0,22,4,35,4,6,5,7,68,65,83,3,214,3,25,2,4};
//	int len = sizeof(arr) / sizeof(arr[0]);*/
//	int* arr = (int*)malloc(sizeof(int) * len);
//	if (!arr)
//		exit(-1);
//	for (int i = 0; i < len; i++)
//	{
//		arr[i] = rand() % 100;
//	}
//	clock_t start = clock();
//	ShellSort(arr,len);
//	clock_t end = clock();
//	printf("%.2fms\n",(end-start*1.0f));
//	/*for (int i = 0; i < len; i++)
//		printf("%d ",arr[i]);*/
//}
//int main()
//{
//	srand((size_t)(time(NULL)));
//	test1();
//	return 0;
//}
//int arraySign(int* nums, int numsSize) {
//    int flag = 1;
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
////        if (nums[i] > 0)
//            flag *= 1;
//        else if (nums[i] < 0)
//            flag *= -1;
//        else
//            return 0;
//    }
//    return flag;
//}
//int distanceBetweenBusStops(int* distance, int distanceSize, int start, int destination) {
//    int cur = start;
//    int s1 = 0;
//    int sum = 0;
//    for (int i = 0; i < distanceSize; i++)
//        sum += distance[i];
//    int next = (1 + cur) % distanceSize;
//    while (1)
//    {
//        next = (1 + cur) % distanceSize;
//        s1 += distance[cur];
//        if (next == destination)
//        {
//            break;
//        }
//        else
//        {
//            cur = next;
//        }
//    }
//    int s2 = sum - s1;
//    return s1 > s2 ? s2 : s1;
//}
//int distanceBetweenBusStops(int* distance, int distanceSize, int start, int destination) {
//    int cur = start;
//    int next = 0;
//    int s1 = 0;
//    int s2 = 0;
//    while (1)
//    {
//        next = (cur + 1) % distanceSize;
//        s1 += distance[cur];
//        if (next == destination)
//        {
//            cur = next;
//            break;
//        }
//        else
//            cur = next;
//    }
//    while (1)
//    {
//        next = (cur + 1) % distanceSize;
//        s2 += distance[cur];
//        if (next == start)
//        {
//            cur = next;
//            break;
//        }
//        else
//            cur = next;
//    }
//    return s1 > s2 ? s2 : s1;
//}
//int main()
//{
//
//	printf("%d\n",'z');
//	return 0;
//}
//#define weight 1000
//int cmp(const void* p1, const void* p2)
//{
//    return *(int*)p2 - *(int*)p1;
//}
//char* frequencySort(char* s) {
//    int arr[75] = { 0 };
//    int len = strlen(s);
//    //遍历一遍数组看一看数组记录每个元素出现个数
//    for (int i = 0; i < len; i++)
//        arr[s[i] - '0']++;
//    //扩大倍数
//    for (int i = 0; i < 75; i++)
//        arr[i] = arr[i] * weight + i;//让频率起决定作用
//        //降序排序;
//    qsort(arr, 75, sizeof(int), cmp);
//    int k = 0;
//    int count = 0;
//    char key = 0;
//    for (int i = 0; i < 75; i++)
//    {
//        key = arr[i] % weight + '0';//根据权值算出保存字符
//        count = arr[i] / weight;//根据权值算出保存字符出现个数
//        for (int j = 0; j < count; j++)
//        {
//            s[k++] = key;
//        }
//    }
//    return s;
//}
//#include<stdbool.h>
//#include<string.h>
//int* GetNext(const char* p, int len)
//{
//    int* next = (int*)malloc(sizeof(int) * len);
//    next[0] = -1;
//    int j = 0;
//    int k = -1;
//    while (j < len - 1)
//    {
//        if (k == -1 || p[k] == p[j])
//        {
//            next[j + 1] = k + 1;
//            k = k + 1;
//            j++;
//        }
//        else
//            k = next[k];
//    }
//    return next;
//}
//int KMP(const char* dest, const char* p, int len)
//{
//    int len1 = 2 * len;
//    int len2 = len;
//    int i = 0;
//    int j = 0;
//    int* next = GetNext(p, len2);
//    while (i < len1)
//    {
//        while (j == -1 || ((j < len2) && (dest[i] == p[j])))
//        {
//            i++;
//            j++;
//        }
//        if (j >= len2)
//        {
//            free(next);
//            return i - j;
//        }
//        j = next[j];
//    }
//    free(next);
//    return -1;
//}
//bool isFlipedString(char* s1, char* s2) {
//    int len1 = strlen(s1);
//    int len2 = strlen(s2);
//    if (s1 != s2)
//        return false;
//    char* tmp = (char*)malloc(sizeof(char) * (2 * len1 + 1));
//    strcpy(tmp, s1);
//    strcat(tmp, s1);
//    int ret = KMP(tmp, s2, len1);
//    printf("ret=%d\n", ret);
//    if (ret == -1)
//        return false;
//    return true;
//}
//int main()
//{
//    char *p1="waterbottle";
//    char* p2 = "erbottlewat";
//    isFlipedString(p1,p2);
//    return 0;
//}