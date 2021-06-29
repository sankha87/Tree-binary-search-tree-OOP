#pragma once
#include <iostream>

class TreeNode
{
	int data;
	TreeNode* left;
	TreeNode* right;
public:
	TreeNode();
	~TreeNode();
	TreeNode(int val);
	int getData();
	TreeNode* getLeft();
	TreeNode* getRight();
	void setRight(TreeNode* node);
	void setLeft(TreeNode* node);
	void setData(int val);
};

