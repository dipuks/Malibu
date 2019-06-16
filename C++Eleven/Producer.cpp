#include "Producer.h"
#include <thread>

sem_t sem11, sem22;
pthread_mutex_t mutex1;
CQueue* queue1;

void *producer(void * param)
{
	while (true)
	{
		this_thread::sleep_for(1s);
		sem_wait(&sem22);
		pthread_mutex_lock(&mutex1);
		int x = rand();
		queue1->AddValue(x);
		cout << "Producer adding value = " << x << endl;
		pthread_mutex_unlock(&mutex1);
		sem_post(&sem11);
	}
}

CProducer::CProducer(CQueue* q, pthread_mutex_t m, sem_t s1, sem_t s2)
{
	queue1 = queue = q;
	mutex1 = mutex = m;
	sem11 = sem1 = s1;
	sem22 = sem2 = s2;
}


CProducer::~CProducer()
{
}

void CProducer::StartProducerThread()
{
	pthread_create(&pid, NULL, producer, NULL);
	//pthread_join(pid, NULL);
}