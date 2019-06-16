#include <iostream>
#include <future>
#include <thread>

using namespace std;

void add(promise<int>&& i, int a, int b)
{
	i.set_value(a + b);
}

void tester()
{
	promise<int> p;
	future<int> f = p.get_future();
	thread t(add, move(p), 90, 34);
	t.join();
	cout << "Future values are " << f.get() << endl;
}