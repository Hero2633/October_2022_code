//#define  _CRT_SECURE_NO_WARNINGS 0
//#include"Stack.h"
//struct TreeNode
//{
//	int val;
//	struct TreeNode* left;
//	struct TreeNode* right;
//};
//void preorderTraversal(struct TreeNode* root)
//{
//	struct TreeNode* cur = root;
//	Stack tmp = { 0 };
//	StackInit(&tmp);
//	StackPush(&tmp,root);
//	while (!StackEmpty(&tmp))
//	{
//		cur = StackTop(&tmp);
//		StackPop(&tmp);
//		printf("%d ",cur->val);
//		if (cur->right)
//			StackPush(&tmp,cur->right);
//		if(cur->left)
//			StackPush(&tmp, cur->left);
//	}
//	StackDestroy(&tmp);
//}
//void inorderTraversal(struct TreeNode*root)
//{
//	struct TreeNode* cur = root;
//	Stack tmp;
//	StackInit(&tmp);
//	while (cur || !StackEmpty(&tmp))
//	{
//		if (cur)
//		{
//			StackPush(&tmp,cur);
//			cur = cur->left;
//		}
//		else
//		{
//			struct TreeNode* top = StackTop(&tmp);
//			StackPop(&tmp);
//			printf("%d ",top->val);
//			cur = top->right;
//		}
//	}
//	StackDestroy(&tmp);
//}
//void postorderTraversal(struct TreeNode* root)
//{
//	if (!root)
//		return;
//	postorderTraversal(root->left);
//	postorderTraversal(root->right);
//	printf("%d ",root->val);
//
//}
//int main()
//{
//	struct TreeNode a;
//	struct TreeNode b;
//	struct TreeNode c;
//	struct TreeNode d;
//	struct TreeNode e;
//	struct TreeNode f;
//	a.val = 1;
//	b.val = 2;
//	c.val = 6;
//	d.val = 3;
//	e.val = 4;
//	f.val = 7;
//	a.left = &b;
//	a.right = &c;
//	b.left = &d;
//	b.right = &e;
//	c.left = &f;
//	c.right = NULL;
//	d.left = NULL;
//	d.right = NULL;
//	e.left = NULL;
//	e.right = NULL;
//	f.left = NULL;
//	f.right = NULL;
//	//«∞–Ú(∑«µ›πÈ)
//	preorderTraversal(&a);
//	putchar('\n');
//	//÷––Ú(∑«µ›πÈ)
//	inorderTraversal(&a);
//	putchar('\n');
//    //∫Û–Ú±È¿˙£®µ›πÈ£©
//	postorderTraversal(&a);
//	return 0;
//}