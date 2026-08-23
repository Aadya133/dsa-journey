/*
    Problem: Range Sum Query

    Given an array, find the sum of elements
    between indices left and right.

    Example:
    Input:
    arr = [2, 4, 1, 5, 3]
    left = 1
    right = 3

    Output:
    10

    Because:
    4 + 1 + 5 = 10

    Approach:
    Build a prefix sum array.

    Range Sum:
    prefix[right] - prefix[left - 1]

    Time Complexity:
    Preprocessing: O(n)
    Query: O(1)

    Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> buildPrefixSum(const vector<int>& arr) {

    vector<int> prefix(arr.size());

    prefix[0] = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    return prefix;
}

int rangeSum(const vector<int>& prefix, int left, int right) {

    if (left == 0) {
        return prefix[right];
    }

    return prefix[right] - prefix[left - 1];
}

int main() {

    vector<int> arr = {2, 4, 1, 5, 3};

    vector<int> prefix = buildPrefixSum(arr);

    int left = 1;
    int right = 3;

    cout << "Range sum: "
         << rangeSum(prefix, left, right)
         << endl;

    return 0;
}