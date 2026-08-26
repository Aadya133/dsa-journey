/*
    Problem: Lower Bound

    Find the first index where arr[index] >= target.

    Example:
    arr = [1, 2, 4, 4, 6, 8]
    target = 4

    Output:
    2

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int lowerBound(
    const vector<int>& arr,
    int target
) {

    int left = 0;
    int right = arr.size();

    while (left < right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] >= target) {
            right = mid;
        }
        else {
            left = mid + 1;
        }
    }

    return left;
}

int main() {

    vector<int> arr = {
        1, 2, 4, 4, 6, 8
    };

    cout << "Lower bound index: "
         << lowerBound(arr, 4)
         << endl;

    return 0;
}
