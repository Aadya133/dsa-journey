/*
    Problem: Find the sum of digits of a number.

    Example:

    Input:
    12345

    Output:
    15

    Explanation:
    1 + 2 + 3 + 4 + 5 = 15

    Approach:
    Last digit = n % 10
    Remaining number = n / 10

    Time Complexity: O(log n)
    Space Complexity: O(log n)
*/

#include <iostream>
using namespace std;

int sumOfDigits(int n) {

    if (n == 0) {
        return 0;
    }

    return (n % 10) + sumOfDigits(n / 10);
}

int main() {

    int n = 12345;

    cout << "Sum of digits: "
         << sumOfDigits(n)
         << endl;

    return 0;
}
