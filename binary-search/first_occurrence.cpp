/*
    Problem: First Occurrence of an Element

    Example:
    arr = [1, 2, 2, 2, 4, 5]
    target = 2

    Output:
    1

    Approach:
    Standard binary search, but when the target
    is found, continue searching toward the left.

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(
    const vector<int>& arr,
    int target
) {

    int left = 0;
    int right = arr.size() - 1;

    int answer = -1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {

            answer = mid;

            right = mid - 1;
        }
        else if (arr[mid] < target) {

            left = mid + 1;
        }
        else {

            right = mid - 1;
        }
    }

    return answer;
}

int main() {

    vector<int> arr = {
        1, 2, 2, 2, 4, 5
    };

    cout << "First occurrence: "
         << firstOccurrence(arr, 2)
         << endl;

    return 0;
}
