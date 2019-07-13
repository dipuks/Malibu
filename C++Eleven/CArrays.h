#pragma once
#include <iostream>
using namespace std;

class CArrays
{
public:
	CArrays();
	~CArrays();

	int get(int index);
	void set(int data);
	void insert(int index, int data);
	void remove(int index);
	int size();
	bool isEmpty();
	void print();

private:
	int a[10];
	int length;
};

