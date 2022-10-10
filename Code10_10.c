#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
#include<stdbool.h>
//bool isPalindrome(char* s) {
//    if (!s[0])
//        return true;
//    int len = strlen(s);
//    char* tmp = (char*)calloc(len, sizeof(char));
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < len; i++)
//    {
//        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
//            tmp[j++] = s[i];
//        else if (s[i] >= 'A' && s[i] <= 'Z')
//            tmp[j++] = s[i] + 32;
//    }
//    int left = 0;
//    int right = j - 1;
//    while (left < right)
//    {
//        if (tmp[left] == tmp[right])
//        {
//            left++;
//            right--;
//        }
//        else
//            break;
//    }
//    free(tmp);
//    if (left < right)
//        return false;
//    return true;
//}
//bool is_character_string(const char* nums, int left, int right)
//{
//    char key = nums[right + 1];
//    int i = left;
//    for (i = left; i <= right; i++)
//    {
//        if (nums[i] == key)
//            return true;
//    }
//    return false;
//}
//int lengthOfLongestSubstring(char* s) {
//    int i = 0;
//    int j = 0;
//    int len = strlen(s);
//    if (!len)
//        return 0;
//    int curLen = 1;
//    int maxLen = 0;
//    while (i < len)
//    {
//        curLen = 1;
//        for (j = i + 1; j < len; j++)//搜索每一个字符所对应的最长的连续字串
//        {
//            if (is_character_string(s, i, j - 1))
//            {
//                break;
//            }
//            else
//            {
//                curLen++;
//            }
//        }
//        if (j >= len)
//            return curLen;
//        if (curLen > maxLen)
//            maxLen = curLen;
//        i++;
//    }
//    return maxLen;
//}
//int main()
//{
//    char* p = "abcabcbb";
//    lengthOfLongestSubstring(p);
//    return 0;
//
//}
//char* addBinary(char* a, char* b) {
//    int i = 0;
//    int j = 0;
//    int len1 = strlen(a);
//    int len2 = strlen(b);
//    i = len1 - 1;
//    j = len2 - 1;
//    int len = len1 + len2;
//    char* tmp = (char*)calloc(len + 1, sizeof(char));
//    int tail = 0;
//    int k = 0;
//    while (i >= 0 && j >= 0)
//    {
//        tmp[k++] = (a[i] - '0' + b[j] - '0' + tail) % 2 + '0';
//        tail = (a[i] - '0' + b[j] - '0' + tail) / 2;
//        i--;
//        j--;
//    }
//    while (i >= 0)
//    {
//        tmp[k++] = (a[i] - '0' + tail) % 2 + '0';
//        tail = (a[i] - '0' + tail) / 2;
//        i--;
//    }
//    while (j >= 0)
//    {
//        tmp[k++] = (b[j] - '0' + tail) % 2 + '0';
//        tail = (b[j] - '0' + tail) / 2;
//        j--;
//    }
//    while (tail)
//    {
//        tmp[k++] = (tail) % 2 + '0';
//        tail = (tail) / 2;
//    }
//    int left = 0;
//    int right = k - 1;
//    while (left < right)
//    {
//        char t = tmp[left];
//        tmp[left] = tmp[right];
//        tmp[right] = t;
//        left++;
//        right--;
//    }
//    return tmp;
//}
//void sortColors(int* nums, int numsSize) {
//    int arr[3] = { 0 };
//    for (int i = 0; i < numsSize; i++)
//    {
//        arr[nums[i]]++;
//    }
//    int k = 0;
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < arr[i]; j++)
//            nums[k++] = i;
//    }
//}

//void Swap(int* a, int* b)
//{
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//void sortColors(int* nums, int numsSize) {
//    int head = 0;
//    int cur = 0;
//    int key = 0;
//    for (key = 0; key < 2; key++)
//    {
//        for (cur = head; cur < numsSize; cur++)
//        {
//            if (nums[cur] == key)
//            {
//                Swap(nums + head, nums + cur);
//                head++;
//            }
//        }
//    }
//
//}
//void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
//    int* R = (int*)calloc(matrixSize, sizeof(int));
//    int* C = (int*)calloc(*matrixColSize, sizeof(int));
//    for (int r = 0; r < matrixSize; r++)
//        for (int c = 0; c < *matrixColSize; c++)
//            if (!matrix[r][c])
//            {
//                R[r] = 1;
//                C[c] = 1;
//            }
//    for (int r = 0; r < matrixSize; r++)
//        for (int c = 0; c < *matrixColSize; c++)
//            if (R[r] || C[c])
//                matrix[r][c] = 0;
//    free(R);
//    free(C);
//}


