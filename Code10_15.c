#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//#define PRINTF(x) (((x&(0xaaaaaaaa))>>1)+((x&(0x55555555))<<1))
//int main()
//{
//	int a = -1;
//	a=PRINTF(a);
//	printf("%d\n",a);
//	return 0;
//}
//int Max(int a, int b)
//{
//	return a > b ? a : b;
//}
//#define MAX(a,b) (a > b ? a : b)
//int main()
//{
//	int a = 40;
//	int b = 99;
//	int ret1 = Max(a, b);//利用函数来实现求两数的最大值
//	int ret2= MAX(a,b);//利用宏定义来实现来实现求两数的最大值
//	printf("%d\n", ret1);
//	printf("%d\n",ret2);
//	return 0;
////}
//int cmp(const void* p1, const void* p2)
//{
//    return *(int*)p1 - *(int*)p2;
//}
//bool containsDuplicate(int* nums, int numsSize) {
//    qsort(nums, numsSize, sizeof(int), cmp);
//    int i = 0;
//    int j = 0;
//    while (i < numsSize)
//    {
//        while ((j < numsSize) && (nums[j] == nums[i]))
//            j++;
//        if (j - i >= 2)
//            return true;
//        i = j;
//    }
//    return false;
//}
//#include<stdlib.h>
//#include<string.h>
//int* plusOne(int* digits, int digitsSize, int* returnSize) {
//    int i = 0;
//    for (i = digitsSize - 1; i >= 0; i--)
//    {
//        if (digits[i] < 9)
//        {
//            digits[i]++; \
//                * returnSize = digitsSize;
//            int* tmp = (int*)malloc(sizeof(int) * digitsSize);
//            memcpy(tmp, digits, sizeof(int) * digitsSize);
//            return tmp;
//        }
//        else
//        {
//            digits[i] = 0;
//        }
//    }
//    int* tmp = (int*)calloc(digitsSize+ 1, sizeof(int));
//    tmp[0] = 1;
//    *returnSize = digitsSize + 1;
//    return tmp;
//}
//int main()
//{
//    int arr[] = {1,2,3,4};
//    int ret = 0;
//   int*tmp= plusOne(arr,4,&ret);
//   for (int i = 0; i < ret; i++)
//       printf("%d ",tmp[i]);
//    return 0;
//}
//#include<stdbool.h>
//#include<stdlib.h>
//#include<string.h>
//void Destory(char** tmp, int len)
//{
//    for (int i = 0; i < len; i++)
//        free(tmp[i]);
//}
//bool isValidSudoku(char** board, int boardSize, int* boardColSize) 
//{
//    char* tmp[9];
//    for (int i = 0; i < boardSize; i++)
//        tmp[i] = (char*)calloc(*boardColSize, sizeof(char));
//    int r = 0;
//    int c = 0;
//    //1、验证数独是否满足1、2条；
//    for (r = 0; r < boardSize; r++)
//    {
//        for (c = 0; c < *boardColSize; c++)
//        {
//            if (board[r][c] != '.')
//            {
//                char key = board[r][c];
//                if (!tmp[r][key - '0' - 1] && !tmp[key - '0' - 1][c])
//                {
//                    tmp[r][key - '0' - 1] = key;
//                    tmp[key - '0' - 1][c] = key;
//                }
//                else
//                {
//                    Destory(tmp, boardSize);
//                    return false;
//                }
//
//            }
//        }
//        //2、满足1、2条，验证是否满足第3条；
//        int left = 0;
//        int right = 3;
//        int up = 0;
//        int down = 3;
//        int arr[9] = { 0 };
//        while (up < boardSize)
//        {
//            for (r = up; r < down; r++)
//            {
//                for (c = left; c < right; c++)
//                {
//                    if (board[r][c] != '.')
//                    {
//                        int key = board[r][c] - '0';
//                        if (arr[key - 1])
//                        {
//                            Destory(tmp, boardSize);
//                            return false;
//                        }
//                        else
//                            arr[key - 1] = 1;
//                    }
//                }
//            }
//            left = right;
//            right += 3;
//            if (left >= *boardColSize)
//            {
//                left = 0;
//                right = 3;
//                up = down;
//                down += 3;
//            }
//            memset(arr, 0, sizeof(int) * 9);
//        }
//    }
//        Destory(tmp, boardSize);
//        return true;
//    }
//    
//   /* int main();
//    { char ch[9][9] = { {"5", "3", ".", ".", "7", ".", ".", ".", "."}
//       ,{"6", ".", ".", "1", "9", "5", ".", ".", "."}
//        ,{ ".", "9", "8", ".", ".", ".", ".", "6","."}
//        , {"8", ".", ".", ".", "6", ".", ".", ".", "3"}
//        , {"4", ".", ".", "8", ".", "3", ".", ".", "1"}
//        ,{"7",".", ".", ".", "2", ".", ".", ".", "6"}
//        , {".", "6", ".", ".", ".", ".", "2", "8", "."}
//        , {".", ".", ".", "4", "1", "9", ".", ".", "5"}
//        , {".", ".", ".", ".", "8", ".", ".", "7", "9"} };
//        return 0;
//    }*/
//    int main()
//    {
//        char ch1[9] = { '5',' 3', '.','.', '7', '.', '.', '.', '.' };
//        char ch2[9] = { '6', '.', '.', '.', '9', '5', '5', '.', '.'};
//        char ch3[9] = { '.', '9', '8', '.', '.', '.', '.', '6','.' };
//        char ch4[9] = { '8', '.', '.', '.', '6', '.', '.', '.', '3'};
//        char ch5[9] = { '4', '.', '.', '8', '.', '3', '.', '.', '1'};
//        char ch6[9] = { '7','.', '.', '.', '.', '.', '.', '.', '6'};
//        char ch7[9] = { '.', '6', '.', '.', '.', '.', '.', '8', '.'};
//        char ch8[9] = { '.', '.', '.', '4', '1', '9', '.', '.', '5'};
//        char ch9[9] = { '.', '.', '.', '.', '8', '.', '.', '7', '9'};
//
//        char* tmp[9] = { ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9 };
//        int col = 9;
//        int ret=isValidSudoku(tmp,9,&col);
//        printf("%d\n",ret);
//        return 0;
//    }