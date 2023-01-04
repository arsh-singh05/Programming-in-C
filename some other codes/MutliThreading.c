// creates two threads that run concurrently, each printing out a message at a fixed interval

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *thread_function(void *arg)
{
  while (1)
  {
  printf("Thread %d: Hello, World! \n", (int)arg);
  sleep(1);
  }
}

void main()
{
  pthread_t thread1, thread2;
  int ret1, ret2;
  ret1 = pthread_create(&thread1, NULL, thread_function, (void *)1);
  if (ret1)
  {
    printf("Error creating thread 1\n");
    return 1;
  }
  ret2 = pthread_create(&thread2, NULL, thread_function, (void *)2);
  if (ret2)
  {
    printf("Error creating thread 2\n");
    return 1;
  }
  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);
}
