#pragma once
#define HAVE_STRUCT_TIMESPEC
#include <pthread.h>
#include <iostream>
#include <mutex>
#include <condition_variable>
#include <semaphore.h>

using namespace std;

class CPthread
{
public:
	CPthread();
	~CPthread();

	pthread_t pid;
	pthread_mutex_t mutex;
	pthread_cond_t cv;
	sem_t sem;
	void test();
};

