#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int binarySearch(const vector<int>& arr, int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        
        if (arr[mid] == target)
            return mid;

        
        if (arr[mid] < target)
            left = mid + 1;
        
        else
            right = mid - 1;
    }

    
    return -1;
}


int findInInfiniteArray(const vector<int>& arr, int target) {
    
    int left = 0;
    int right = 1;

    
    
    while (arr[right] < target) {
        left = right;
        right *= 2;

        
        if (right >= arr.size()) {
            right = arr.size() - 1;
            break;
        }
    }

    
    return binarySearch(arr, left, right, target);
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41};

    int target = 19;
    int index = findInInfiniteArray(arr, target);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}
