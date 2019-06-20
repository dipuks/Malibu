#pragma once
#include <iostream>
using namespace std;

class CSLL
{
public:
	CSLL();
	~CSLL();

	void main();

private:
	struct node
	{
		int data;
		node* next;
	} *head = nullptr, *tail = nullptr;

	void display(node* n);

	void push_front(int data);
	void push_back(int data, bool flag = false);
	void insert(int pos, int data);
	int pop(int pos);
	bool circular();
	int count();
	bool isloop();
	void sort();
	void createloop();
};

