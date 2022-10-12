#define  _CRT_SECURE_NO_WARNINGS 0
//bool isHappy(int n) {
//    int tmp = 0;
//    int key = n;
//    int sum = 0;
//    tmp = key;
//    int count = 20;
//    while (count--)
//    {
//
//        while (tmp)
//        {
//            sum += (int)pow(tmp % 10, 2);
//            tmp /= 10;
//        }
//        if (sum == 1)
//            return true;
//        else
//        {
//            tmp = sum;
//            sum = 0;
//        }
//    }
//    return false;
//}
//char* reverseVowels(char* s) {
//    int len = strlen(s);
//    if (!s)
//        return s;
//    char* tmp = (char*)calloc(len, sizeof(char));
//    int k = 0;
//    for (int i = 0; i < len; i++)
//    {
//        if (s[i] == 'a' || s[i] == 'A'\
//            || s[i] == 'e' || s[i] == 'E'\
//            || s[i] == 'i' || s[i] == 'I'\
//            || s[i] == 'o' || s[i] == 'O'\
//            || s[i] == 'u' || s[i] == 'U')
//            tmp[k++] = s[i];
//    }
//    int left = 0;
//    int right = k - 1;
//    while (left < right)
//    {
//        char cur = tmp[left];
//        tmp[left] = tmp[right];
//        tmp[right] = cur;
//        left++;
//        right--;
//    }
//    int cur = 0;
//    for (int i = 0; i < len; i++)
//    {
//        if (s[i] == 'a' || s[i] == 'A'\
//            || s[i] == 'e' || s[i] == 'E'\
//            || s[i] == 'i' || s[i] == 'I'\
//            || s[i] == 'o' || s[i] == 'O'\
//            || s[i] == 'u' || s[i] == 'U')
//            s[i] = tmp[cur++];
//    }
//    free(tmp);
//    tmp = NULL;
//    return s;
//}
//char* reverseVowels(char* s) {
//    int len = 0;
//    int i = 0;
//    int right = strlen(s) - 1;
//    while (i < right)
//    {
//        while ((i < right) && (s[i] != 'a' && s[i] != 'A'\
//            && s[i] != 'e' && s[i] != 'E'\
//            && s[i] != 'i' && s[i] != 'I'\
//            && s[i] != 'o' && s[i] != 'O'\
//            && s[i] != 'u' && s[i] != 'U'))
//            i++;
//        while ((i < right) && (s[right] != 'a' && s[right] != 'A'\
//            && s[right] != 'e' && s[right] != 'E'\
//            && s[right] != 'i' && s[right] != 'I'\
//            && s[right] != 'o' && s[right] != 'O'\
//            && s[right] != 'u' && s[right] != 'U'))
//            right--;
//        if (right <= i)
//            break;
//        char tmp = s[i];
//        s[i] = s[right];
//        s[right] = tmp;
//        i++;
//        right--;
//    }
//    return s;
//}
//0, 1, 0, 3, 12
//void moveZeroes(int* nums, int numsSize) {
//    int i = 0;
//    int pit = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i])
//            nums[pit++] = nums[i];
//    }
//    for (pit; pit < numsSize; pit++)
//        nums[pit] = 0;
//}
//char* reverseOnlyLetters(char* s) {
//    int left = 0;
//    int right = strlen(s) - 1;
//    while (left < right)
//    {
//        while ((left < right) && (s[left] < 'a' || s[left]>'z') && (s[left] < 'A' || s[left]>'Z'))
//            left++;
//        while ((left < right) && (s[right] < 'a' || s[right]>'z') && (s[right] < 'A' || s[right]>'Z'))
//            right--;
//        if (right <= left)
//            break;
//        char tmp = s[left];
//        s[left] = s[right];
//        s[right] = tmp;
//        left++;
//        right--;
//
//    }
//    return s;
//}
//int cmp(const void* p1, const void* p2)
//{
//    return *(int*)p1 - *(int*)p2;
//}
//int* getStrongest(int* arr, int arrSize, int n, int* returnSize) {
//    qsort(arr, arrSize, sizeof(int), cmp);
//    int i = 0;
//    int j = arrSize - 1;
//    int mid = arr[(j - i) / 2 + i];
//    int* tmp = malloc(sizeof(int) * arrSize);
//    int k = 0;
//    while (i <= j)
//    {
//        if ((abs(arr[i] - mid) > abs(arr[j] - mid)) || ((abs(arr[i] - mid) == abs(arr[j] - mid)) && (arr[i] > arr[j])))
//            tmp[k++] = arr[i++];
//        else
//            tmp[k++] = arr[j--];
//    }
//    *returnSize = n;
//    return tmp;
//}
#include<stdio.h>
#include<string.h>
//void reverse_(char* nums, int left, int right)
//{
//    while (left < right)
//    {
//        char tmp = nums[left];
//        nums[left] = nums[right];
//        nums[right] = tmp;
//        left++;
//        right--;
//    }
//}
//char* reverseWords(char* s) {
//    int left = 0;
//    int right = 0;
//    int len = strlen(s);
//    reverse_(s, left, len - 1);
//    while (left < len)
//    {
//        while ((left < len) && (s[left] < 'a' || s[left]>'z') && (s[left] < 'A' || s[left]>'Z'))
//            left++;
//        if (left >= len)
//            break;
//        right = left;
//        while ((right < len) && s[right] != ' ')
//            right++;
//        reverse_(s, left, right - 1);
//        left = right;
//    }
//    return s;
//}
//int main()
//{
//    char arr[20] = "Hello World";
//    reverseWords(arr);
//    printf(arr);
//    return 0;
//
//}
//#define MAX 100
//#define BSC //
//int main()
//{
// BSC printf("Hello world\n");
//	return 0;
//}
//extern int add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 30;
//	int ret = add(a,b);
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	printf("%s\n",__FILE__);
//	printf("%d\n",__LINE__);
//	printf("%s\n",__DATE__);
//	printf("%s\n",__TIME__);
//	return 0;
//}
//#define MAX 100
//#define PI 3.1415926f
//int main()
//{
//	int a = MAX;//在预处理阶段MAX会被替换为100//代码就变为int a=100;
//	printf("%d\n",a);
//	float b = PI;//在预处理阶段PI会被替换为3.1415926f//代码就变为float b=3.1415926f;
//	printf("%f\n",b);
//	return 0;
//}
//#define MAX(a,b) ((a>b)?a:b)
//int main()
//{
//	int a = 10;
//	int b = 30;
//	int max = MAX(a,b);
//	printf("%d\n",max);
//	return 0;
//}
//#define SQUR(x) ((x)*(x))
//int main()
//{
//	int ret = SQUR(5+1);
//	printf("%d\n",ret);
//	return 0;
//}
//#define PRINTF(val,format) printf("The val of "#val" is "format"\n",val)
//int main()
//{
//	int a = 10;
//	float b = 3.14f;
//	PRINTF(a,"%d");
//	PRINTF(b,"%f");
//
//	return 0;
//}
//#define FUN(x,y) x##y
//int main()
//{
//	int Class7 = 10;
//	printf("%d\n",FUN(Class,9));//相当于printf("%d\n",Class7);
//	return 0;
//}