// condition_variable example
#include <iostream>           // std::cout
#include <thread>             // std::thread
#include <mutex>              // std::mutex, std::unique_lock
#include <condition_variable> // std::condition_variable

std::mutex mtx;
std::condition_variable cv;

const int num_test = 10;

inline void log(const std::string &msg) {
  auto sys_clock = std::chrono::system_clock::now();
  static_assert(std::chrono::system_clock::period::den == 1000000000, "system_clock period is not nano");
  auto ts = sys_clock.time_since_epoch().count() % 1000000000;
  std::cout << ts/1000 << "." << ts%1000 << "> " << msg << '\n';
}

void print_id (int id) {
  const std::string tid = std::to_string(id);
  log("enter thread " + tid);
  int i = 0;
  do {
    std::unique_lock<std::mutex> lck(mtx);
    cv.wait(lck);
    log("wake thread " + tid);
  } while (++i < num_test);

  log("quit thread " + tid);
}

void go(int i) {
  std::unique_lock<std::mutex> lck(mtx);
  log("notify all i " + std::to_string(i));
  cv.notify_all();
}

int main ()
{
  std::thread threads[10];
  // spawn 10 threads:
  for (int i=0; i<10; ++i)
    threads[i] = std::thread(print_id,i);

  for (int i = 0; i < num_test; ++i) {
    std::this_thread::sleep_for(std::chrono::seconds(3));
    log("\n\nready......" + std::to_string(i));
    go(i);
  }

  for (auto& th : threads) th.join();

  return 0;
}

// g++ -O3 -std=c++11 notify_time.cpp -lpthread
