#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {  
    int low = 0;
    int high = size - 1; 
    
    while (low <= high) { 
        int mid = low + (high - low) / 2;  
        
        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            low = mid + 1; // Search the right half
        } else {
            high = mid - 1; // Search the left half
        }
    }
    
    return -1;  
}

int main() {
    int size; 
    cout << "Enter the size of the array: ";
    cin >> size;

    int* myarr = new int[size]; 

   
    cout << "Enter " << size << " sorted elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> myarr[i];
    }

    int target;
    cout << "Enter the target element to search: ";
    cin >> target;

    int result = binarySearch(myarr, size, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

     return 0;
}
/ F