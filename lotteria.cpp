#include <bits/stdc++.h>
using namespace std; 
#define mod 1000000007

int main() {
    int n, m; cin >> n>> m; 
    int dp[n + 1][m + 1];
    
    for(int i = 1; i<= m; i++) dp[n][i] = 1;
    for(int i = 1; i < n; i++) dp[i][m] = 0; 

    for(int i = n-1; i>= 1; i--) {
        for (int j = m-1; j>=1 ; j--) {
            dp[i][j] =  dp[i][j + 1];
            if(2*j <= m) dp[i][j] += dp[i+1][2*j];
            dp[i][j]%= mod;
            if(2*j + 1<= m) dp[i][j] += dp[i+1][2*j+1];
            dp[i][j]%= mod;
        }
    }
    int ans=0; 
    for(int j = 1; j<= m; j++) {
        ans += dp[1][j];
        ans %= mod;
    }
    cout << ans;
}
