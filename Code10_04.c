#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
//struct ListNode
//{
//	int val;
//	struct ListNode* next;
//};
//struct ListNode* intersection(struct ListNode*pheadA, struct ListNode*pheadB,int*returnSize)
//{
//	*returnSize = 0;
//	//NULLµÄÅÐ¶Ï
//	struct ListNode* cur = pheadA;
//	struct ListNode* prev = NULL;
//	struct ListNode* l1 = pheadA;
//	struct ListNode* l2 = pheadB;
//	while (l1 && l2)
//	{
//		if (l1->val == l2->val)
//		{
//			if (!prev || prev->val != l1->val)
//			{
//				cur->val = l1->val;
//				prev = cur;
//				cur = cur->next;
//				(*returnSize)++;
//			}
//			l1 = l1->next;
//			l2 = l2->next;
//		}
//		else if (l1->val < l2->val)
//			l1 = l1->next;
//		else
//			l2 = l2->next;
//	}
//	if (*returnSize == 0)
//		return NULL;
//	return pheadA;
//}
//int main()
//{
//	struct ListNode A;
//	struct ListNode B;
//	struct ListNode C;
//	struct ListNode D;
//	struct ListNode E;
//	struct ListNode F;
//	A.val = 1;
//	B.val = 2;
//	C.val = 3;
//	D.val = 3;
//	E.val = 4;
//	F.val = 4;
//	A.next = &B;
//	B.next = &C;
//	C.next = &D;
//	D.next = &E;
//	E.next = &F;
//	F.next = NULL;
//	struct ListNode a;
//	struct ListNode b;
//	struct ListNode c;
//	a.val = 2;
//	b.val = 3;
//	c.val = 4;
//	a.next = &b;
//	b.next = &c;
//	c.next = NULL;
//	int size = 0;
//	/*struct ListNode *ret=*/ intersection(&A, NULL,&size);
//	struct ListNode* ret = &A;
//	while (size--)
//	{
//		printf("%d->",ret->val);
//		ret = ret->next;
//	}
//	return 0;
//}
//#include<assert.h>
//struct BidNode
//{
//	struct BidNode* prev;
//	int val;
//	struct BidNode* next;
//};
//void Swap(struct BidNode* p)
//{
//	assert(p);
//	struct BidNode* tmp = p->next;
//	p->next = p->prev;
//	p->prev = tmp;
//}
//struct BidNode*Change(struct BidNode* p)
//{
//	assert(p);
//	struct BidNode* begin = p;
//	struct BidNode* next = NULL;
//	do{
//		next = p->next;
//		Swap(p);
//		p = next;
//	} while (p != begin);
//	return begin;
//}
//int main()
//{
//	struct BidNode a;
//	struct BidNode b;
//	struct BidNode c;
//	struct BidNode d;
//	struct BidNode e;
//	a.val = 1;
//	b.val = 2;
//	c.val = 3;
//	d.val = 4;
//	e.val = 5;
//	a.next = &b; a.prev = &e;
//	b.next = &c; b.prev = &a;
//	c.next = &d; c.prev = &b;
//	d.next = &e; d.prev = &c;
//	e.next = &a; e.prev = &d;
//	struct BidNode *ret=Change(&c);
//	do {
//		printf("%d ",ret->val);
//		ret = ret->prev;
//	} while (ret!=&c);
//	return 0;
//}
//#include <stdio.h>
//#include<stdlib.h>
//void merge(int* nums, int left, int right, int* tmp)
//{
//    if (left >= right)
//        return;
//    int mid = (right - left) / 2 + left;
//    merge(nums, left, mid, tmp);
//    merge(nums, mid + 1, right, tmp);
//    int l1 = left;
//    int l2 = mid + 1;
//    int j = 0;
//    while (l1 <= mid && l2 <= right)
//    {
//        if (nums[l1] < nums[l2])
//            tmp[j++] = nums[l1++];
//        else
//            tmp[j++] = nums[l2++];
//    }
//    while (l1 <= mid)
//        tmp[j++] = nums[l1++];
//    while (l2 <= right)
//        tmp[j++] = nums[l2++];
//    for (int i = 0; i < j; i++)
//        nums[left++] = tmp[i];
//}
//int main() {
//    char left = '[';
//    char right = 0;
//    int nums[100];
//    int i = 0;
//    while ((right = getchar()) != ']')
//    {
//        scanf("%d", nums + i++);
//    }
//    int* tmp = (int*)malloc(sizeof(int) * i);
//    merge(nums, 0, i - 1, tmp);
//    printf("%c", left);
//    for (int j = 0; j < i - 1; j++)
//        printf("%d, ", nums[j]);
//    printf("%d%c", nums[i - 1], right);
//    free(tmp);
//    tmp = NULL;
//    return 0;
//}
//#include <stdio.h>
//#include<math.h>
//int is_prime(int n)
//{
//    for (int i = 2; i < sqrt(n); i++)
//    {
//        if (n % i == 0)
//            return 0;
//    }
//    return 1;
//}
//int cmp(const void* p1, const void* p2)
//{
//    return *(int*)p1 - *(int*)p2;
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int key = n;
//    int tmp[1000];
//    int k = 0;
//    int i = 0;
//    while (key != 1)
//    {
//        i = 2;
//        while (i <= key)
//        {
//            if (key % i == 0 && is_prime(i))
//            {
//                tmp[k++] = i;
//                break;
//            }
//            i++;
//        }
//        key = key / i;
//    }
//    qsort(tmp, k, sizeof(int), cmp);
//    for (int j = 0; j < k; j++)
//        printf("%d ", tmp[j]);
//    return 0;
//}
//#include <stdio.h>
//#include<math.h>
//#include<float.h>
//int main() {
//    float a = 0.0f;
//    scanf("%f", &a);
//    int b = (int)a;
//    if (a - b < 0.5)
//        printf("%d\n", b);
//    else
//        printf("%d\n", b + 1);
//    return 0;
//}
//#include <stdio.h>
//#include<string.h>
//#define MAX_SIZE 11111112
//int main() {
//    int nums[MAX_SIZE];
//    memset(nums, 0, sizeof(int) * MAX_SIZE);
//    int index = 0;
//    int val;
//    int n = 0;
//    scanf("%d", &n);
//    while (n--)
//    {
//        scanf("%d%d", &index, &val);
//        nums[index] = nums[index] + val;
//    }
//    for (int i = 0; i < MAX_SIZE; i++)
//        if (nums[i])
//            printf("%d ", nums[i]);
//    return 0;
//}
//#include <stdio.h>
//#include<stdlib.h>
//struct Node
//{
//    int index;
//    int val;
//};
//int cmp(const void* p1, const void* p2)
//{
//    struct Node* a = (struct Node*)p1;
//    struct Node* b = (struct Node*)p2;
//    return (a->index) - (b->index);
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    struct Node arr[4] = {0};
//    for (int i = 0; i < n; i++)
//        scanf("%d%d", &(arr[i].index), &(arr[i].val));
//    int cur = 0;
//    int j = cur + 1;
//   qsort(arr, n, sizeof(struct Node)*n, cmp);
//    while (j < n)
//    {
//        if (arr[cur].index == arr[j].index)
//        {
//            arr[cur].val += arr[j].val;
//        }
//        else
//        {
//            cur++;
//            arr[cur] = arr[j];
//        }
//        j++;
//    }
//    for (int i = 0; i <= cur; i++)
//        printf("%d %d\n", arr[i].index, arr[i].val);
//
//    return 0;
//}