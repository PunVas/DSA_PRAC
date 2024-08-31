#include <iostream>
#include <climits>
using namespace std;


int kadane(int arr[], int n) {
    int max_ending_here = 0, max_so_far = INT_MIN;
    for (int i = 0; i < n; i++) {
        max_ending_here = max_ending_here + arr[i];
        if (max_ending_here > max_so_far)
            max_so_far = max_ending_here;
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}


int maxCircularSubarraySum(int arr[], int n) {
    
    int max_kadane = kadane(arr, n);

    
    int total_sum = 0;
    for (int i = 0; i < n; i++)
        total_sum += arr[i];

    
    for (int i = 0; i < n; i++)
        arr[i] = -arr[i];

    
    int max_inverted_kadane = kadane(arr, n);

    
    int max_wrap = total_sum + max_inverted_kadane;

    
    if (max_wrap == 0)
        return max_kadane;

    
    return max(max_kadane, max_wrap);
}


int main() {
    int arr[] = {8,-8,9,-9,10,-11,12};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum circular subarray sum is: " << maxCircularSubarraySum(arr, n) << endl;
    return 0;
}
