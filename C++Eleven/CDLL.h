#pragma once
#include <iostream>
using namespace std;

class CDLL
{
public:
	CDLL();
	~CDLL();

	void main();

private:
	struct node
	{
		node* prev;
		int data;
		node* next;
	} *head = nullptr, *tail = nullptr;

	void display();

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

