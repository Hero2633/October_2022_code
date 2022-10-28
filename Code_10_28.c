#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int* GetNext(const char* sour)
//{
//	int len = strlen(sour);
//	int* next = (int*)malloc(sizeof(int) * len);
//	if (!next)
//		exit(-1);
//	next[0] = -1;
//	int j = 0;
//	int k =next[0];
//	while (j < len - 1)
//	{
//		if (k == -1 || (sour[j] == sour[k]))
//		{
//			next[j + 1] = k + 1;
//			k = k + 1;
//			j++;
//		}
//		else
//			k = next[k];
//	}
//	return next;
//}
//int KMP(const char*dest,const char*sour)
//{
//	int len1 = strlen(dest);
//	int len2 = strlen(sour);
//	if (!len2)
//		return 0;
//	int i = 0;
//	int j = 0;
//	int* next = GetNext(sour);
//	while (i < len1)
//	{
//		while (j==-1||((i < len1)&&(j<len2) && (dest[i] == sour[j])))
//		{
//			i++;
//			j++;
//		}
//		if (j >= len2)
//		{
//			free(next);
//			return i - j;
//		}
//			j = next[j];
//	}
//	free(next);
//	return -1;
//}
//int main()
//{
//	const char* p1 = "cbcdabcefjhk";
//	const char* p2 = "abcef";
//	int ret = KMP(p1,p2);
//	if (ret != -1)
//	{
//		for (int i = ret; i < strlen(p2)+ret; i++)
//			printf("%c",p1[i]);
//	}
//	else
//		printf("NULL\n");
//	return 0;
//}
//int KMP(char* dest, char* sour, int left, int right)
//{
//    for (int i = left; i <= right; i++)
//    {
//        if (dest[i] == sour[0])
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//int lengthOfLongestSubstring(char* s) {
//    int begin = 0;
//    int end = 0;
//    int j = begin + 1;
//    int len = strlen(s);
//    if (len == 0)
//        return 0;
//    int max = 1;
//    while (j < len)
//    {
//        char tmp[2] = { 0 };
//        tmp[0] = s[j];
//        int ret = KMP(s, tmp, begin, end);//判断tmp是不是[begin,end]的字串
//        if (ret == -1)//不是扩大区间
//        {
//            end++;
//            j++;
//        }
//        else//计算此时区间的值，同时调整初始值
//        {
//            int lenSize = end - begin + 1;
//            if (lenSize > max)
//                max = lenSize;
//            begin = ret + 1;
//            end = begin;
//            j = begin + 1;
//        }
//    }
//    max = (max > (end - begin + 1) ? max : end - begin + 1);//j越界那次[begin,end]那次长度没算，需要再算一下
//    return max;
//}
//bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        for (j = i + 1; j < numsSize; j++)
//        {
//            if ((nums[i] == nums[j]) && (abs(i - j) <= k))
//                return true;
//        }
//    }
//    return false;
//}
//int main()
//{
//	char arr[10] = { " abc\0" };
//	strcpy(arr,arr+1);
//	printf(arr);
//	return 0;
//}
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
//char* reverseWords(char* s) {
//    int left = 0;
//    int right = 0;
//    int len = strlen(s);
//    reverse_(s, left, len - 1);
//    while (left < len)
//    {
//        while ((left < len) && (s[left] < 'a' || s[left]>'z') && (s[left] < 'A' || s[left]>'Z') && (s[left] < '0' || s[left]>'9'))
//            left++;
//        if (left >= len)
//            break;
//        right = left;
//        while (s[right] != '\0' && s[right] != ' ')
//            right++;
//        reverse_(s, left, right - 1);
//        left = right;
//    }
//    printf(s);
//    int end = len - 1;
//    while (s[end] == ' ')
//        end--;
//    s[end + 1] = '\0';
//    int begin = 0;
//    while (s[begin] == ' ')
//        begin++;
//    int cur = 0;
//    while (s[begin])
//    {
//        s[cur++] = s[begin];
//        if (s[begin] != ' ')
//        {
//            begin++;
//        }
//        else
//        {
//            while (s[begin] == ' ')
//                begin++;
//        }
//    }
//    s[cur] = '\0';
//    return s;
//}