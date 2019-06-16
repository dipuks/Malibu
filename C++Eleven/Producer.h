#pragma once
#define HAVE_STRUCT_TIMESPEC
#include <pthread.h>
#include <semaphore.h>
#include "Queue.h"

class CProducer
{
public:
	CProducer(CQueue* q, pthread_mutex_t m, sem_t s1, sem_t s2);
	~CProducer();

	void StartProducerThread();

private:
	pthread_t pid;
	pthread_mutex_t mutex;
	pthread_cond_t cv;
	sem_t sem1, sem2;
	CQueue* queue;
};

