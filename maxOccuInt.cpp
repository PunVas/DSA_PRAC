#include <bits/stdc++.h>
using namespace std;

int moi(int l[], int r[], int n, int max_val)
{
    int prefix[max_val + 2];
    for (int y = 0; y < n; y++)
    {
        prefix[l[y]]++;
        prefix[r[y + 1]]--;
    }
    int maxInPrefix=prefix[0],ans;
    for (int x = 1; x < max_val; x++)
    {
        prefix[x]+=prefix[x-1];
        if(maxInPrefix<prefix[x]){
            maxInPrefix=prefix[x];
            ans=x;
        }
        
    }
    return ans;
}

int main()
{
    int arr1[5]={1,2,4,8};
    int arr2[5]={5,7,6,10};
    cout<<moi(arr1,arr2,5,10);
    return 0;
}