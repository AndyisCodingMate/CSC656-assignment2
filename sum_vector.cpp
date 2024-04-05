#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>



void 
setup(int64_t N, uint64_t A[])
{
   printf(" inside direct_sum problem_setup, N=%lld \n", N);
   for (int64_t i = 0; i < N; i++) {
      A[i] = i;
   }
   return;
}
int64_t
sum(int64_t N, uint64_t A[])
{
   printf(" inside sum_vector perform_sum, N=%lld \n", N);
   std::vector<uint64_t> v(A, A + N);
   return std::accumulate(v.begin(), v.end(), 0);
}

