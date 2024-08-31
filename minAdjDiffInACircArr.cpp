#include<iostream>
using namespace std;

int mod(int n){
    return n > 0 ? n: n * (-1);
}

int MADIACA(int arr[],int n){
    int diff = mod(arr[n - 1] - arr[0]);
    int ndf;
    for (int c = 0; c < n; c++)
    {
        ndf = mod(arr[c] - arr[c + 1]);
        if (diff>ndf)
            diff = ndf;
    }
    return diff;
}

int main() {
    int arr[8] = {10, -3, -4, 7, 6, 5, -4, -1};
    cout << MADIACA(arr, 7) << endl;
    return 0;
}