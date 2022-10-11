#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 //写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明

//考察：offsetof宏的实现

//offsetof(type, member)
//struct S
//{
//	char a;//0
//	int b;//1~3 4~7
//	double c;//8~15
//};
////#define offsetof(s,m) ((size_t)&(((s*)0)->m))
//#define my_offsetof(type,member) ((size_t)(&(((type*)0)->member)))
//int main()
//{
//	printf("%zd\n",sizeof(struct S));
//	printf("%d\n", offsetof(struct S, b));
//	printf("%d\n",my_offsetof(struct S,b));
//	return 0;
//}
//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。
//int main()
//{
//	return 0;
//}
//int MoreThanHalfNum_Solution(int* numbers, int numbersLen) {
//    // write code here
//    int i = 1;
//    int key = numbers[0];
//    int count = 1;
//    while (i < numbersLen)
//    {
//        if (numbers[i] == key)
//            count++;
//        else
//            count--;
//        i++;
//        if (!count)
//        {
//            key = numbers[i];
//            count = 1;
//            i++;
//        }
//    }
//    return key;
//}
//int** rotateMatrix(int** mat, int matRowLen, int* matColLen, int n, int* returnSize, int** returnColumnSizes) {
//    // write code here
//    int* tmp[matRowLen];
//    for (int i = 0; i < matRowLen; i++)
//    {
//        tmp[i] = (int*)malloc(sizeof(int) * (*matColLen));
//    }
//    *returnColumnSizes = (int*)malloc(sizeof(int) * matRowLen);
//    for (int i = 0; i < matRowLen; i++)
//        (*returnColumnSizes)[i] = matRowLen;
//    for (int r = 0; r < matRowLen; r++)
//        for (int c = 0; c < *matColLen; c++)
//        {
//            tmp[c][*matColLen - r - 1] = mat[r][c];
//        }
//    for (int r = 0; r < matRowLen; r++)
//        for (int c = 0; c < *matColLen; c++)
//        {
//            mat[r][c] = tmp[r][c];
//        }
//    *returnSize = matRowLen;
//    for (int i = 0; i < matRowLen; i++)
//        free(tmp[i]);
//    return mat;
//}
//int jumpFloor(int number) {
//    // write code here
//    if (number == 0 || number == 1 || number == 2)
//        return number;
//    return jumpFloor(number - 1) + jumpFloor(number - 2);
//}
//#include <iostream>
//using namespace std;
//void Swap(int* a, int* b)
//{
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//int main() {
//    int m = 0;
//    int n = 0;
//    cin >> m;
//    cin >> n;
//    Swap(&m, &n);
//    cout << m << " " << n << endl;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//	int len = 6;
//	int arr[6] = { 0 };
//	for (int i = 0; i < len; i++)
//		cin >> arr[i];
//	for (int i = 0; i < len; i++)
//		cout << arr[i] << " ";
//}
//#include <stdio.h>
//void MaoPao(int* nums, int len)
//{
//    for (int i = 0; i < len; i++)
//    {
//        for (int j = 0; j < len - i - 1; j++)
//        {
//            if (nums[j] > nums[j + 1])
//            {
//                int tmp = nums[j];
//                nums[j] = nums[j + 1];
//                nums[j + 1] = tmp;
//            }
//        }
//    }
//}
//int main() {
//
//    int len = 0;
//    scanf("%d", &len);
//    int arr[len];
//    for (int i = 0; i < len; i++)
//        scanf("%d", arr + i);
//    MaoPao(arr, len);
//    for (int i = 0; i < len; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}
//#include <stdio.h>
//int cal(int* nums, int len)
//{
//    int sum = 0;
//    for (int i = 0; i < len; i++)
//        sum += nums[i];
//    return sum;
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    for (int i = 0; i < n; i++)
//        scanf("%d", arr + i);
//    printf("%d\n", cal(arr, n));
//
//    return 0;
//}