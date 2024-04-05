#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>


int64_t sum_indirect(uint64_t A[], u_int64_t left, u_int64_t right)
{
   if (left == right) {
      return A[left];
   }
   u_int64_t mid = left + (right - left) / 2;
   return sum_indirect(A, left, mid) + sum_indirect(A, mid + 1, right);
}

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
   printf(" inside sum_indirect perform_sum, N=%lld \n", N);
   return sum_indirect(A, 0, N - 1);
}



