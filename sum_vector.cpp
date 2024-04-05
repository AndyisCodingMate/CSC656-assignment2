#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>



void setup(int64_t N, uint64_t A[]) {
    std::cout << "Inside sum_vector problem_setup, N=" << N << std::endl;
    for (int64_t i = 0; i < N; i++) {
        A[i] = i;
    }
}

int64_t sum(int64_t N, uint64_t A[]) {
    std::cout << "Inside sum_vector perform_sum, N=" << N << std::endl;
    std::vector<uint64_t> v(A, A + N);
    return std::accumulate(v.begin(), v.end(), static_cast<int64_t>(0));
}


