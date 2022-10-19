#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

 //* Definition for singly-linked list.
//  struct ListNode {
//      int val;
//     struct ListNode *next;
//  };
//
//bool hasCycle(struct ListNode* head) {
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//    bool flag = true;
//    int len = 2;
//    while (1)
//    {
//        while (fast && len--)
//        {
//            fast = fast->next;
//        }
//        if (!fast)
//        {
//            flag = false;
//            break;
//        }
//        len = 2;
//        slow = slow->next;
//        if (slow == fast)
//        {
//            flag = true;
//            break;
//        }
//    }
//    return flag;
//}
//int MAx(int a, int b)
//{
//    return a > b ? a : b;
//}
//int maxDepth(struct TreeNode* root) {
//
//    if (!root)
//        return 0;
//    return MAx(1 + maxDepth(root->left), 1 + maxDepth(root->right));
//}
//int climbStairs(int n) {
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    n = n - 2 + 1;
//    while (n--)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//    }
//    return c;
//}
//int Fibc(int n)
//{
//	
//	int a = -1;
//	int b = 1;
//	int c = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret=Fibc(n);
//	printf("%d\n",ret);
//	return 0;
//}
//bool isPowerOfThree(int n) {
//    if (n == 1)
//        return true;
//    else if (n % 3 || n == 0)
//        return false;
//    return isPowerOfThree(n / 3);
//}
//bool is_primes(int n)
//{
//    if (n == 1)
//        return false;
//    for (int j = 2; j <= sqrt(n); j++)
//    {
//        if (n % j == 0)
//            return false;
//    }
//    return true;
//}
//int countPrimes(int n) {
//    int count = 0;
//    int i = 0;
//    for (i = 1; i < n; i++)
//    {
//        if (is_primes(i))
//            count++;
//    }
//    return count;
//}
//int countPrimes(int n) {
//    if (n <= 2)
//        return 0;
//    int *isPrimes=(int*)calloc(n,sizeof(int));
//    //memset(isPrimes, -1, sizeof(isPrimes));
//    for (int j = 2; j <= sqrt(n); j++)
//    {
//        if (!isPrimes[j])
//        {
//            // printf("j=%d\n",j);
//            for (int i = j * j; i < n; i++)
//            {
//                if (i % j == 0 && i != j)
//                {
//                    isPrimes[i] = 1;
//                    //printf("i=%d\n", i);
//                }
//            }
//        }
//    }
//    int count = 0;
//    for (int i = 2; i < n; i++)
//        if (!isPrimes[i])
//            count++;
//    return count;
//}
//int main()
//{
//    countPrimes(636381);
//    return 0;
//}