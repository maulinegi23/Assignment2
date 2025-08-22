// Binary Search Algorithm Impleme
#include <iostream>
#include <vector>
using namespace std;

// Iterative Binary Search
int binarySearchIterative(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // prevents overflow

        if (arr[mid] == target)
            return mid;  // Found target at index mid
        else if (arr[mid] < target)
            left = mid + 1; // Search right half
        else
            right = mid - 1; // Search left half
    }
    return -1; // Not found
}

// Recursive Binary Search
int binarySearchRecursive(const vector<int>& arr, int left, int right, int target) {
    if (left > right) 
        return -1; // Not found
    
    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, right, target);
    else
        return binarySearchRecursive(arr, left, mid - 1, target);
}

// Linear Search for comparison
int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target)
            return i;
    }
    return -1; // Not found
}

int main() {
    vector<int> arr = {2, 4, 7, 10, 15, 20, 25, 30}; // Sorted array
    int target = 15;

    cout << "Array: ";
    for (int num : arr) cout << num << " ";
    cout << "\nSearching for " << target << "...\n";

    // Binary Search Iterative
    int indexIter = binarySearchIterative(arr, target);
    if (indexIter != -1)
        cout << "Found (Iterative Binary Search) at index " << indexIter << endl;
    else
        cout << "Not found (Iterative Binary Search)\n";

    // Binary Search Recursive
    int indexRec = binarySearchRecursive(arr, 0, arr.size() - 1, target);
    if (indexRec != -1)
        cout << "Found (Recursive Binary Search) at index " << indexRec << endl;
    else
        cout << "Not found (Recursive Binary Search)\n";

    // Linear Search
    int indexLin = linearSearch(arr, target);
    if (indexLin != -1)
        cout << "Found (Linear Search) at index " << indexLin << endl;
    else
        cout << "Not found (Linear Search)\n";

    return 0;
}
