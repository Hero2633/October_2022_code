#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
struct ListNode
{
    int val;
    struct ListNode* next;
};
//void rollback(struct ListNode* left)
//{
//    struct ListNode* next = NULL;
//    struct ListNode* tail = NULL;
//    while (left)
//    {
//        next = left->next;
//        left->next = tail;
//        tail = left;
//        left = next;
//    }
//}
//struct ListNode* reverseKGroup(struct ListNode* head, int k) {
//    // write code
//    struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* prev = dummyhead;
//    struct ListNode* begin = head;
//    dummyhead->next = head;
//    struct ListNode* end = begin;
//    struct ListNode* next = NULL;
//    int step = 0;
//    while (end)
//    {
//        step++;
//        if (step == k)
//        {
//            next = end->next;
//            end->next = NULL;//断开链表
//            rollback(begin);//反转
//            prev->next = end;
//            begin->next = next;
//            prev = begin;
//            begin = next;
//            end = begin;
//            step = 0;
//        }
//        else
//            end = end->next;
//    }
//    if (step)
//    {
//        prev->next = begin;
//    }
//    return dummyhead->next;
//}
//struct ListNode* Merge(struct ListNode* pHead1, struct ListNode* pHead2) {
//    // write code here
//    struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    dummyhead->next = NULL;
//    struct ListNode* cur = dummyhead;
//    struct ListNode* l1 = pHead1;
//    struct ListNode* l2 = pHead2;
//    while (l1 && l2)
//    {
//        if (l1->val < l2->val)
//        {
//            cur->next = l1;
//            l1 = l1->next;
//            cur = cur->next;
//            cur->next = NULL;
//        }
//        else
//        {
//            cur->next = l2;
//            l2 = l2->next;
//            cur = cur->next;
//            cur->next = NULL;
//        }
//    }
//    if (l1)
//    {
//        cur->next = l1;
//    }
//    if (l2)
//        cur->next = l2;
//    return dummyhead->next;
//}
//size_t COUNT(struct ListNode* head)
//{
//    if (head == NULL)
//        return 0;
//    int count = 0;
//    while (head)
//    {
//        count++;
//        head = head->next;
//    }
//    return count;
//}
//struct ListNode* reverse_(struct ListNode* head)
//{
//    struct ListNode* tail = NULL;
//    struct ListNode* next = NULL;
//    while (head)
//    {
//        next = head->next;
//        head->next = tail;
//        tail = head;
//        head = next;
//    }
//    return tail;
//}
//bool isPail(struct ListNode* head) {
//    // write code here
//    int count = COUNT(head);
//    if (count == 1 || count == 0)
//        return true;
//    int mid = count / 2;
//    struct ListNode* begin1 = head;
//    struct ListNode* end1 = head;
//    struct ListNode* begin2 = NULL;
//    while (--mid)
//    {
//        end1 = end1->next;
//    }
//    if (count % 2)
//    {
//        begin2 = end1;
//        begin2 = begin2->next->next;
//        end1->next = NULL;
//    }
//    else
//    {
//        begin2 = end1;
//        begin2 = begin2->next;
//        end1->next = NULL;
//    }
//    begin2 = reverse_(begin2);
//    while (begin1)
//    {
//        if (begin1->val == begin2->val)
//        {
//            begin1 = begin1->next;
//            begin2 = begin2->next;
//        }
//        else
//            return false;
//    }
//    return true;
//}
//size_t COUNT(struct ListNode* head)
//{
//    if (!head)
//        return 0;
//    struct ListNode* tail = NULL;
//    int count = 0;
//    while (head)
//    {
//        count++;
//        head = head->next;
//    }
//    return count;
//}
//struct ListNode* reverse_(struct ListNode* head)
//{
//    if (!head)
//        return head;
//    struct ListNode* tail = NULL;
//    struct ListNode* next = NULL;
//    while (head)
//    {
//        next = head->next;
//        head->next = tail;
//        tail = head;
//        head = next;
//    }
//    return tail;
//}
//bool isPail(struct ListNode* head) {
//    // write code here
//    int mid = 0;
//    mid = COUNT(head);
//    mid = mid / 2;
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//    while (mid--)
//    {
//        fast = fast->next;
//    }
//    while (fast)
//    {
//        slow = slow->next;
//        fast = fast->next;
//    }
//    slow = reverse_(slow);
//    while (slow)
//    {
//        if (slow->val == head->val)
//        {
//            head = head->next;
//            slow = slow->next;
//        }
//        else
//            return false;
//    }
//    return true;
//}