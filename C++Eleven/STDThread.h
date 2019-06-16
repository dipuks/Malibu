#pragma once
#include <thread>
#include <mutex>
#include <condition_variable>
#include "SemaphoreEx.h"
#include "Queue.h"
#include <iostream>

using namespace std;

class STDThread
{
public:
	STDThread() {}
	~STDThread() {}
	struct temp;

	void producer(temp* t)
	{
		while (true) {
			t->s1.wait();
			t->m.lock();
			int x = rand();
			t->q->AddValue(x);
			cout << "Producer is " << x << endl;
			t->m.unlock();
			t->s2.notify();
			this_thread::sleep_for(1s);
		}
	}

	void consumer(temp* t)
	{
		while (true) {
			t->s2.wait();
			t->m.lock();
			int x = t->q->GetValue();
			cout << "Consumer is " << x << endl;
			t->m.unlock();
			t->s1.notify();
			this_thread::sleep_for(1s);
		}
	}

	void start()
	{
		temp* t = new temp();
		thread p(&STDThread::producer, &STDThread(), t);
		thread c(&STDThread::consumer, &STDThread(), t);
		p.join();
		c.join();
	}

//private:
	struct temp {
		mutex m;
		CSemaphoreEx s1{ 100 }, s2{ 0 };
		CQueue* q = new CQueue();
	};
};

