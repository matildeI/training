#include <bits/stdc++.h>
using namespace std;
#define s second
#define int int64_t

const int N = 1e5;
int v[N];
int ans; 

int solve(int l,int r) { // incluso escluso
    if(l>= r || (r-l)*(r-l) < ans) return 0;

    map<int, int> m; // first chi, second ripetizioni
    for(int i = l; i < r; i++) m[v[i]]++;
    int mn, mx;
    mn= mx = m.begin()-> s; 
    for(auto x : m) {
        mn = min( mn, x.s);
        mx = max(mx, x.s);
    }

    int res = mn * mx; 
    int tl = l; 

    for(int i = l; i < r;i++) {
        if( m[v[i]]== mn) {
            res = max(res, solve(tl, i));
            tl= i + 1;
        }
    }
    res = max(res, solve(tl, r));
    ans = max(ans, res);
    return res;

}


int32_t main() {
    int n; cin >> n; 
    for(int i = 0; i< n; i++) cin >> v[i];
  cout <<  solve(0, n);

}

