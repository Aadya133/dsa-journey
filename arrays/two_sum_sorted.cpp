/*
    Problem: Two Sum in a Sorted Array

    Given a sorted array and a target,
    find two numbers whose sum equals the target.

    Example:
    Input:
    [1, 2, 4, 6, 8, 9, 14]
    target = 13

    Output:
    4 + 9 = 13

    Approach:
    Use two pointers:
    left  -> beginning
    right -> end

    If current sum is too small:
        move left forward.

    If current sum is too large:
        move right backward.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

pair<int, int> twoSumSorted(
    const vector<int>& arr,
    int target
) {

    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {

        int sum = arr[left] + arr[right];

        if (sum == target) {
            return {arr[left], arr[right]};
        }

        if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return {-1, -1};
}

int main() {

    vector<int> arr = {
        1, 2, 4, 6, 8, 9, 14
    };

    int target = 13;

    pair<int, int> result =
        twoSumSorted(arr, target);

    if (result.first != -1) {

        cout << "Pair: "
             << result.first
             << " + "
             << result.second
             << " = "
             << target
             << endl;
    }
    else {
        cout << "No pair found." << endl;
    }

    return 0;
}