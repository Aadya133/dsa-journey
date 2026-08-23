/*
    Problem: Move Zeroes

    Move all zeroes to the end of the array
    while maintaining the relative order of
    non-zero elements.

    Example:
    Input:
    [0, 1, 0, 3, 12]

    Output:
    [1, 3, 12, 0, 0]

    Approach:
    Maintain a position for the next non-zero element.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& arr) {

    int position = 0;

    for (int i = 0; i < arr.size(); i++) {

        if (arr[i] != 0) {

            swap(arr[i], arr[position]);

            position++;
        }
    }
}

int main() {

    vector<int> arr = {0, 1, 0, 3, 12};

    moveZeroes(arr);

    cout << "After moving zeroes: ";

    for (int x : arr) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}