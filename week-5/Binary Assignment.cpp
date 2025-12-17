//Study Binary Search and implement a function to carry out a binary search on an array given a target value.Mimic the function header of the example in the slide.





#include <iostream>


int binarySearch(const int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;

    
    while (low <= high) {
        // Calculate the middle index
        int mid = low + (high - low) / 2; 

        if (key == arr[mid]) {
            // Target found!
            return mid;
        } else if (key < arr[mid]) {
           
            high = mid - 1;
        } else {
            
            low = mid + 1;
        }
    }

    // Target not found after exhausting the search space
    return -1;
}

int main() {
    std::cout << "--- Binary Search Implementation ---" << std::endl;
    
    // NOTE: The array MUST be sorted for binary search to work!
    const int sortedArray[] = {5, 12, 18, 25, 30, 42, 55, 60, 78};
    const int arraySize = 9;
    
    int target1 = 30; 
    int target2 = 50; 

    std::cout << "Array: ";
    for (int i : sortedArray) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Test 1: Target exists
    int index1 = binarySearch(sortedArray, arraySize, target1);
    if (index1 != -1) {
        std::cout << "Target " << target1 << " found at index: " << index1 << std::endl;
    } else {
        std::cout << "Target " << target1 << " not found." << std::endl;
    }
    
    // Test 2: Target does not exist
    int index2 = binarySearch(sortedArray, arraySize, target2);
    if (index2 != -1) {
        std::cout << "Target " << target2 << " found at index: " << index2 << std::endl;
    } else {
        std::cout << "Target " << target2 << " not found." << std::endl;
    }

    return 0;
}