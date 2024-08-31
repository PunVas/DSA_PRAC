#include <bits/stdc++.h>
using namespace std;

int LSOEAO(int arr[], int n) {
    if (n == 1) return 1;

    int maxl = 1;  
    int currl = 1;

    for(int x=0;x<n;x++){
        arr[x]%=2;
    }
    for (int i = 1; i < n; i++) {
        
        if ((arr[i]==0 && arr[i-1]!= 0) || 
            (arr[i]!=0 && arr[i-1]== 0)) {
            currl++;
            maxl = max(maxl, currl);
        } else {
            currl = 1;  
        }
    }

    return maxl;
}

int main() {
    int arr[] = {10,12,14,78,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << LSOEAO(arr, n) << endl;

    return 0;
}
