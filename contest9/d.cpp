#include <iostream>
#include <vector>
#include <string>

using namespace std;


int countGoodSubstrings(const string& S) {
    int n = S.size();

    
    vector<vector<bool>> dp(n, vector<bool>(n, false));

    for (int i = 0; i < n; ++i) {
        dp[i][i] = true; 
    }

    for (int i = 0; i < n - 1; ++i) {
        if (S[i] == S[i + 1]) {
            dp[i][i + 1] = true; 
        }
    }

    for (int length = 3; length <= n; ++length) {
        for (int i = 0; i <= n - length; ++i) {
            int j = i + length - 1;
            if (S[i] == S[j] && dp[i + 1][j - 1]) {
                dp[i][j] = true;
            }
        }
    }
    vector<pair<int, int>> palindromicPairs;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (dp[i][j]) {
                palindromicPairs.emplace_back(i, j);
            }
        }
    }
    auto isNonOverlapping = [](const pair<int, int>& p1, const pair<int, int>& p2, const pair<int, int>& p3) {
        return p1.second < p2.first && p2.second < p3.first;
    };

    int count = 0;
    int numPairs = palindromicPairs.size();

    for (int i = 0; i < numPairs; ++i) {
        for (int j = i + 1; j < numPairs; ++j) {
            for (int k = j + 1; k < numPairs; ++k) {
                if (isNonOverlapping(palindromicPairs[i], palindromicPairs[j], palindromicPairs[k])) {
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    string S = "efcdc";
    cout << "Number of good substrings: " << countGoodSubstrings(S) << endl;
    return 0;
}
