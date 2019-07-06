#pragma once
#include <iostream>
using namespace std;

class CStack
{
public:
	CStack();
	~CStack();

	void push(int data);
	void pop();
	int top();
	void print();

private:

	struct stack {
		int data;
		stack* next;
	} *head = NULL;
};

