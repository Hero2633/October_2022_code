//#define  _CRT_SECURE_NO_WARNINGS 0
//#include<stdio.h>
//#include<stdbool.h>
//#include<math.h>
//#include<stdlib.h>
//#include<string.h>
//#include"Queue.h"

//void BFS(BTree*root)
//{
//	if (!root)
//		return;
//	Queue tmp = { 0 };
//	QueueInit(&tmp);
//	QueuePush(&tmp,root);
//	while (!QueueEmpty(&tmp))
//	{
//		BTree* head = QueueFront(&tmp);
//		BTree* left = head->left;
//		BTree* right = head->right;
//		if (left)
//			QueuePush(&tmp,left);
//		if(right)
//			QueuePush(&tmp, right);
//		printf("%d ",head->val);
//		QueuePop(&tmp);
//	}
//	QueueDestroy(&tmp);
//}
//bool isCompleteTree(BTree* root)
//{
//	if (!root)
//		return true;
//	Queue tmp = { 0 };
//	QueueInit(&tmp);
//	QueuePush(&tmp, root);
//	BTree* cur = root;
//	while (1)
//	{
//		cur = QueueFront(&tmp);
//		if (!cur)
//			break;
//		QueuePush(&tmp,cur->left);
//		QueuePush(&tmp,cur->right);
//		QueuePop(&tmp);
//	}
//	while (!QueueEmpty(&tmp))
//	{
//		cur = QueueFront(&tmp);
//		if (!cur)
//			QueuePop(&tmp);
//		else
//			return false;
//	}
//	QueueDestroy(&tmp);
//	return true;
//}
//int main()
//{
//	BTree a;
//	BTree b;
//	BTree c;
//	BTree d;
//	BTree e;
//	BTree f;
//	BTree g;
//	BTree h;
//	a.right = &c;a.left = &b;
//	b.left = &d; b.right = &e;
//	c.left = &f; c.right = &g;
//	d.left = NULL; d.right = NULL;
//	e.left = NULL; e.right = NULL;
//	f.left = NULL; f.right = NULL;
//	g.left = &h; g.right = NULL;
//	h.left = NULL; h.right = NULL;
//	a.val = 1;
//	b.val = 2;
//	c.val = 3;
//	d.val = 4;
//	e.val = 5;
//	f.val = 6;
//	g.val = 7;
//	h.val = 8;
//	//BFS(&a);
//	bool ret = isCompleteTree(&a);
//	printf("%d\n",ret);
//	return 0;
//}
//#include"Stack.h"
//bool isValid(char* s) {
//    Stack ST = { NULL,0,0 };
//    while (*s)
//    {
//        if (*s == '[' || *s == '{' || *s == '(')
//        {
//            StackPush(&ST, *s);
//            s++;
//        }
//
//        else
//        {
//            if (StackEmpty(&ST))
//            {
//                return false;
//            }
//            STDataType ret = StackTop(&ST);
//            if ((ret == '{' && *s != '}') || (ret == '[' && *s != ']') || (ret == '(' && *s != ')'))
//            {
//                StackDestroy(&ST);
//                return false;
//            }
//
//            else
//            {
//                StackPop(&ST);
//                s++;
//            }
//
//        }
//
//    }
//
//    bool ret = StackEmpty(&ST);
//    StackDestroy(&ST);
//    return ret;
//}
//
//
//int main()
//{
//    char ch[] = "()[]{}";
//    isValid(ch);
//    return 0;
//}
//int missingNumber(int* nums, int numsSize) {
//    int sum = (0 + numsSize) * (numsSize + 1) / 2;
//    int ret = 0;
//    for (int i = 0; i < numsSize; i++)
//        ret += nums[i];
//    return sum - ret;
////}
////bool isUgly(int n) {
////    if (n < 1)
////        return false;
////    while (n % 5 == 0)
////        n /= 5;
////    while (n % 3 == 0)
////        n /= 3;
////    while (n % 2 == 0)
////        n /= 2;
////    return n == 1;
////}
//bool isUgly(int n) {
//    if (n < 1)
//        return false;
//    while (n % 5 == 0)
//        n /= 5;
//    while (n % 3 == 0)
//        n /= 3;
//    while (n % 2 == 0)
//        n /= 2;
//    return n == 1;
//}
//int nthUglyNumber(int n) {
//    int count = 0;
//    int i = 1;
//    while (count != n)
//    {
//        if (isUgly(i))
//            count++;
//        i++;
//    }
//    return count;
//}
//int main()
//{
//    nthUglyNumber(10);
//    return 0;
//}
//void swap(int* a, int* b)
//{
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//void sortColors(int* nums, int numsSize) {
//    int cur = 0;
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == 0)
//        {
//            swap(nums + cur, nums + i);
//            cur++;
//        }
//    }
//    for (i = cur; i < numsSize; i++)
//    {
//        if (nums[i] == 1)
//        {
//            swap(nums + cur, nums + i);
//            cur++;
//        }
//    }
//}