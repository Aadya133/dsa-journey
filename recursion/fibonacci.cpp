/*
    Problem: Find the Nth Fibonacci number.

    Fibonacci sequence:

    0 1 1 2 3 5 8 13 ...

    Relation:

    fib(n) = fib(n-1) + fib(n-2)

    Base cases:

    fib(0) = 0
    fib(1) = 1

    Time Complexity: O(2^n)
    Space Complexity: O(n)
*/

#include <iostream>
using namespace std;

int fibonacci(int n) {

    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1)
         + fibonacci(n - 2);
}

int main() {

    int n = 10;

    cout << "Fibonacci number: "
         << fibonacci(n)
         << endl;

    return 0;
}
