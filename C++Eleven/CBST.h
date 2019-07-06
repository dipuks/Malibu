#pragma once
#include <iostream>
using namespace std;

class CBST
{
public:
	CBST();
	~CBST();

private:

	struct leaf {
		leaf* left;
		int data;
		leaf* right;
	} *root = nullptr;

public:

	void insert(int data);
	void preorder(leaf* t);
	void inorder(leaf* t);
	void postorder(leaf* t);
	void remove (int data);
	int search();

	leaf* get() { return root; }


};

