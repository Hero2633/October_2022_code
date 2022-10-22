#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdbool.h>
//#define FESTIVAL ("比特")
//#define BeginYear 2022
//#define BeginMonth 5
//#define BeginDay 31
//
//bool is_leper(int year)
//{
//	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
//}
//int FindDay(int year, int month, int day)
//{
//	int DAY[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int daysum = 0;
//	if (is_leper(year))
//		DAY[2] = 29;
//	for (int cur = 0; cur < month; cur++)
//	{
//		daysum += DAY[cur];
//	}
//	daysum += day;
//	return daysum;
//}
//int main()
//{
//	int EndYear = 0;
//	int EndMonth = 0;
//	int EndDay = 0;
//	printf("请输入当前时间:");
//	scanf("%4d%2d%2d", &EndYear, &EndMonth, &EndDay);
//	//计算一下开始时间是当年的第几天;
//	int x1 = FindDay(BeginYear,BeginMonth,BeginDay);
//	int DaySum = 0;
//	//计算开始年到结束年有多少天
//	for (int cur = BeginYear; cur < EndYear; cur++)
//	{
//		if (is_leper(cur))
//			DaySum += 366;
//		else
//			DaySum += 365;
//	}
//	//计算结束时间是当年的第几天；
//	int x2 = FindDay(EndYear,EndMonth,EndDay);
//	//重新计算时间；
//	DaySum = DaySum - x1 + x2;
//	printf("您已加入 %s %d 天!\n", FESTIVAL, DaySum);
//	/*if(DaySum>=0)
//	printf("超过%s已经 %d 天!\n",FESTIVAL,DaySum);
//	else */
//		
//	return 0;
//}
//struct ListNode* deleteMiddle(struct ListNode* head) {
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//    struct ListNode tmp = { 0 };
//    struct ListNode* dummyheda = &tmp;
//    dummyheda->next = slow;
//    struct ListNode* prev = dummyheda;
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        prev = slow;
//        slow = slow->next;
//    }
//    prev->next = slow->next;
//    return dummyheda->next;
//}
//struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
//    if (!head)
//        return head;
//    struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    dummyhead->next = head;
//    struct ListNode* prev = dummyhead;
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//    while (n--)
//        fast = fast->next;
//    while (fast)
//    {
//        fast = fast->next;
//        prev = slow;
//        slow = slow->next;
//    }
//    prev->next = slow->next;
//    return dummyhead->next;
////}
//struct ListNode
//{
//    int val;
//    struct ListNode* next;
//};
//struct ListNode* MergeList(struct ListNode* head)
//{
//    if (head->next == NULL)//只剩一个节点时停止递归，此时已经有序了
//        return head;
//    struct ListNode tmp = { 0 };
//    struct ListNode* dummyhead = &tmp;
//    dummyhead->next = head;
//    struct ListNode* prev = dummyhead;
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//    while (fast && fast->next)//寻找中间链表，好把链表分组
//    {
//        fast = fast->next->next;
//        prev = slow;
//        slow = slow->next;
//    }
//    prev->next = NULL;//将2个链表分别单独出来;
//    printf("head=%d slow=%d\n", head->val, slow->val);
//    struct ListNode* NewHead1 = MergeList(dummyhead->next);//head~NULL
//    struct ListNode* NewHead2 = MergeList(slow);//slow~NULL
//    struct ListNode tmp2 = { 0 };
//    struct ListNode* Newhead0 = &tmp2;
//    struct ListNode* cur = Newhead0;
//    struct ListNode* next = NULL;
//    //printf("NewHead2->val%d\n",NewHead2->val);
//    //printf("NewHead2-next->->val%d\n",NewHead2->next->val);
//    while (NewHead1 && NewHead2)//开始给两个有序链表合并
//    {
//        if (NewHead1->val <= NewHead2->val)
//        {
//            next = NewHead1->next;
//            cur->next = NewHead1;
//            cur = NewHead1;
//            NewHead1 = next;
//        }
//        else
//        {
//            next = NewHead2->next;
//            cur->next = NewHead2;
//            cur = NewHead2;
//            NewHead2 = next;
//        }
//    }
//    if (NewHead1)
//        cur->next = NewHead1;
//    if (NewHead2)
//        cur->next= NewHead2;
//    return Newhead0->next;
//}
//struct ListNode* sortList(struct ListNode* head) {
//    if (!head)
//        return head;
//    return MergeList(head);
//}
//int main()
//{
//    struct ListNode a;
//    struct ListNode b;
//    struct ListNode c;
//    struct ListNode d;
//    a.val = 4;
//    b.val = 2;
//    c.val = 1;
//    d.val = 3;
//    a.next = &b;
//    b.next = &c;
//    c.next = &d;
//    d.next = NULL;
//    sortList(&a);
//
//    return 0;
//}