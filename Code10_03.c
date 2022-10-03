#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 struct ListNode {
 	int val;
 	struct ListNode *next;
  };
 /**
  *
  * @param pHead1 ListNodeÀà
  * @param pHead2 ListNodeÀà
  * @return ListNodeÀà
  */
//size_t Count(struct ListNode* head)
//{
//    if (!head)
//        return 0;
//    int count = 0;
//    while (head)
//    {
//        count++;
//        head = head->next;
//    }
//    return count;
//}
//struct ListNode* FindFirstCommonNode(struct ListNode* pHead1, struct ListNode* pHead2) {
//    // write code here
//    int len1 = Count(pHead1);
//    int len2 = Count(pHead2);
//    if (!len1 || !len2)
//        return NULL;
//    int Difference = abs(len1 - len2);
//    struct ListNode* longHead = pHead1;
//    struct ListNode* shortHead = pHead2;
//    if (len2 > len1)
//    {
//        longHead = pHead2;
//        shortHead = pHead1;
//    }
//    while (Difference--)
//    {
//        longHead = longHead->next;
//    }
//    while (longHead != shortHead)
//    {
//        longHead = longHead->next;
//        shortHead = shortHead->next;
//    }
//    return longHead;
//}
 //size_t Count(struct ListNode* head)
 //{
 //    if (!head)
 //        return 0;
 //    int count = 0;
 //    while (head)
 //    {
 //        count++;
 //        head = head->next;
 //    }
 //    return count;
 //}
 //struct ListNode* Get_Node()
 //{
 //    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
 //    if (!node)
 //        exit(1);
 //    return node;
 //}
 //struct ListNode* addInList(struct ListNode* head1, struct ListNode* head2) {
 //    // write code here
 //    int len1 = Count(head1);
 //    int len2 = Count(head2);
 //    int arr1[len1];
 //    int arr2[len2];
 //    for (int i = 0; i < len1; i++)
 //    {
 //        arr1[i] = head1->val;
 //        head1 = head1->next;
 //    }
 //    for (int j = 0; j < len2; j++)
 //    {
 //        arr2[j] = head2->val;
 //        head2 = head2->next;
 //    }
 //    int sum[len1 + len2];
 //    int l1 = len1 - 1;
 //    int l2 = len2 - 1;
 //    int tail = 0;
 //    int k = 0;
 //    while (l1 >= 0 && l2 >= 0)
 //    {
 //        sum[k] = (arr1[l1] + arr2[l2] + tail) % 10;
 //        tail = (arr1[l1] + arr2[l2] + tail) / 10;
 //        l1--;
 //        l2--;
 //        k++;
 //    }
 //    while (l1 >= 0)
 //    {
 //        sum[k] = (arr1[l1] + tail) % 10;
 //        tail = (arr1[l1] + tail) / 10;
 //        k++;
 //        l1--;
 //    }
 //    while (l2 >= 0)
 //    {
 //        sum[k] = (arr2[l2] + tail) % 10;
 //        tail = (arr2[l2] + tail) / 10;
 //        k++;
 //        l2--;
 //    }
 //    if (tail)
 //    {
 //        sum[k++] = tail;
 //    }
 //    struct ListNode* NewHead = NULL;
 //    for (int i = 0; i < k; i++)
 //    {
 //        //printf("%d ",sum[k]);
 //        struct ListNode* newNode = Get_Node();
 //        newNode->val = sum[i];
 //        newNode->next = NewHead;
 //        NewHead = newNode;
 //    }

 //    return NewHead;
 //}
//int search(int* nums, int numsLen, int target) {
//    // write code here
//    int left = 0;
//    int right = numsLen - 1;
//    int mid = 0;
//    while (left <= right)
//    {
//        mid = (right - left) / 2 + left;
//        if (nums[mid] > target)
//            right = mid - 1;
//        else if (nums[mid] < target)
//            left = mid + 1;
//        else
//            return mid;
//    }
//    return -1;
//}
//bool Find(int target, int** array, int arrayRowLen, int* arrayColLen) {
//    // write code here
//    int r = 0;
//    int c = *arrayColLen - 1;
//    while (r >= 0 && r < (arrayRowLen) && c >= 0 && c < (*arrayColLen))
//    {
//        if (array[r][c] > target)
//            c--;
//        else if (array[r][c] < target)
//            r++;
//        else
//            return true;
//    }
//    return false;
//}
//bool search(int* nums, int numsLen, int target) {
//    // write code here
//    int left = 0;
//    int right = numsLen - 1;
//    int mid = 0;
//    while (left <= right)
//    {
//        mid = (right - left) / 2 + left;
//        if (nums[mid] > target)
//            right = mid - 1;
//        else if (nums[mid] < target)
//            left = mid + 1;
//        else
//            return true;
//    }
//    return false;
//}
//bool Find(int target, int** array, int arrayRowLen, int* arrayColLen) {
//    // write code here
//    for (int r = 0; r < arrayRowLen; r++)
//    {
//        if (search(array[r], *arrayColLen, target))
//            return true;
//    }
//    return false;
//}
//void merge(int* A, int ALen, int m, int* B, int BLen, int n) {
//    // write code here
//    int l1 = ALen - 1;
//    int l2 = BLen - 1;
//    int k = ALen + BLen - 1;
//    while (l1 >= 0 && l2 >= 0)
//    {
//        if (A[l1] > B[l2])
//        {
//            A[k--] = A[l1--];
//        }
//        else
//            A[k--] = B[l2--];
//
//    }
//    while (l2 >= 0)
//        A[k--] = B[l2--];
//}
//bool judge(char* str) {
//    // write code here
//    int left = 0;
//    int right = strlen(str) - 1;
//    while (str[left] == str[right])
//    {
//        left++;
//        right--;
//    }
//    if (left < right)
//        return false;
//    return true;
//}