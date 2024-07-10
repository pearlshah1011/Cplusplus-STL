#include<bits/stdc++.h>
using namespace std;
long long compute_or(long long x) {
    long long result = 0;
    for (long long i = 1; i <= x; i <<= 1) {
        result |= (x & i);
    }
    return result;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        if (m == 0) {
            cout << n << endl;
        } else {
            
            long long limit = n +m;
           long long result=compute_or(limit);
            cout << result << endl;
        }
    }
    return 0;
}