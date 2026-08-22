/*
    Problem: Reverse an Array

    Example:
    Input:  [1, 2, 3, 4, 5]
    Output: [5, 4, 3, 2, 1]

    Approach:
    Use two pointers:
    - left starts at the beginning
    - right starts at the end

    Swap the elements and move both pointers.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void reverseArray(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        swap(arr[left], arr[right]);

        left++;
        right--;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    reverseArray(arr);

    cout << "Reversed array: ";

    for (int x : arr) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}