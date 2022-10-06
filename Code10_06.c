#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Stack.h"
//#define SZ 4000
//void LargeNumMul(char const* p1, const char* p2, char* nums, int* returnSize)
//{
//	int len1 = strlen(p1);
//	int len2 = strlen(p2);
//	int l1 = len1 - 1;
//	int l2 = len2 - 1;
//	int BeginCur = SZ - 1;
//	int cur = 0;
//	int MulTail = 0;
//	int SumTail = 0;
//	for (int i = l2; i >= 0; i--)
//	{
//		cur = BeginCur;
//		 MulTail = 0;
//		 SumTail = 0;
//		for (int j = l1; j >= 0; j--)//我们是将nums[cur]+tmp把每个加数的对应位置相加，循环只能解决不产生进位的tmp，所以我们下一个while循环是处理产生进位的情况
//		{
//			int tmp = ((p1[j] - '0') * (p2[i] - '0') + MulTail) % 10;
//			MulTail = ((p1[j] - '0') * (p2[i] - '0') + MulTail) / 10;
//			int prev = nums[cur] - '0';
//			nums[cur] = (tmp + prev + SumTail) % 10 + '0';
//			SumTail= (tmp + prev + SumTail) / 10;
//			cur--;
//		}
//		while (MulTail)//MulTail不为0说明乘法还没算完，该位还有进位，进位也会产生一个tmp，
//		{//（可以这样理解就是有一个加数还没有加完）
//			int tmp = (MulTail) % 10;//乘法产生个位
//			MulTail = (MulTail) / 10;//乘法产生的进位
//			int prev = nums[cur] - '0';
//			nums[cur] = (tmp + prev + SumTail) % 10 + '0';//加法产生的个位
//			SumTail = (tmp + prev + SumTail) / 10;//加法产生的进位
//			cur--;
//		}
//		while (SumTail)//SumTail不为0说明加法还没算完，还有进位没算（）
//		{//（加数都加完了，会产生进位，将进位也要写下来）
//			nums[cur--] = (SumTail) % 10 + '0';
//			SumTail = SumTail / 10;
//		}
//		BeginCur--;
//	}
//	*returnSize = cur;
//}
//int main()
//{
//	char ch1[201] = "673";
//	char ch2[201] = "738";
//	char nums[SZ] = "0";
//	scanf("%s%s",ch1,ch2);
//	for (int i = 0; i < SZ; i++)
//	{
//		nums[i] = '0';
//	}//初始化结果数组;
//	int ret = 0;
//	LargeNumMul(ch1,ch2,nums,&ret);
//	for (int j = ret+1; j < SZ; j++)
//		printf("%c",nums[j]);
//
//	return 0;
//}
//char* addStrings(char* num1, char* num2) {
//    int len1 = strlen(num1);
//    int len2 = strlen(num2);
//    int LEN = len1 + len2;
//    char* sum = (char*)malloc(sizeof(char) * LEN+10);
//    int l1 = len1 - 1;
//    int l2 = len2 - 1;
//    int tail = 0;
//    int k = 0;
//    while (l1 >= 0 && l2 >= 0)
//    {
//        sum[k] = (tail + num1[l1] + num2[l2] - '0' - '0') % 10 + '0';
//        tail = (tail + num1[l1] + num2[l2] - '0' - '0') / 10;
//        l1--;
//        l2--;
//        k++;
//    }
//    while (l1 >= 0)
//    {
//        sum[k++] = (tail + num1[l1] - '0') % 10 + '0';
//        tail = (tail + num1[l1] - '0') / 10;
//        l1--;
//    }
//    while (l2 >= 0)
//    {
//        sum[k++] = (tail + num2[l2] - '0') % 10 + '0';
//        tail = (tail + num2[l2] - '0') / 10;
//        l2--;
//    }
//    while (tail)
//    {
//        sum[k++] = tail % 10 + '0';
//        tail /= 10;
//    }
//    sum[k] = '\0';
//    int left = 0;
//    int right = k - 1;
//    while (left < right)
//    {
//        char tmp = sum[left];
//        sum[left] = sum[right];
//        sum[right] = tmp;
//        left++;
//        right--;
//    }
//    return sum;
//}
//int main(void)
//{
//    char* p1 = "11";
//    char* p2 = "123";
//    char ch1[100] = { 0 };
//    char ch2[100] = { 0 };
//    scanf("%s%s",ch1,ch2);
//    char*ret= addStrings(ch1, ch2);
//    printf(ret);
//    free(ret);
//    return 0;
//}
//void Medium_order_traversal(struct TreeNode* root, int* returnSize, int* nums)
//{
//    if (!root)
//        return;
//    Medium_order_traversal(root->left, returnSize, nums);
//    nums[(*returnSize)++] = root->val;
//    Medium_order_traversal(root->right, returnSize, nums);
//}
//int* inorderTraversal(struct TreeNode* root, int* returnSize) {
//    // write code here
//    if (!root)
//    {
//        *returnSize = 0;
//        return NULL;
//    }
//    static int arr[1000] = { 0 };
//    *returnSize = 0;
//    Medium_order_traversal(root, returnSize, arr);
//    return arr;
//}
//void Post_sequence_traversal(struct TreeNode* root, int* returnSize, int* nums)
//{
//    if (!root)
//        return;
//    Post_sequence_traversal(root->left, returnSize, nums);
//    Post_sequence_traversal(root->right, returnSize, nums);
//    nums[(*returnSize)++] = root->val;
//}
//int* postorderTraversal(struct TreeNode* root, int* returnSize) {
//    // write code here
//    if (!root)
//    {
//        *returnSize = 0;
//        return NULL;
//    }
//    static int arr[1000] = { 0 };
//    *returnSize = 0;
//    Post_sequence_traversal(root, returnSize, arr);
//    return arr;
//}
//int MAX(int a, int b)
//{
//    return a > b ? a : b;
//}
//int maxDepth(struct TreeNode* root) {
//    // write code here
//    if (!root)
//        return 0;
//    return 1 + MAX(maxDepth(root->left), maxDepth(root->right));
//}
//#include<time.h>
//int DigPit(int* nums, int left, int right)
//{
//	int key = nums[left];
//	int pit = left;
//	while (left < right)
//	{
//		while ((left < right) && nums[right] >= key)
//			right--;
//		nums[pit] = nums[right];
//		pit = right;
//		while ((left < right) && nums[left] < key)
//			left++;
//		nums[pit] = nums[left];
//		pit = left;
//	}
//	nums[left] = key;
//	return right;
//}
//void QuickSort(int* nums, int len)
//{
//	Stack tmp;
//	StackInit(&tmp);
//	StackPush(&tmp, len - 1);
//	StackPush(&tmp,0);
//	int left = 0;
//	int right = 0;
//	int mid = 0;
//	while (!StackEmpty(&tmp))
//	{
//		left = StackTop(&tmp);
//		StackPop(&tmp);
//		right = StackTop(&tmp);
//		StackPop(&tmp);
//		mid=DigPit(nums,left,right);
//		if (mid + 1 < right)
//		{
//			StackPush(&tmp, right);
//			StackPush(&tmp, mid + 1);
//		}
//		if (left < mid - 1)
//		{
//			StackPush(&tmp, mid-1);
//			StackPush(&tmp, left);
//		}
//	
//	}
//	StackDestroy(&tmp);
//}
//#define SIZE 100000
//void test1()
//{
//	int *arr=(int*)calloc(SIZE,sizeof(int));
//	if (!arr)
//	{
//		printf("NULL");
//		return;
//	}
//	/*for (int i = 0; i < SIZE; i*=100)
//	{
//		arr[i] = rand();
//	}*/
//	int len = SIZE;
//	clock_t begin = clock();
//	QuickSort(arr,len);
//	clock_t end = clock();
//	printf("QuickSort(ms):%ld\n",end-begin);
//	/*for (int i = 0; i < len; i++)
//	{
//		printf("%d ",arr[i]);
//	}*/
//}
//int main()
//{
//	srand((size_t)time(NULL));
//	test1();
//	return 0;
//}