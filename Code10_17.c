#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//char firstUniqChar(char* nums) {
//    int i = 0;
//    int len = strlen(nums);
//    int tmp[26] = { -1 };
//    memset(tmp, -1, sizeof(tmp));
//    for (i = 0; i < len; i++)//
//    {
//        if (tmp[nums[i] - 'a'] == -1)//��ʾ��λ��ֵ��û���ֹ������Դ�����±�
//            tmp[nums[i] - 'a'] = i;
//        else//��ʾ��λ��ֵ���ֹ��ˣ���Ѹ��ַ�����Ӧ��tmp�ռ����
//            tmp[nums[i] - 'a'] = -2;
//    }
//    int min = len;
//    char ret = ' ';
//    for (int j = 0; j < 26; j++)
//        if (tmp[j] != -1 && tmp[j] != -2)//��ʾtmp�������Ч�±�
//        {
//            if (min > tmp[j])
//            {
//                min = tmp[j];
//                ret = j + 'a';
//            }
//        }
//    return ret;
//}

//int cmp(const void* p1, const void* p2)
//{
//    const int* a = (const int*)p1;
//    const int* b = (const int*)p2;
//    if (*a > *b)
//        return 1;
//    else if (*a < *b)
//        return -1;
//    else
//        return 0;
//
//}
//int singleNumber(int* nums, int numsSize) {
//    qsort(nums, numsSize, sizeof(int), cmp);
//    int i = 0;
//    int j = 0;
//    while (i < numsSize)
//    {
//        while ((j < numsSize) && nums[i] == nums[j])
//            j++;
//        if (j - i != 3)
//            break;
//        else
//            i = j;
//    }
//    return nums[i];
//}
//int singleNonDuplicate(int* nums, int numsSize)
//{
//    int left = 0;
//    int right = numsSize - 1;
//    int mid = 0;
//    while (left < right)//��С�������������Ǵ�ż����ʼ�����ģ���ô˵���ҵĵ������ұ�
//    {//����Ǵ�������ʼ�����ģ���ô����һ�������
//        mid = (right - left) / 2 + left;//fe
//        if (nums[mid] == nums[mid + 1])//���ж�nums[mid]�Ǵ�mid��ʼ����
//        {
//            if (mid % 2)//�ж���ż����ʼ��������������ʼ����
//                right = mid - 1;
//            else
//                left = mid + 2;
//        }
//        else if (nums[mid] == nums[mid - 1])//���Ǵ�mid-1��ʼ����
//        {
//            if ((mid - 1) % 2)//�ж���ż����ʼ��������������ʼ����
//                right = mid - 2;
//            else
//                left = mid + 1;
//        }
//        else//����������㣬��˵��mid��������Ҫ�ҵĵ���
//            return nums[mid];
//    }//���������С��ֻʣһ��Ԫ���ˣ������һ��Ԫ�ؾ��ǵ���
//    return nums[left];
//}
//int main()
//{
//	printf("%u\n",1<<31);
//	return 0;
//}
///**
// * Note: The returned array must be malloced, assume caller calls free().
// */
//int* singleNumber(int* nums, int numsSize, int* returnSize) {
//    int* ret = (int*)malloc(sizeof(int) * 2);
//    *returnSize = 2;
//    memset(ret, 0, sizeof(int) * 2);
//    int ans = 0;
//    for (int i = 0; i < numsSize; i++)
//        ans ^= nums[i];
//    int i = 0;
//    unsigned int flag = 1u;
//    while ((ans & (flag << i)) == 0)
//        i++;
//    for (int j = 0; j < numsSize; j++)
//    {
//        if ((nums[j] & (flag << i)))
//            ret[0] ^= nums[j];
//        else
//            ret[1] ^= nums[j];
//    }
//    return ret;
//}