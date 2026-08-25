/*
    Problem: Selection Sort

    Sort an array in ascending order.

    Approach:
    Find the smallest element from the
    unsorted portion and place it at the
    current position.

    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {

    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {

        int minimumIndex = i;

        for (int j = i + 1; j < n; j++) {

            if (arr[j] < arr[minimumIndex]) {
                minimumIndex = j;
            }
        }

        swap(arr[i], arr[minimumIndex]);
    }
}

int main() {

    vector<int> arr = {64, 25, 12, 22, 11};

    selectionSort(arr);

    cout << "Sorted array: ";

    for (int x : arr) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}