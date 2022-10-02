#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//struct ListNode* deleteDuplicates(struct ListNode* head) {
//    // write code here
//    if (!head)
//        return head;
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//    struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* cur = dummyhead;
//    cur->next = NULL;
//    while (fast)
//    {
//        if (slow->val == fast->val)
//        {
//            fast = fast->next;
//        }
//        else {
//            cur->next = slow;
//            cur = slow;
//            cur->next = NULL;
//            slow = fast;
//
//        }
//    }
//    cur->next = slow;
//    slow->next = NULL;
//    return dummyhead->next;
////}
//struct ListNode* deleteDuplicates(struct ListNode* head) {
//    // write code here
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//    struct ListNode* dummhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* cur = dummhead;
//    cur->next = NULL;
//    int step = 0;
//    while (fast)
//    {
//        while ((slow->val == fast->val) && fast)
//        {
//            step++;
//            fast = fast->next;
//        }
//        if (step == 1)
//        {
//            cur->next = slow;
//            cur = slow;
//            cur->next = NULL;
//        }
//        slow = fast;
//        step = 0;
//    }
//    return dummhead->next;
//}
//struct ListNode* oddEvenList(struct ListNode* head) {
//    // write code here
//    struct ListNode* cur = head;
//    int grade = 1;
//    struct ListNode* oddHead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* evenHead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* oddTail = NULL;
//    struct ListNode* evenTail = NULL;
//    oddTail = oddHead;
//    evenTail = evenHead;
//    oddHead->next = NULL;
//    evenHead->next = NULL;
//    struct ListNode* next = NULL;
//    while (cur)
//    {
//        next = cur->next;
//        if (grade % 2)
//        {
//            oddTail->next = cur;
//            oddTail = cur;
//            oddTail->next = NULL;
//        }
//        else
//        {
//            evenTail->next = cur;
//            evenTail = cur;
//            evenTail->next = NULL;
//        }
//        cur = next;
//        grade++;
//    }
//    oddTail->next = evenHead->next;
//    return oddHead->next;
//
//}
//struct ListNode
//{
//    int val;
//    struct ListNode* next;
//};
//size_t COUNT(struct ListNode* head)
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
//void merge_(struct ListNode** nums, int left, int right, struct ListNode** tmp)
//{
//    if (left >= right)
//        return;
//    int mid = (right - left) / 2 + left;
//    merge_(nums, left, mid, tmp);
//    merge_(nums, mid + 1, right, tmp);
//    int l1 = left;
//    int l2 = mid + 1;
//    int j = 0;
//    while (l1 <= mid && l2 <= right)
//    {
//        if (nums[l1]->val < nums[l2]->val)
//            tmp[j++] = nums[l1++];
//        else
//            tmp[j++] = nums[l2++];
//    }
//    while (l1 <= mid)
//        tmp[j++] = nums[l1++];
//    while (l2 <= right)
//        tmp[j++] = nums[l2++];
//    for (int k = 0; k < j; k++)
//    {
//        nums[left++] = tmp[k];
//    }
//}
//struct ListNode* sortInList(struct ListNode* head) {
//    // write code here
//    int len = COUNT(head);
//    if (!len)
//        return head;
//    struct ListNode** tmp = (struct ListNode**)malloc(sizeof(struct ListNode*) * len);
//    struct ListNode** tmp2 = (struct ListNode**)malloc(sizeof(struct ListNode*) * len);
//    struct ListNode* cur = head;
//    int i = 0;
//    while (cur)
//    {
//        tmp[i] = cur;
//        i++;
//        cur = cur->next;
//    }
//    merge_(tmp, 0, len - 1, tmp2);
//    struct ListNode TMP = { 0 };
//    struct ListNode* dummthead = &TMP;
//    struct ListNode* H = dummthead;
//    for (int i = 0; i < len; i++)
//    {
//        H->next = tmp[i];
//        H = tmp[i];
//        H->next = NULL;
//    }
//    free(tmp);
//    free(tmp2);
//    return dummthead->next;
//}
//int main()
//{
//    struct ListNode a;
//    struct ListNode  b;
//    struct ListNode  c;
//    struct ListNode  d;
//    struct ListNode  e;
//    a.val = 1;
//    b.val = 3;
//    c.val = 2;
//    d.val = 4;
//    e.val = 5;
//    a.next = &b;
//    b.next = &c;
//    c.next = &d;
//    d.next = &e;
//    e.next = NULL;
//    sortInList(&a);
//
//
//    return 0;
//}
//int min(int a, int b)
//{
//    return a > b ? b : a;
//}
//int maxArea(int* height, int heightLen) {
//    // write code here
//    int left = 0;
//    int right = heightLen - 1;
//    int S = min(height[left], height[right]) * (right - left);
//    printf("%d\n", S);
//    while (left < right)
//    {
//        if (height[right] >= height[left])
//            left++;
//        else
//            right--;
//        int tmpS = min(height[left], height[right]) * (right - left);
//        if (tmpS > S)
//            S = tmpS;
//    }
//    return S;
//}