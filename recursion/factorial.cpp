/*
    Problem: Find factorial of N.

    Example:
    5! = 5 × 4 × 3 × 2 × 1 = 120

    Recursive relation:

    factorial(n) = n * factorial(n - 1)

    Base case:
    factorial(0) = 1

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <iostream>
using namespace std;

long long factorial(int n) {

    if (n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {

    int n = 5;

    cout << "Factorial: "
         << factorial(n)
         << endl;

    return 0;
}
