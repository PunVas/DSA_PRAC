#include<bits/stdc++.h>
using namespace std;

int KA(int arr[],int n){
    int maxS=0;
    int currS=0;
    bool flag=true;
    for(int t=0;t<n;t++){
        if (arr[t]<0){
            flag=true;
        }
        else{
            flag=false;
            break;
        }

    }
    if(!flag){    for(int x =0; x<n;x++){
            currS+=arr[x];
            if  (currS>maxS){
                maxS=currS;
            }
            if (currS<0){
                currS=0;
            }
        }
        return maxS;}

    else{
        int m=INT_MIN;
         for(int y=0;y<n;y++){
        m<arr[y]?m=arr[y]:0;
    }
    
    return m;
    }
    
}

int main(){
    int arr[]={1,2,3,-2,5};
    cout<<KA(arr,5);
    return 0;
}