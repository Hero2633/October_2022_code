#define  _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>
//int reverse(int x) {
//    int prev = 0;//记录上一个反转值
//    int sum = 0;//记录反转值
//    int unit = 0;//存储个位
//    while (x)
//    {
//        unit = x % 10;
//        prev = sum;
//        if ((prev > (INT_MAX / 10)) || ((prev == INT_MAX / 10) && (unit >= (INT_MAX % 10 + 1))))
//            return 0;
//        if (prev < (INT_MIN / 10) || ((prev == INT_MIN / 10) && (unit <= (INT_MIN % 10 - 1))))
//            return 0;
//        sum = prev * 10 + unit;
//        x /= 10;
//    }
//    return sum;
//}
#include<math.h>
//void search(int n, int* ret)
//{
//	if (!n)
//	{
//		ret[0] = 0;
//		ret[1] = 0;
//		return;
//	}
//	int a = 0;
//	int b = 1;
//	int c = a + b;
//	int min = b;
//	while (c < n)
//	{
//		a = b;
//		b = c;
//		min = c;
//		c = a + b;
//	}
//	ret[1] = c;
//	ret[0] = min;
//}
//int main() {
//
//	int arr[2] = { 0 };
//	int n = 0;
//	scanf("%d",&n);
//	search(n,arr);
//	int x1 = abs(n - arr[0]);
//	int x2 = abs(n-arr[1]);
//	printf("%d\n",(x1>x2)?x2:x1);
//	return 0;
//}
#include<string.h>
//void change(char* str)
//{
//	char tmp[1000] = { 0 };
//	int i = 0;
//	int j = 0;
//	while (str[i])
//	{
//		if (str[i] == ' ')
//		{
//			tmp[j] = '%';
//			tmp[j+1] = '2';
//			tmp[j+2] = '0';
//			j += 3;
//		}
//		else
//			tmp[j++] = str[i];
//		i++;
//	}
//	strcpy(str,tmp);
//}
//int main()
//{
//	char ch[50] = "I Love China!";
//	change(ch);
//	printf("%s\n",ch);
//	return 0;
//}
//int main()
//{
//	unsigned char i = 7;
//	int j = 0;
//	for (; i > 0; i -= 3)
//	{
//		j++;
//	}
//	printf("%d\n",j);
//	return 0;
//}
//#define SZ 26
//bool isAnagram(char* s, char* t) {
//    int ch1[SZ] = { 0 };
//    int ch2[SZ] = { 0 };
//    int i = 0;
//    while (s[i])
//        ch1[s[i++] - 'a']++;
//    i = 0;
//    while (t[i])
//        ch2[t[i++] - 'a']++;
//    for (int j = 0; j < SZ; j++)
//        if (ch1[j] != ch2[j])
//            return false;
//    return true;
//}
//int* GetNetx(const char* ch, int len)
//{
//    int* ret = (int*)malloc(sizeof(int) * len);
//    ret[0] = -1;
//    int k = ret[0];
//    for (int j = 0; j < len - 1;)
//    {
//        if (k == -1 || ch[k] == ch[j])//成功计算出ret[j+1]//k初始化为当前值，j来到该位置，表示根据ret[j+1]求ret[j+2];
//        {
//            ret[j + 1] = k + 1;
//            k = k + 1;
//            j++;
//        }
//        else//再j不变的情况下，k不断向前移，直到移出范围或者，满足条件ch[k]==ch[j]
//            k = ret[k];
//    }
//    return ret;
//}
//int strStr(char* haystack, char* needle) {
//    int i = 0;
//    int j = 0;
//    int len1 = strlen(haystack);
//    int len2 = strlen(needle);
//    int* next = GetNetx(needle, len2);
//    while (i < len1)
//    {
//        while (j == -1 || ((i < len1 && j < len2) && (haystack[i] == needle[j])))
//        {
//            i++;
//            j++;
//        }
//        printf("i=%d j=%d\n", i, j);
//        if (j >= len2)
//            return i - j;
//        j = next[j];
//    }
//    return -1;
//}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//size_t countNode(struct ListNode* head)
//{
//    if (!head)
//        return 0;
//    int len = 0;
//    while (head)
//    {
//        len++;
//        head = head->next;
//    }
//    return len;
//}
//struct ListNode* reverseNode(struct ListNode* head)
//{
//
//    struct ListNode* tail = NULL;
//    struct ListNode* next = NULL;
//    while (head)
//    {
//        next = head->next;
//        head->next = tail;
//        tail = head;
//        head = next;
//    }
//    return tail;
//}
//bool isPalindrome(struct ListNode* head) {
//
//    if (!head)
//        return true;
//    int len = countNode(head);
//    int mid = len / 2;
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//    while (mid--)
//    {
//        fast = fast->next;
//    }
//    struct ListNode* prev = NULL;
//    while (fast)
//    {
//        prev = slow;
//        slow = slow->next;
//        fast = fast->next;
//    }
//    bool flag = true;
//    struct ListNode* begin1 = head;
//    struct ListNode* end1 = prev;
//    struct ListNode* end2 = slow;
//    struct ListNode* begin2 = reverseNode(end2);
//    struct ListNode* tmp = begin2;
//    while (begin1 && begin2)
//    {
//        if (begin1->val != begin2->val)
//        {
//            flag = false;
//            break;
//        }
//        begin1 = begin1->next;
//        begin2 = begin2->next;
//    }
//    begin2 = reverseNode(tmp);
//    prev->next = begin2;
//    return flag;
//}