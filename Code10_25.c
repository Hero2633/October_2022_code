#define  _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>
#include <stdlib.h>
//
//int main(int argc, char* argv[])
//{
//    char ch[1005] = { 0 };
//    scanf("%s", ch);
//    int word[26] = { 0 };
//    int i = 0;
//    for (i = 0; ch[i]; i++)
//    {
//        word[ch[i] - 'a']++;
//    }
//    int count = 0;
//    int ch1 = 0;
//    for (int i = 0; i < 26; i++)
//        if (word[i] > count)
//        {
//            count = word[i];
//            ch1 = i + 'a';
//        }
//    printf("%c\n%d", ch1, count);
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//    // ���ڴ��������Ĵ���
//    int n = 0;
//    scanf("%d", &n);
//    int sum = 0;
//    int good = 0;
//    int pass = 0;
//    int tmp = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &tmp);
//        if (tmp >= 60)
//            pass += 1;
//        if (tmp >= 85)
//            good++;
//    }
//    sum = n;
//    char Pass[5] = { 0 };
//    char Good[5] = { 0 };
//    sprintf(Pass, "%.0f%%", (pass * 1.0f) / sum * 100);
//    sprintf(Good, "%.0f%%", (good * 1.0f) / sum * 100);
//    printf("%s\n", Pass);
//    printf("%s\n", Good);
//    return 0;
//}
#include<stdio.h>
#include<stdbool.h>
//bool is_huiwen(char* nums)
//{
//    int left = 0;
//    int right = strlen(nums) - 1;
//    while ((left < right) && nums[left] == nums[right])
//    {
//        left++;
//        right--;
//    }
//    if (left < right)
//        return false;
//    return true;
//}
//bool is_ABABBABA(char* nums)
//{
//    return nums[0] == nums[7] && nums[0] == nums[5] && nums[0] == nums[2] && nums[1] == nums[3] && nums[1] == nums[4] && nums[1] == nums[6];
//}
//void sringAdd(char* nums)
//{
//    char* tmp = "1";
//    int tail = 0;
//    int j = strlen(nums) - 1;
//    char prev = nums[j];
//    nums[j--] = (prev - '0' + tmp[0] - '0' + tail) % 10 + '0';
//    tail = (prev - '0' + tmp[0] - '0' + tail) / 10;
//    while (tail)
//    {
//        prev = nums[j];
//        nums[j] = (prev - '0' + tail) % 10 + '0';
//        tail = (prev - '0' + tail) / 10;
//        j--;
//    }
//}
//int main()
//{
//    char target[9] = { 0 };
//    scanf("%s", target);
//    sringAdd(target);
//    bool flag1 = false;
//    bool flag2 = false;
//    char ch1[9] = { 0 };
//    char ch2[9] = { 0 };
//    for (; 1; sringAdd(target))
//    {
//        if (flag1 == false)
//        {
//            if (is_huiwen(target))
//            {
//                flag1 = true;
//                strcpy(ch1, target);
//            }
//            else
//                continue;
//        }
//        if (flag2 == false)
//        {
//            if (is_ABABBABA(target))
//            {
//                strcpy(ch2, target);
//                flag2 = true;
//            }
//        }
//        if (flag1 && flag2)
//            break;
//    }
//    printf("%s\n", ch1);
//    printf("%s", ch2);
//    return 0;
//}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//int* singleNumbers(int* nums, int numsSize, int* returnSize) {
//    int i = 0;
//    unsigned int flag = 1u;
//    //�ҷ�������
//    int n = 0;
//    int x = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        x ^= nums[i];
//    }
//    printf("%d\n", x);
//    //Ѱ�����������ڼ���������λ��ͬ
//    while ((x & (flag << n)) == 0)
//        n++;
//    //����n��������λΪ1�ķ���һ����򣬽���n��������λΪ0�ķ���һ�����
//    int* ret = (int*)calloc(2, sizeof(int));
//    *returnSize = 2;
//    printf("%d\n", n);
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i] & (flag << n))
//            ret[0] ^= nums[i];
//        else
//            ret[1] ^= nums[i];
//    }
//    return ret;
//}
//int cmp(const void* p1, const void* p2)
//{
//    return *(int*)p1 - *(int*)p2;
//}
//int singleNumber(int* nums, int numsSize) {
//    qsort(nums, numsSize, sizeof(int), cmp);
//    int i = 0;
//    int j = 0;
//    while (j < numsSize)
//    {
//        while ((j < numsSize) && nums[j] == nums[i])
//            j++;
//        if (j - i == 3)
//            i = j;
//        else
//            break;
//    }
//    return nums[i];
//}
//1���������(�����ȷ�����Ǻ�̨�ܲ���ȥ��)
//ʱ�临�Ӷ�:O(N)
//�ռ临�Ӷ�:O(1)
//int removeElement(int* nums, int numsSize, int val) {
//    int len = numsSize;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == val)
//            len--;
//    }
//    return len;
//}
//
//
////2��������ʱ����
////ʱ�临�Ӷ�:O(N)
////�ռ临�Ӷ�:O(N)
//int removeElement(int* nums, int numsSize, int val) {
//    int* tmp = (int*)realloc(NULL, numsSize * sizeof(int));
//    int k = 0;
//    int i = 0;
//    //��������val��ֵ�ȷŽ���ʱ����
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i] != val)
//            tmp[k++] = nums[i];
//    }
//    //��ȥ��val��Ԫ�ؿ���Ԫ����
//    for (int j = 0; j < k; j++)
//    {
//        nums[j] = tmp[j];
//    }
//    return k;
//}
//
//
////3��˫ָ�뷨
////ʱ�临�Ӷ�:O(N)
////�ռ临�Ӷ�:O(1)
//int removeElement(int* nums, int numsSize, int val) {
//    int i = 0;
//    int j = 0;
//    //���ڽ���һ���㷨��tmp���鵱�ɾ���ԭ���飬���ǰ�
//    //������val��Ԫ�ؾͷ���ԭ���飬�����ǰ���˳��ڷ�
//    while (j < numsSize)
//    {
//        if (nums[j] != val)//iָ���ʾλ��Ԫ��Ӧ�÷ŵ�λ��
//            nums[i++] = nums[j];//��ɲ��������iָ��λ�ã������´β���
//        j++;
//    }
//    return i;
//}