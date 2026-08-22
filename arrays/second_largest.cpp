/*
    Problem: Find Second Largest Element

    Given an array, find the second largest distinct element.

    Example:
    Input:  [10, 5, 8, 10, 3]
    Output: 8

    Approach:
    Maintain the largest and second largest elements
    while traversing the array once.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findSecondLargest(const vector<int>& arr) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int x : arr) {
        if (x > largest) {
            secondLargest = largest;
            largest = x;
        }
        else if (x > secondLargest && x != largest) {
            secondLargest = x;
        }
    }

    return secondLargest;
}

int main() {
    vector<int> arr = {10, 5, 8, 10, 3};

    cout << "Second largest: "
         << findSecondLargest(arr) << endl;

    return 0;
}