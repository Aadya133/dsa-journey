/*
    Problem: Search Insert Position

    Find the index where target exists,
    or where it should be inserted.

    Example:
    arr = [1, 3, 5, 6]
    target = 2

    Output:
    1

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int searchInsert(
    const vector<int>& arr,
    int target
) {

    int left = 0;
    int right = arr.size();

    while (left < right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid;
        }
    }

    return left;
}

int main() {

    vector<int> arr = {
        1, 3, 5, 6
    };

    int target = 2;

    cout << "Insert position: "
         << searchInsert(arr, target)
         << endl;

    return 0;
}
