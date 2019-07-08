#include "CBST.h"

CBST::CBST()
{
}

CBST::~CBST()
{
}

void CBST::insert(int data)
{
	leaf* t = new leaf;
	t->data = data;
	t->left = nullptr;
	t->right = nullptr;

	if (root == nullptr)
	{
		root = t;
	}
	else
	{
		leaf* temp = root;
		leaf* tail = nullptr;
		while (temp)
		{
			tail = temp;
			if (data >= temp->data)
			{
				temp = temp->right;
			}
			else
			{
				temp = temp->left;
			}
		}

		if (data < tail->data)
			tail->left = t;
		else
			tail->right = t;
		
		//root = temp;
	}
}

void CBST::preorder(leaf* t)
{
	if (t)
	{
		cout << t->data << endl;
		preorder(t->left);
		preorder(t->right);
	}
}

void CBST::inorder(leaf* t)
{
	if (t)
	{
		inorder(t->left);
		cout << t->data << endl;		
		inorder(t->right);
	}
}

void CBST::postorder(leaf* t)
{
	if (t)
	{
		postorder(t->left);
		postorder(t->right);
		cout << t->data << endl;
	}
}

void CBST::remove(int data)
{

}

int CBST::search()
{

	return 0;
}

int CBST::maxdepth(leaf* t)
{
	queue <leaf*> l;
	l.push(t);
	int depth = 0;

	while (true)
	{
		int leafcount = l.size();

		if (leafcount == 0)
			return depth;

		depth++;

		while (leafcount > 0)
		{
			leaf* temp = l.front();
			l.pop();

			if (temp->left != nullptr)
				l.push(temp->left);
			if (temp->right != nullptr)
				l.push(temp->right);
			leafcount--;
		}

	}


	return depth;
}