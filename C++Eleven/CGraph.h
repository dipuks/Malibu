#pragma once
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

class CGraph
{
public:
	CGraph();
	~CGraph();

	void mainGraph();
	vector<int> breadth(vector <pair<int, int>> arr, int start);
	vector<int> depth(vector <pair<int, int>> arr, int start);
};

