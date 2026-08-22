/*
    Problem: Check if an Array is Sorted

    Determine whether an array is sorted
    in non-decreasing order.

    Example:
    Input:  [1, 2, 2, 4, 7]
    Output: true

    Input:  [1, 4, 3, 7]
    Output: false

    Approach:
    Compare every element with the previous element.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<int> arr = {1, 2, 2, 4, 7};

    if (isSorted(arr)) {
        cout << "Array is sorted." << endl;
    }
    else {
        cout << "Array is not sorted." << endl;
    }

    return 0;
}