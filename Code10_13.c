#define  _CRT_SECURE_NO_WARNINGS 0
//int Add(int a, int b)
//{
//	return a + b;
//}
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int val;
    struct Node* next;
    struct Node* random;
};
//size_t Count(struct Node* head)
//{
//    if (!head)
//        return 0;
//    int count = 0;
//    while (head)
//    {
//        count++;
//        head = head->next;
//    }
//    return count;
//}
//int SearchRand(struct Node* head, struct Node* target)
//{
//    if (!target)
//        return -1;
//    int cur = 0;
//    while (head)
//    {
//        if (head == target)
//            break;
//        else
//        {
//            cur++;
//            head = head->next;
//        }
//    }
//    return cur;
//}
//struct Node* copyRandomList(struct Node* head) {
//    int len = Count(head);
//    if (!len)
//        return head;
//    struct Node* dummyhead = (struct Node*)malloc(sizeof(struct Node));
//    struct Node* tail = dummyhead;
//    struct Node* Node = (struct Node*)malloc(sizeof(struct Node) * len);
//    struct Node* cur = head;
//
//    for (int i = 0; i < len; i++, cur = cur->next)
//    {
//        Node[i].val = cur->val;
//        int ret = SearchRand(head, cur->random);
//        if (ret == -1)
//            Node[i].random = NULL;
//        else
//            Node[i].random = Node + ret;
//        tail->next = Node + i;
//        tail = Node + i;
//        tail->next = NULL;
//    }
//    return dummyhead->next;
//}
// 
//struct Node* copyRandomList(struct Node* head) {
//    struct Node* cur = head;
//    struct Node* copy = NULL;
//    struct Node* next = NULL;
//    while (cur)//1����copy�ڵ������ڶ�Ӧԭ�ڵ����
//    {
//        copy = (struct Node*)malloc(sizeof(struct Node));
//        copy->val = cur->val;
//        next = cur->next;
//        copy->next = next;
//        cur->next = copy;
//        cur = next;
//    }
//    //2������randomָ��;
//    cur = head;
//    while (cur)
//    {
//        copy = cur->next;
//        if (cur->random)
//            copy->random = cur->random->next;
//        else
//            copy->random = NULL;
//        cur = copy->next;
//    }
//    //3����copy����Ӵ������м���������ͬʱ�ָ�ԭ����������ӹ�ϵ
//    cur = head;
//    struct Node* dummyhead = (struct Node*)malloc(sizeof(struct Node));
//    struct Node* tail = dummyhead;
//    while (cur)
//    {
//        copy = cur->next;
//        next = copy->next;
//        //��ʼ������
//        tail->next = copy;
//        tail = copy;
//        tail->next = NULL;
//        //��ʼ�ָ�ԭ�����ϵ;
//        cur->next = next;
//        cur = next;
//    }
//    copy = dummyhead->next;
//    free(dummyhead);
//    return copy;
//}
//int main()
//{
//    //[7,null],[13,0],[11,4],[10,2],[1,0]
//    struct Node  a;
//    struct Node  b;
//    struct Node  c;
//    struct Node  d;
//    struct Node  e;
//    a.val = 7;
//    a.next = &b;
//    a.random = NULL;
//    b.val = 13;
//    b.next = &c;
//    b.random = &a;
//    c.val =11;
//    c.next = &d;
//    c.random = &e;
//    d.val = 10;
//    d.next = &e;
//    d.random = &c;
//    e.val = 1;
//    e.next = NULL;
//    e.random = &a;
//
//    struct Node*head=copyRandomList(&a);
//    for (int i = 0; i < 5; i++)
//    {
//        printf("%p %2d %p\n",head,head->val,head->random);
//        head = head->next;
//    }
//   // struct Node* head = copyRandomList(&a);
//    struct Node* tmp= &a;
//
//   /* for (int i = 0; i < 5; i++)
//    {
//        printf("%2d %p\n", tmp->val, tmp->random);
//        tmp = tmp->next;
//    }*/
//    return 0;
//}
//size_t Count(struct Node* head)
//{
//    if (!head)
//        return 0;
//    int count = 0;
//    while (head)
//    {
//        count++;
//        head = head->next;
//    }
//    return count;
//}
//int SearchRand(struct Node* head, struct Node* target)
//{
//    if (!target)
//        return -1;
//    int cur = 0;
//    while (head)
//    {
//        if (head == target)
//            break;
//        else
//        {
//            cur++;
//            head = head->next;
//        }
//    }
//    return cur;
//}
//struct Node* copyRandomList(struct Node* head) {
//    int len = Count(head);
//    if (!len)
//        return head;
//    struct Node* dummyhead = (struct Node*)malloc(sizeof(struct Node));
//    struct Node* tail = dummyhead;
//    struct Node* tmp[len];
//    struct Node* cur = head;
//    for (int i = 0; i < len; i++)//�������������һ���������棻
//    {
//        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
//        copy->val = cur->val;
//        tmp[i] = copy;
//        cur = cur->next;
//    }
//    cur = head;
//    for (int i = 0; i < len; i++)//����ԭ������ÿ���ڵ�����ָ�������ͷָ���ƫ������������copy����Ľڵ�
//    {//�����ָ�룻
//        int ret = SearchRand(head, cur->random);//��ԭ��������Ѱ�統ǰ�ڵ�����ָ�������ԭͷָ����±�//
//        if (ret == -1)
//            tmp[i]->random = NULL;
//        else
//            tmp[i]->random = tmp[ret];
//        tail->next = tmp[i];
//        tail = tmp[i];
//        tail->next = NULL;
//        cur = cur->next;
//    }
//    struct Node* copyHead = dummyhead->next;
//    free(dummyhead);
//    return copyHead;
//}
//struct S
//{
//    char a;
//    int b;
//    double c;
//};
//#define my_offsetof(type,member) ((size_t)(&((type*)0)->member))
//int main()
//{
//    printf("%u\n", my_offsetof(struct S, a));
//    printf("%u\n", my_offsetof(struct S, b));
//    printf("%u\n",my_offsetof(struct S,c));
//
//    return 0;
//}
//#include<stdio.h>
//#include<time.h>
//#define MAX_SZ 20//�������20λ
//#define MIN_SZ 5//��������5λ
//void random_num()
//{
//	int i = 0;
//	char arr[10][10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
//	char num[MAX_SZ + 1] = { 0 };
//	int step = 0;
//	step = rand() % (MAX_SZ + 1 - MIN_SZ) + MIN_SZ;//�������λ��
//	num[0] = (rand() % 9 + 1) + '0';//����������λ��1~9��;
//	for ( i = 1; i < step; i++)
//		num[i] = rand() % 10 + '0';
//	printf("The value is %s\n", num);
//	for (i = 0; i < step; i++)
//		printf("%s ", arr[num[i] - '0']);
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	random_num();
//	return 0;
//}