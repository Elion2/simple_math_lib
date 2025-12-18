#include <vector>

std::vector<int> get_primes_in_range(int start, int end);

#include "math_lib.h"

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

std::vector<int> get_primes_in_range(int start, int end) {
    std::vector<int> primes;
    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}
