#include "Tree.h"
#include <conio.h>
using namespace std;

int main()
{
	Tree* t1 = new Tree();
	t1->insert(15);
	t1->insert(10);
	t1->insert(20);
	t1->insert(25);
	t1->insert(8);
	t1->insert(12);

	cout << "inorder traversal\n";
	t1->inorder();

	_getch();
}