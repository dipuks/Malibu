#pragma once
#include <iostream>
#include <queue>
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
	int maxdepth(leaf* t);
	
	leaf* get() { return root; }


};

