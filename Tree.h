#pragma once
#include "TreeNode.h"
class Tree
{
	TreeNode* root;
	int nodecount;
	TreeNode* insertNode(TreeNode* node, int val);
	void inordertraversal(TreeNode* root);
public:
	Tree();
	~Tree();
	void insert(int val);
	void inorder();
};

