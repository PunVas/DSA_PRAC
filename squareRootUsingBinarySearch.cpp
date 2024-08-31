#include <bits/stdc++.h>
using namespace std;

long long int SR(long long int n)
{
    long long int low = 1;
    long long int high = n;
    long long int ans = -1;
    while (low <= high)
    {
        long long int mid = high+(low - high) / 2;
        long long int msq = mid * mid;
        if (msq == n)
        {
            return mid;
        }
        else if (msq > n)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    cout << SR(3141592);
    return 0;
}