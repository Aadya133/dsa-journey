/*
    Problem: Running Sum of an Array

    Example:
    Input:  [1, 2, 3, 4]
    Output: [1, 3, 6, 10]

    Approach:
    Add each element to the previous prefix sum.

    Time Complexity: O(n)
    Space Complexity: O(1) extra space
*/

#include <iostream>
#include <vector>
using namespace std;

void runningSum(vector<int>& arr) {

    for (int i = 1; i < arr.size(); i++) {
        arr[i] = arr[i] + arr[i - 1];
    }
}

int main() {

    vector<int> arr = {1, 2, 3, 4};

    runningSum(arr);

    cout << "Running sum: ";

    for (int x : arr) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}