#include <bits/stdc++.h>
using namespace std;

int C1IASA(int arr[], int n)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = high + (low - high) / 2;
        if (arr[mid == 0]){
            return mid;
        }
        else
        {
            if (mid==0 || arr[mid]!=arr[mid-1])
            {
                return n - mid;
            }
            else{
                high = mid - 1;
            }
            
        }
        
    }
    return 0;
}

int main()
{
    int arr[] = { 0,0, 0, 0, 0, 1, 1, 1, 1, 1, 1 };
    cout<<C1IASA(arr, sizeof(arr) / sizeof(int));

    return 0;
}