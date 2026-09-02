/*
    Problem: Generate All Subsets

    Example:

    Input:
    [1, 2, 3]

    Output:
    []
    [1]
    [2]
    [2, 3]
    [3]
    [1, 3]
    [1, 2]
    [1, 2, 3]

    At every element we have two choices:

    1. Include the element
    2. Don't include the element

    Number of subsets = 2^n

    Time Complexity: O(n * 2^n)
    Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(
    const vector<int>& arr,
    int index,
    vector<int>& current
) {

    // Base case
    if (index == arr.size()) {

        cout << "[";

        for (int i = 0; i < current.size(); i++) {

            cout << current[i];

            if (i != current.size() - 1) {
                cout << ", ";
            }
        }

        cout << "]" << endl;

        return;
    }

    // Choice 1: Don't include current element
    generateSubsets(
        arr,
        index + 1,
        current
    );

    // Choice 2: Include current element
    current.push_back(arr[index]);

    generateSubsets(
        arr,
        index + 1,
        current
    );

    // Backtrack
    current.pop_back();
}

int main() {

    vector<int> arr = {1, 2, 3};

    vector<int> current;

    generateSubsets(arr, 0, current);

    return 0;
}
