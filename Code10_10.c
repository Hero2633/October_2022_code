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
//        for (j = i + 1; j < len; j++)//����ÿһ���ַ�����Ӧ����������ִ�
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
//    int flag_R = 0;//Ĭ�ϵ�һ�в���Ҫ��0
//    int flag_C = 0;//Ĭ�ϵ�һ�в���Ҫ��0
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
//	fputs("abcdef",pf);//��abcdefд��test.txt�ļ�����ȥ��
//	//Ȼ����������fgetcһ��һ����������
//	int ch = 0;
//	rewind(pf);//��ָ��ص���ʼλ�ã�Ҳ��������ָ��a��λ�ã���Ϊ��һ��fgetsд���ַ�����ָ���ָ���ļ�ĩβ��
//	ch = fgetc(pf);//������˵���ǻ���ļ���ͷ��ʼ��ȡ����ȡ����Ҳ����a
//	printf("%c\n",ch);//���a
//	//������������ֱ�Ӷ�ȡd����ô���ǾͿ�������fseek�����������������
//	fseek(pf,3,SEEK_SET);//��ָ����ļ���ͷ��ʼƫ��3��ƫ������ָ���ָ����d��λ�ã��´ζ�ȡ��ʱ��ͻ��ȡd��
//	ch = fgetc(pf);
//	printf("%c\n",ch);//���d
//	fseek(pf,-3,SEEK_END);//���ļ�ĩβ��ʼƫ��-3��ƫ����������ָ��Ҳ��ָ��d��λ�ã������ٴζ�ȡҲ�ܶ���d
//	ch = fgetc(pf);
//	printf("%c\n",ch);//���d
//	fseek(pf,-1,SEEK_CUR);//��ȡ��d����ָ��ָ����e��λ�ã�������SEEK_CUR���ҵ���ǰλ��ָ�룬Ȼ����ǰƫ��1����λ���һص���d
//	ch = fgetc(pf);
//	printf("%c\n",ch);//���d
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
//	fputs("abcdef", pf);//��abcdefд��test.txt�ļ�����ȥ��
//	//Ȼ����������fgetcһ��һ����������
//	long ret=ftell(pf);//������һ��fgetsд���ַ�������ָ���ָ�����ļ�ĩβ��Ҳ����f�ĺ�һλ�����Դ�ʱ
//	                  //�������ʼλ�õ�ƫ��������6��
//	printf("%ld\n",ret);//���6
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
//	fputs("abcdef", pf);//��abcdefд��test.txt�ļ�����ȥ��
//	rewind(pf);//��ָ����»ص���ʼλ�ã�
//	int ch = 0;
//	char arr[7] = { 0 };
//	fgets(arr,7,pf);//��ͷ��ʼ��ȡ����ô���ͻὫ�����ַ�����ȡ����
//	printf(arr);//���abcdef
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
//	fputs("abcdef", pf);//��abcdefд��test.txt�ļ�����ȥ��
//	rewind(pf);//��ָ����»ص���ʼλ�ã�
//	char arr[7] = { 0 };
//	fgets(arr,3,pf);
//	if (feof(pf))//ָ���ʱָ��c��λ�ã�û��ָ���ļ�ĩβ�����Բ��Ƕ�ȡ���ļ�ĩβ�������ļ���ȡ����
//		printf("����Ϊ�����ļ�ĩβ�������ļ���ȡ������\n");
//	else
//		printf("������Ϊ�����ļ�ĩβ�������ļ���ȡ������\n");
//	printf(arr);
//	fgets(arr,7,pf);
//	if (feof(pf))//�ļ�ָ��ָ���ļ�ĩβ������Ϊ�ļ���ȡ��ĩβ������
//		printf("\n����Ϊ�����ļ�ĩβ�������ļ���ȡ������\n");
//	else
//		printf("������Ϊ�����ļ�ĩβ�������ļ���ȡ������\n");
//	printf(arr);
//	fclose(pf);
//	return 0;
//}
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	//fputs("abcdef", pf);//�Ƚ�����������������
//	fprintf(stdout,"abcdef\n");
//	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//	Sleep(10000);
//	printf("ˢ�»�����\n");
//	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
//	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
//	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//	Sleep(10000);
//	fclose(pf);
//	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
//	pf = NULL;
//	return 0;
//}