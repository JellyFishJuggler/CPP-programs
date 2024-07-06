#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << "Hello Srijan" << std::endl;
    std::cout << "I love u Vanshika" << std::endl;

    for (int i = 1; i <= 10; ++i) {
        std::cout << "I love u Vanshika" << std::endl;
    }

    std::cout << "Prime numbers till 10: ";
    for (int i = 2; i <= 10; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}