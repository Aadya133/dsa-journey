/*
    Problem: Find Largest Element in an Array

    Given an array of integers, find the largest element.

    Example:
    Input:  [7, 2, 9, 4, 1]
    Output: 9

    Approach:
    Traverse the array and keep track of the maximum element.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int findLargest(const vector<int>& arr) {
    int largest = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    vector<int> arr = {7, 2, 9, 4, 1};

    cout << "Largest element: "
         << findLargest(arr) << endl;

    return 0;
}