//************OPTIMAL*****************//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, n;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    // Input the array elements
    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int index = -1;

    // Find the first decreasing element from the right
    for (i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        // If no such element is found, reverse the array
        reverse(arr, arr + n);
    } else {
        // Find the smallest element in the suffix that is larger than arr[index]
        for (i = n - 1; i > index; i--) {
            if (arr[i] > arr[index]) {
                swap(arr[i], arr[index]);
                break;
            }
        }
        // Reverse the suffix
        reverse(arr + index + 1, arr + n);
    }

    // Output the result
    cout << "Printing the array elements: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}