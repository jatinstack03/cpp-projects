#include <iostream>
#include <vector>

// Returns the index of target if found, otherwise returns -1
int binarySearch(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        // Safe way to calculate midpoint to prevent integer overflow
        int mid = low + (high - low) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;
        }
        
        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            low = mid + 1;
        } 
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    // Element was not present in the vector
    return -1;
}

int main() {
    // Binary search strictly requires a SORTED array/vector
    std::vector<int> data = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;

    int result = binarySearch(data, target);

    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
