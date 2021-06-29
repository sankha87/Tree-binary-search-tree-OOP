#include "Tree.h"

Tree::Tree()
{
}

void Tree::insert(int val)
{
	this->root = insertNode(this->root, val);
}

void Tree::inorder()
{
	inordertraversal(this->root);
}

TreeNode* Tree::insertNode(TreeNode* node, int val)
{
	if (node == NULL)
	{
		node = new TreeNode(val);
	}
	else
	{
		if (node->getData() < val)
		{
			TreeNode* temp = insertNode(node->getRight(), val);
			node->setRight(temp);
		}
		else
		{
			TreeNode* temp = insertNode(node->getLeft(), val);
			node->setLeft(temp);
		}
	}

	return node;
}

void Tree::inordertraversal(TreeNode *node)
{
	if (node == NULL)
		return;
	else
	{
		inordertraversal(node->getLeft());
		std::cout << node->getData() << "  ";
		inordertraversal(node->getRight());
	}
}

Tree::~Tree()
{
	delete root;
}
