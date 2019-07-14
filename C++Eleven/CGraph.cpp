#include "CGraph.h"
CGraph::CGraph()
{
}
CGraph::~CGraph()
{
}

void CGraph::mainGraph()
{
	vector <pair<int, int>> arr = { {0, 1}, {0, 3}, {0, 6}, {1, 0}, {1, 4}, {1, 5}, {2, 5}, {2, 7}, {3, 0}, {3, 5},
	{4, 1}, {4, 6}, {5, 1}, {5, 2}, {5, 3}, {6, 0}, {6, 4}, {7, 2} };
	vector <int> b = breadth(arr, 0);
	cout << " Print breadth first values : " << endl;
	for (auto v : b)
	{
		cout << v << endl;
	}
	cout << endl;

	vector <int> d = depth(arr, 0);
	cout << " Print depth first values : " << endl;
	for (auto v : d)
	{
		cout << v << endl;
	}
}

vector<int> CGraph::breadth(vector <pair<int, int>> arr, int start)
{
	vector<int> ret;
	queue <int> q;
	q.push(start);
	bool flag[8] = { false };
	flag[start] = true;
	vector <pair<int, int>>::iterator itr;
	while (!q.empty())
	{
		start = q.front();
		q.pop();
		ret.push_back(start);

		for (itr = arr.begin(); itr != arr.end(); itr++)
		{
			if (itr->first == start)
			{
				if (flag[itr->second] == false)
				{
					flag[itr->second] = true;
					q.push(itr->second);
				}
			}
		}

	}

	return ret;
}

vector<int> CGraph::depth(vector <pair<int, int>> arr, int start)
{
	vector<int> ret;
	bool flag[8] = { false };
	stack <int> s;
	vector <pair<int, int>>::iterator itr;
	s.push(start);
	flag[start] = true;
	while (!s.empty())
	{
		start = s.top();
		s.pop();
		ret.push_back(start);


		for (itr = arr.begin(); itr != arr.end(); itr++)
		{
			if (itr->first == start)
			{
				if (flag[itr->second] == false)
				{
					flag[itr->second] = true;
					s.push(itr->second);
				}
			}
		}
	}
	return ret;
}