//void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
//    int flag_R = 0;//默认第一行不需要置0
//    int flag_C = 0;//默认第一列不需要置0
//    for (int c = 0; c < *matrixColSize; c++)
//        if (matrix[0][c] == 0)
//        {
//            flag_R = 1;
//            break;
//        }
//    for (int r = 0; r < matrixSize; r++)
//        if (matrix[r][0] == 0)
//        {
//            flag_C = 1;
//            break;
//        }
//    for (int r = 1; r < matrixSize; r++)
//        for (int c = 1; c < *matrixColSize; c++)
//        {
//            if (matrix[r][c] == 0)
//            {
//                matrix[r][0] = 0;
//                matrix[0][c] = 0;
//            }
//        }
//    for (int r = 1; r < matrixSize; r++)
//        for (int c = 1; c < *matrixColSize; c++)
//        {
//            if (matrix[r][0] == 0 || matrix[0][c] == 0)
//                matrix[r][c] = 0;
//        }
//    if (flag_R)
//    {
//        for (int c = 0; c < *matrixColSize; c++)
//            matrix[0][c] = 0;
//    }
//    if (flag_C)
//    {
//        for (int r = 0; r < matrixSize; r++)
//            matrix[r][0] = 0;
//    }
//}
//int cmp(const void* p1, const void* p2)
//{
//    return *(int*)p1 - *(int*)p2;
//}
//int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
//    int max = nums1Size;
//    if (nums2Size > nums1Size)
//        max = nums2Size;
//    int* tmp = (int*)malloc(sizeof(int) * max);
//    qsort(nums1, nums1Size, sizeof(int), cmp);
//    qsort(nums2, nums2Size, sizeof(int), cmp);
//    int l1 = 0;
//    int l2 = 0;
//    *returnSize = 0;
//    while (l1 < nums1Size && l2 < nums2Size)
//    {
//        if (nums1[l1] < nums2[l2])
//            l1++;
//        else if (nums1[l1] > nums2[l2])
//            l2++;
//        else
//        {
//            tmp[(*returnSize)++] = nums1[l1];
//            l1++;
//            l2++;
//        }
//    }
//    return tmp;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt","w+");
//	if (!pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("abcdef",pf);//将abcdef写入test.txt文件里面去；
//	//然后我们利用fgetc一个一个读出来；
//	int ch = 0;
//	rewind(pf);//让指针回到起始位置，也就是重新指向a的位置，因为上一句fgets写完字符串后指针就指向文件末尾了
//	ch = fgetc(pf);//正常来说我们会从文件开头开始读取，读取到的也就是a
//	printf("%c\n",ch);//输出a
//	//但是现在我们直接读取d；那么我们就可以利用fseek函数来帮助我们完成
//	fseek(pf,3,SEEK_SET);//将指针从文件开头开始偏移3个偏移量，指针就指到了d的位置，下次读取的时候就会读取d了
//	ch = fgetc(pf);
//	printf("%c\n",ch);//输出d
//	fseek(pf,-3,SEEK_END);//从文件末尾开始偏移-3个偏移量，这是指针也能指向d的位置，我们再次读取也能读到d
//	ch = fgetc(pf);
//	printf("%c\n",ch);//输出d
//	fseek(pf,-1,SEEK_CUR);//读取完d过后指针指向了e的位置，我们用SEEK_CUR能找到当前位置指针，然后像前偏移1个单位，右回到了d
//	ch = fgetc(pf);
//	printf("%c\n",ch);//输出d
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt", "w+");
//	if (!pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("abcdef", pf);//将abcdef写入test.txt文件里面去；
//	//然后我们利用fgetc一个一个读出来；
//	long ret=ftell(pf);//由于上一次fgets写入字符串过后，指针就指向了文件末尾，也就是f的后一位，所以此时
//	                  //相对于起始位置的偏移量就是6；
//	printf("%ld\n",ret);//输出6
//	fclose(pf);
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt", "w+");
//	if (!pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("abcdef", pf);//将abcdef写入test.txt文件里面去；
//	rewind(pf);//让指针从新回到开始位置；
//	int ch = 0;
//	char arr[7] = { 0 };
//	fgets(arr,7,pf);//从头开始读取，那么最后就会将整个字符串读取出来
//	printf(arr);//输出abcdef
//	fclose(pf);
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("test.txt", "w+");
//	if (!pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("abcdef", pf);//将abcdef写入test.txt文件里面去；
//	rewind(pf);//让指针从新回到开始位置；
//	char arr[7] = { 0 };
//	fgets(arr,3,pf);
//	if (feof(pf))//指针此时指向c的位置，没有指向文件末尾，所以不是读取到文件末尾而导致文件读取结束
//		printf("是因为读到文件末尾而导致文件读取结束！\n");
//	else
//		printf("不是因为读到文件末尾而导致文件读取结束！\n");
//	printf(arr);
//	fgets(arr,7,pf);
//	if (feof(pf))//文件指针指向文件末尾，是因为文件读取到末尾而结束
//		printf("\n是因为读到文件末尾而导致文件读取结束！\n");
//	else
//		printf("不是因为读到文件末尾而导致文件读取结束！\n");
//	printf(arr);
//	fclose(pf);
//	return 0;
//}
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	//fputs("abcdef", pf);//先将代码放在输出缓冲区
//	fprintf(stdout,"abcdef\n");
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//注：fflush 在高版本的VS上不能使用了
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}