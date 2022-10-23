#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//int main()
//{
//
//	return 0;
//}
//1、利用总和减去数组和
//时间复杂度：O（N）
//空间复杂度：O（1）
//int missingNumber(int* nums, int numsSize) {
//    int oldSum = (numsSize + 1) * numsSize / 2;
//    for (int i = 0; i < numsSize; i++)
//    {
//        oldSum -= nums[i];
//    }
//    return oldSum;
//}
//
//
//
////2、异或
////时间复杂度：O（N）
////空间复杂度：O（1）
//int missingNumber(int* nums, int numsSize) {
//    int x = 0;
//    for (int i = 0; i <= numsSize; i++)
//        x ^= i;
//    for (int i = 0; i < numsSize; i++)
//        x ^= nums[i];
//    return x;
//}
//
////3、借用临时数组
////时间复杂度：O（N）
////空间复杂度：O（N）
//int missingNumber(int* nums, int numsSize) {
//    int len = numsSize + 1;
//    int tmp[len];
//    memset(tmp, -1, sizeof(tmp));
//    for (int i = 0; i < numsSize; i++)
//        tmp[nums[i]] = nums[i];
//    int j = 0;
//    for (j = 0; j < len; j++)
//        if (tmp[j] < 0)
//            break;
//    return j;
//}
//void reverse_num(int* nums, int left, int right)
//{
//    while (left < right)
//    {
//        int tmp = nums[left];
//        nums[left] = nums[right];
//        nums[right] = tmp;
//        left++;
//        right--;
//    }
//}
////1、三步翻转法
////时间复杂度：O（N）
////空间复杂度：O（1）
//void rotate(int* nums, int numsSize, int k) {
//    k %= numsSize;
//    reverse_num(nums, 0, numsSize - 1);
//    reverse_num(nums, 0, k - 1);
//    reverse_num(nums, k, numsSize - 1);
//}
////2、暴力法
//﻿//时间复杂度：O（N^2）
////空间复杂度：O（1）
////直接超时
//void rotate(int* nums, int numsSize, int k) {
//    k %= numsSize;
//    for (int i = 0; i < k; i++)
//    {
//        int tmp = nums[numsSize - 1];
//        for (int end = numsSize - 2; end >= 0; end--)
//        {
//            nums[end + 1] = nums[end];
//        }
//        nums[0] = tmp;
//    }
//}
//
//
//
////3、借用临时数组、
////时间复杂度：O（N）
////空间复杂度：O（N）
//void rotate(int* nums, int numsSize, int k) {
//    k %= numsSize;
//    if (!k)//处理下k等于0的情况
//        return;
//    int tmp[k];
//    int n = 0;
//    //1、将[numsSize-k,numsSize-1]元素拷贝进tmp数组;
//    for (int i = numsSize - k; i < numsSize; i++)
//    {
//        tmp[n++] = nums[i];
//    }
//    //2、将[0,numsSize-k-1]往后挪k个单位
//    for (int end = numsSize - k - 1; end >= 0; end--)
//    {
//        nums[end + k] = nums[end];
//    }
//    //3、将tmp里的元素拷贝回原素组
//    for (int j = 0; j < n; j++)
//    {
//        nums[j] = tmp[j];
//    }
//}
//int cmp(const void* p1, const void* p2)
//{
//    return *(int*)p1 - *(int*)p2;
//}
//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//    *returnSize = 2;
//    int* tmp = (int*)malloc(sizeof(int) * 2);
//    int* arr = (int*)malloc(sizeof(int) * numsSize);
//    int k = 0;
//    for (k = 0; k < numsSize; k++)//空间换时间
//        arr[k] = nums[k];
//    qsort(arr, numsSize, sizeof(int), cmp);
//    int key1 = 0;
//    int key2 = 0;
//    //利用双指针思路来来寻找两个加数
//    int left = 0;
//    int right = numsSize - 1;
//    while (left < right)
//    {
//        int sum = arr[left] + arr[right];
//        printf("sum=%d\n", sum);
//        if (sum == target)
//        {
//            key1 = arr[left];
//            key2 = arr[right];
//            break;
//        }
//        else if (sum < target)
//            left++;
//        else
//            right--;
//    }
//    bool flag1 = false;
//    bool flag2 = false;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (flag1 == false)
//        {
//            if (nums[i] == key1)
//            {
//                flag1 = true;
//                tmp[0] = i;
//                continue;
//            }
//        }
//        if (flag2 == false)
//        {
//            if (nums[i] == key2)
//            {
//                flag2 = true;
//                tmp[1] = i;
//            }
//        }
//        if (flag1 && flag2)
//            break;
//    }
//    free(arr);
//    arr = NULL;
//    return tmp;
//}
//struct Node
//{
//    int index;
//    int val;
//};
//int cmp(const void* p1, const void* p2)
//{
//    struct Node* a = (struct Node*)p1;
//    struct Node* b = (struct Node*)p2;
//
//    return a->val - b->val;
//}
//
//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//    *returnSize = 2;
//    int* tmp = (int*)malloc(sizeof(int) * 2);
//    struct Node* arr = (struct Node*)malloc(sizeof(struct Node) * numsSize);
//    int k = 0;
//    for (k = 0; k < numsSize; k++)//空间换时间
//    {
//        arr[k].index = k;
//        arr[k].val = nums[k];
//    }
//    qsort(arr, numsSize, sizeof(struct Node), cmp);
//    //利用双指针思路来来寻找两个加数
//    int left = 0;
//    int right = numsSize - 1;
//    while (left < right)
//    {
//        int sum = arr[left].val + arr[right].val;
//        if (sum == target)
//        {
//            tmp[0] = arr[left].index;
//            tmp[1] = arr[right].index;
//            break;
//        }
//        else if (sum < target)
//            left++;
//        else
//            right--;
//    }
//    free(arr);
//    arr = NULL;
//    return tmp;
//}