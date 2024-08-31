#include <bits/stdc++.h>
using namespace std;

bool primeHaiYaNa(int n){
    if(n==2 || n==3)
        return 1;
    if(n<2 || n%2==0|| n%3==0)
        return 0;
    for (int i = 5; i * i <= n; i += 6) {
        if(n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int main(int argc, char *argv[]){
    if (argc != 2) {
        cout << "Usage: " << argv[0] << " <number>" << endl;
        return 1;
    }

    int number = stoi(argv[1]);

    cout << (primeHaiYaNa(number) ? "1" : "0") << endl; 
    return 0;
}
