#pragma once
#include <mutex>
#include <condition_variable>
#include <iostream>
using namespace std;

class CSemaphoreEx
{
public:
	CSemaphoreEx(int c = 0) { count = c;  };
	~CSemaphoreEx() {};

	inline void notify()
	{
		std::unique_lock<std::mutex> lock(m);
		count++;
		cv.notify_one();
	}

	inline void wait()
	{
		std::unique_lock<std::mutex> lock(m);

		while (count == 0) {
			cv.wait(lock);
		}
		count--;
	}

private:
	mutex m;
	condition_variable cv;
	unsigned int count = 0;
};

