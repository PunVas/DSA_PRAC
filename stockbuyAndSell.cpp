#include<bits/stdc++.h>
using namespace std;

void** SBAS(int arr[], int n) {
    int** op = new int*[n];
    for (int i = 0; i < n; i++) {
        op[i] = new int[2];
    }
    int hochuka=0;
    int buy,sell,boughtCondn=0,soldCondn=1;
    for (int x=0; x<n-1;x++){

        if((arr[x]<arr[x+1]) && boughtCondn==0 && soldCondn==1){
            buy=x;
            boughtCondn=1;
            soldCondn=0;
        }
                if(boughtCondn){
            if(arr[x]>arr[x+1] || x==n-2){
                soldCondn=1;
                boughtCondn=0;
                sell=x+(x==n-2?1:0);
                op[hochuka][1]=sell;
                op[hochuka][0]=buy;
                hochuka++;
            }
        }

        

    }
    for (int i = 0; i<hochuka; i++) {
        cout << "(" << op[i][0] << " "<< op[i][1]<<")" << " ";
    }

    // return op;
    
}

int main(){
    int arr[] = {17 ,20 ,11 ,9, 12, 6};
    SBAS(arr, 6);
    return 0;
}