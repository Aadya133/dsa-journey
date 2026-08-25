/*
    Problem: Bubble Sort

    Sort an array in ascending order.

    Example:
    Input:  [5, 3, 8, 1, 2]
    Output: [1, 2, 3, 5, 8]

    Approach:
    Repeatedly compare adjacent elements.
    Swap them if they are in the wrong order.

    Time Complexity:
    Worst: O(n^2)
    Best: O(n) with optimization

    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {

    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {

        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {

                swap(arr[j], arr[j + 1]);

                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main() {

    vector<int> arr = {5, 3, 8, 1, 2};

    bubbleSort(arr);

    cout << "Sorted array: ";

    for (int x : arr) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
