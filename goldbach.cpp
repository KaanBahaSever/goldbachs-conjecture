#include <iostream>
#include <vector>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Function to find all pairs of prime numbers that sum up to n
std::vector<std::pair<int, int>> findAllPrimePairs(int n) {
    std::vector<std::pair<int, int>> primePairs;
    for (int i = 2; i <= n / 2; ++i) {
        if (isPrime(i) && isPrime(n - i)) {
            primePairs.push_back({i, n - i});
        }
    }
    return primePairs;
}

int main() {
    int n = 28; // Example even number
    auto primePairs = findAllPrimePairs(n);
    if (!primePairs.empty()) {
        for (const auto& [prime1, prime2] : primePairs) {
            std::cout << n << " = " << prime1 << " + " << prime2 << std::endl;
        }
    } else {
        std::cout << "No primes found that sum up to " << n << std::endl;
    }
    return 0;
}