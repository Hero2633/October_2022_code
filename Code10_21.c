#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//size_t countLen(struct ListNode* head)
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
//struct ListNode* insertionSortList(struct ListNode* head) {
//    int len = countLen(head);
//    struct ListNode* tmp[len];
//    int i = 0;
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        tmp[i++] = cur;
//        cur = cur->next;
//    }
//    for (int j = 0; j < len - 1; j++)
//    {
//        int end = j;
//        struct ListNode* key = tmp[end + 1];
//        while (end >= 0)
//        {
//            if (key->val < tmp[end]->val)
//            {
//                tmp[end + 1] = tmp[end];
//                end--;
//            }
//            else
//                break;
//        }
//        tmp[end + 1] = key;
//    }
//    struct ListNode* tail = NULL;
//    for (int i = 0; i < len; i++)
//    {
//
//        if (!tail)
//        {
//            tail = tmp[i];
//            tail->next = NULL;
//        }
//        else
//        {
//            tail->next = tmp[i];
//            tail = tmp[i];
//            tail->next = NULL;
//        }
//    }
//    return tmp[0];
//}
//size_t countLen(struct ListNode* head)
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
//struct ListNode* insertionSortList(struct ListNode* head) {
//    int len = countLen(head);
//    struct ListNode tmp = { 0 };
//    struct ListNode* dummyhead = &tmp;
//    dummyhead->next = head;
//    struct ListNode* prev = dummyhead;
//    struct ListNode* begin = head;
//    struct ListNode* end = head;
//    struct ListNode* cur = head;
//    int i = 0;
//    struct ListNode* next = NULL;
//    struct ListNode* key = NULL;
//    for (i = 0; i < len - 1; i++)
//    {
//        //����;
//        prev = dummyhead;
//        begin = dummyhead->next;
//        end = begin;
//        int step = i;
//        while (step--)
//            end = end->next;
//        //����������ֵ��
//        key = end->next;
//        next = key->next;
//        end->next = next;//��key�������а�������������Ӻ��������
//        //��ʼ�Ƚ�
//        cur = begin;
//        while (cur != end->next)
//        {
//            if (cur->val > key->val)//�ҵ��˺���λ�ã�����cur��ǰ��
//                break;
//            else//λ�ò���ȷ
//            {
//                prev = cur;
//                cur = cur->next;
//            }
//        }
//        prev->next = key;
//        key->next = cur;
//    }
//    return dummyhead->next;
//}

 // Definition for singly-linked list.
//  struct ListNode {
//      int val;
//      struct ListNode *next;
//  };
// 
//size_t countLen(struct ListNode* head)
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
//
//void QuickSort(struct ListNode** tmp, int left, int right)
//{
//    if (left >= right)
//        return;
//    int dig = left;
//    int begin = left;
//    int end = right;
//    struct ListNode* key = tmp[dig];
//    while (begin < end)
//    {
//        �ұȿ�С��
//        while (begin < end && (tmp[end]->val > key->val))
//            end--;
//        ��begin��ֵ�ӽ����Ȼ��ӻ�λ��;
//        tmp[dig] = tmp[end];
//        dig = end;
//        while (begin < end && (tmp[begin]->val) <= key->val)//�ұȿӴ��
//            begin++;
//        �ҵ���
//        tmp[dig] = tmp[begin];
//        dig = begin;
//    }
//    tmp[end] = key;
//    QuickSort(tmp, left, end - 1);
//    QuickSort(tmp, end + 1, right);
//}
//struct ListNode* sortList(struct ListNode* head) {
//    if (!head)
//        return head;
//    int len = countLen(head);
//    struct ListNode* tmp[4];
//    struct ListNode* cur = head;
//    for (int i = 0; i < len; i++)
//    {
//        struct ListNode* next = cur->next;
//        tmp[i] = cur;
//        cur = next;
//    }
//    QuickSort(tmp, 0, len - 1);
//    struct ListNode* tail = NULL;
//    for (int i = 0; i < len; i++)
//    {
//        if (tail == NULL)
//            tail = tmp[i];
//        else
//        {
//            tail->next = tmp[i];
//            tail = tmp[i];
//        }
//        tail->next = NULL;
//    }
//    return tmp[0];
//}
//int main()
//{
//    struct ListNode a;
//    struct ListNode b;
//    struct ListNode c;
//    struct ListNode d;
//    a.val = 3;
//    b.val = 2;
//    c.val = 4;
//    d.val = 3;
//    a.next = &b;
//    b.next = &c;
//    c.next = NULL;
//    c.next = &d;
//    d.next = NULL;
//    sortList(&a);
//
//    return 0;
//}