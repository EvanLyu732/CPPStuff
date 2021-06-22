#include <iostream>
#include <queue>

/* message queue */

/* TYPE FUNCTION */
class Message {
};

std::queue<Message> mqueue;
std::condition_variable mcond;
std::mutex mmutex;

void consumer()
{
  while(true) {
    std::unique_lock<mutex> lck{mmutex};
    while (mcond.wait(lck))  /* do nothing */
      auto m = mqueue.front();
      mqueue.pop();
      lck.unlock();
  }
}

void producer()
{
  while(true) {
    Message m;
    //... fill the message
    std::unique_lock<mutex> lck {mmutex};
    mqueue.push(m);
    mcond.notify_one();
  }
}

