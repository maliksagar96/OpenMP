#include <iostream>
#include <omp.h>

int main() {
  omp_set_num_threads(4); // Set number of threads in the code

#pragma omp parallel
  {
    int thread_id = omp_get_thread_num();
    std::cout << "Hello from thread " << thread_id << "\n";
  }
  return 0;
}
