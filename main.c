#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void *thread(void *data) {
  while (1) {
    printf("Hello from Thread");
  }
}
int main(void) {
  pthread_t th;
  pthread_create(&th, NULL, thread, NULL);
  sleep(1);
  pthread_cancel(&th, NULL);
  pthread_join(&th, NULL);
  return 0;
}
