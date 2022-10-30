#define  _CRT_SECURE_NO_WARNINGS 0
//int removeDuplicates(int* nums, int numsSize) {
//    int i = 0;
//    int cur = 0;
//    while (cur < numsSize)
//    {
//        if (nums[cur] != nums[i])
//        {
//            i++;
//            nums[i] = nums[cur];
//            cur++;
//        }
//        else
//        {
//            cur++;
//        }
//    }
//    return i + 1;
//}


//int removeDuplicates(int* nums, int numsSize) {
//    int i = 0;
//    int cur = 0;
//    int* tmp = (int*)malloc(sizeof(int) * numsSize);
//    int k = 0;
//    while (i < numsSize)
//    {
//
//        if (cur >= numsSize || (nums[i] != nums[cur]))
//        {
//            tmp[k++] = nums[i];
//            i = cur++;
//        }
//        else if (nums[cur] == nums[i])
//        {
//            cur++;
//        }
//
//    }
//    for (int j = 0; j < k; j++)
//        nums[j] = tmp[j];
//    free(tmp);
//    return k;
//}
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//    int l1 = m - 1;
//    int l2 = n - 1;
//    int j = m + n - 1;
//    while (l1 >= 0 && l2 >= 0)
//    {
//        if (nums2[l2] >= nums1[l1])
//            nums1[j--] = nums2[l2--];
//        else
//            nums1[j--] = nums1[l1--];
//    }
//    while (l2 >= 0)//nums2数组还有剩余
//    {
//        nums1[j--] = nums2[l2--];
//    }
//    //nums1数组还有剩余则不需要拷贝，因为它所在的位置就是拷贝进去的位置，考不考被位置都不变
//}
// /**
//* Definition for singly - linked list.
//* struct ListNode {
//	*int val;
//	*struct ListNode* next;
//	*
//};
//*/

//struct ListNode* removeElements(struct ListNode* head, int val) {
//    struct ListNode* dummyhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* prev = dummyhead;
//    dummyhead->next = head;
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        if (cur->val != val)
//        {
//            prev = cur;
//            cur = cur->next;
//        }
//        else
//        {
//            struct ListNode* next = cur->next;
//            prev->next = next;
//            cur = next;
//        }
//    }
//    struct ListNode* newHead = dummyhead->next;
//    free(dummyhead);
//    return newHead;
//}

//struct ListNode* reverseList(struct ListNode* head) {
//    struct ListNode* retHead = NULL;
//    struct ListNode* cur = head;
//    struct ListNode* next = NULL;
//    while (cur)
//    {
//        next = cur->next;
//        cur->next = retHead;
//        retHead = cur;
//        cur = next;
//    }
//    return retHead;
//}