#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#define SIZE 100000000
//void Merge1(int* nums, int left, int right, int* tmp)
//{
//	if (left >= right)
//		return;
//	int mid = (right - left) / 2 + left;
//	Merge1(nums,left,mid,tmp);
//	Merge1(nums,mid+1,right,tmp);
//	int l1 = left;
//	int l2 = mid + 1;
//	int k = 0;
//	while (l1 <= mid && l2 <= right)
//	{
//		if (nums[l1] <= nums[l2])
//			tmp[k++] = nums[l1++];
//		else
//			tmp[k++] = nums[l2++];
//	}
//	while (l1 <= mid)
//		tmp[k++] = nums[l1++];
//	while (l2 <= right)
//		tmp[k++] = nums[l2++];
//	for (int i = 0; i < k; i++)
//		nums[left++] = tmp[i];
//}
//void test1()//递归实现归并排序
//{
//	/*int nums[] = { 26,12,3,49,49,48,37,40,29,35,10 };
//	int len = sizeof(nums) / sizeof(int);*/
//	int* nums = (int*)calloc(SIZE, sizeof(int));
//	//int len = sizeof(nums) / sizeof(int);
//	int len = SIZE;
//	if (!nums)
//		return;
//	for (int i = 0; i < len; i += 10)
//	{
//		nums[i] = rand();
//	}
//	int* tmp = (int*)malloc(sizeof(int) * len);
//	if (!tmp)
//		return;
//	/*int* tmp = (int*)malloc(sizeof(int) * len);
//	if (!tmp)
//		return;*/
//	clock_t begin = clock();
//	Merge1(nums,0,len-1,tmp);
//	clock_t end = clock();
//	free(tmp);
//	free(nums);
//	printf("用递归实现的归并排序:%ldms\n",end-begin);
//	/*for (int i = 0; i < len; i++)
//		printf("%d ",nums[i]);*/
//}
//void Merge2_(int *nums, int begin1, int end1, int begin2, int end2,int *tmp)
//{
//	int k = 0;//保证传进来的都是有效区间
//	int left = begin1;
//	while (begin1 <= end1 && begin2 <= end2)
//	{
//		if (nums[begin1] <= nums[begin2])
//			tmp[k++] = nums[begin1++];
//		else
//			tmp[k++] = nums[begin2++];
//	}
//	while (begin1 <= end1)
//		tmp[k++] = nums[begin1++];
//	while (begin2 <= end2)
//		tmp[k++] = nums[begin2++];
//	for (int i = 0; i < k; i++)
//		nums[left++] = tmp[i];
//}
//void Merge2(int* nums, int left, int right, int* tmp)
//{
//	int len = right + 1;
//	int gap = 1;
//	int i = 0;
//	int begin1 = 0;
//	int end1 = 0;
//	int begin2 = 0;
//	int end2 = 0;
//	while (gap < len)
//	{
//		for (i = 0; i < len; i += 2 * gap)
//		{
//			begin1 = i;
//			end1 = i + gap - 1;
//			if (end1 >= len)//左区间不完全存在,右区间肯定不存在
//				end1 = len - 1;
//			begin2 = i + gap;
//			end2 = 2 * gap + i - 1;
//			if (begin2 >= len)//左区间存在(包括完全存在和部分存在)，右区间不存在
//			{
//				///begin2 = end2 + 1;//这样写的目的是不让右区间参与归并，只让左区间参与归并
//				break;//但是这样做就是将原数组拷贝到tmp数组中，在拷会原数组，没有什么意义，干脆直接break掉不去归并，还能节省一点时间
//			}
//			if (end2 >= len)//左区间存在，右区间不完全存在
//				end2 = len - 1;
//			Merge2_(nums, begin1, end1, begin2, end2, tmp);//只有左区间完全存在，右区间完全存在；
//			                                               //只有左区间完全存在，右区间部分存在；
//			                                               //这两种情况会参于归并，其它情况都不用参与归并
//		}
//		gap *= 2;
//	}
//
//}
//void test2()//非递归实现归并排序
//{
//	//int nums[] = { 9,8,7,6,5,4,3,2,1,0,-1,-2,-3,-4,-5,-6,0 };
//	int* nums = (int*)calloc(SIZE, sizeof(int));
//	//int len = sizeof(nums) / sizeof(int);
//	int len = SIZE;
//	if (!nums)
//		return;
//	for (int i = 0; i < len; i += 10)
//	{
//		nums[i] = rand();
//	}
//	int* tmp = (int*)malloc(sizeof(int) * len);
//	if (!tmp)
//		return;
//	clock_t begin = clock();
//	Merge2(nums, 0, len - 1, tmp);
//	clock_t end = clock();
//	free(tmp);
//	free(nums);
//	printf("非递归实现的归并排序:%ldms\n", end - begin);
//	/*for (int i = 0; i < len; i++)
//		printf("%d ", nums[i]);*/
//}
//int main()
//{
//	srand((size_t)time(NULL));
//	test1();
//	test2();
//	return 0;
//}
//#define STEP 10
//void game()
//{
//	int countRight = 0;
//	int x = 0;
//	int y = 0;
//	int right = 0;
//	int step = STEP;
//	clock_t begin = clock();
//	while (step)
//	{
//		x = rand() % 100;
//		y = rand() % 100;
//		right = x + y;
//		printf("%2d+%-2d=", x, y);
//		int sum = 0;
//		scanf("%d", &sum);
//		if (sum == right)
//			countRight++;
//		step--;
//	}
//	clock_t end=clock();
//	printf("耗时%.2lfs,正确了%d道,错误了%d道\n",(end-begin)/1000.0,countRight,STEP-countRight);
//}
//int main()
//{
//	srand((size_t)time(NULL));
//	game();
//	return 0;
//}