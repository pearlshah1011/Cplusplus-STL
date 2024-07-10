#include<bits/stdc++.h>
using namespace std;
int maxScore(int l, int r) {
    int maxScore = 0;
    
    
    int x = 1;
    while (x <= r) {
        x <<= 1; // x = x * 2
    }
    x >>= 1; // x = x / 2
    
   
    while (x > r || x < l) {
        x >>= 1;
    }

    int score = 0;
    while (x > 1) {
        x >>= 1; // x = x / 2
        score++;
    }
    
    return score;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << maxScore(l, r) << endl;
    }

    return 0;
}
