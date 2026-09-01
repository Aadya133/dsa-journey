/*
    Problem: Print numbers from 1 to N using recursion.

    Example:
    Input: 5
    Output:
    1 2 3 4 5

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <iostream>
using namespace std;

void printNumbers(int current, int n) {

    // Base case
    if (current > n) {
        return;
    }

    cout << current << " ";

    // Recursive call
    printNumbers(current + 1, n);
}

int main() {

    int n = 5;

    printNumbers(1, n);

    cout << endl;

    return 0;
}
