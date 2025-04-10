#include <iostream>
#include <algorithm> // for sort()

using namespace std;

// Binary Search Function
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid; // Found
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // Not found
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int arr[100]; // Assuming max 100 elements

    cout << "Enter " << size << " elements (sorted or unsorted):\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Optional: Sort the array if input is not guaranteed to be sorted
    sort(arr, arr + size);

    int target;
    cout << "Enter element to search: ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        cout << "Element found at index " << result << ".\n";
    else
        cout << "Element not found.\n";

    return 0;
}

