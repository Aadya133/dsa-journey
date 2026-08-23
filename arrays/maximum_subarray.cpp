/*
    Problem: Maximum Subarray Sum

    Given an integer array, find the contiguous
    subarray with the largest sum.

    Example:
    Input:
    [-2, 1, -3, 4, -1, 2, 1, -5, 4]

    Output:
    6

    The maximum subarray is:
    [4, -1, 2, 1]

    Approach:
    Kadane's Algorithm.

    At each position, decide whether:
    1. Continue the current subarray
    2. Start a new subarray

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubarraySum(const vector<int>& arr) {

    int currentSum = arr[0];
    int maximumSum = arr[0];

    for (int i = 1; i < arr.size(); i++) {

        currentSum = max(arr[i], currentSum + arr[i]);

        maximumSum = max(maximumSum, currentSum);
    }

    return maximumSum;
}

int main() {

    vector<int> arr = {
        -2, 1, -3, 4, -1, 2, 1, -5, 4
    };

    cout << "Maximum subarray sum: "
         << maxSubarraySum(arr)
         << endl;

    return 0;
}