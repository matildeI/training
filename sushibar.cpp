 #include <bits/stdc++.h>
using namespace std; 

int main() {
    int n; cin>> n; 
    int a, b, c; 
    set<int> pos; pos.insert(0);
    vector<pair<int, pair<int, int> > > v (n);  // fine, tempo , punti
    for(int i = 0; i< n; i++) {
        cin >> a>> b>> c;
        pos.insert(a+c);
        v[i] = make_pair(a+ c, make_pair(c, b));
    }
    sort(v.begin(), v.end());

    int last = 0; 
    map<int, int> mp; 
    for(int i = 0; i< n; i++) {
        int d= v[i].first; 
        c = v[i].second.first; 
        b = v[i].second.second; 
        auto k = pos.upper_bound(d-c);
        k--;
        mp[d] = max(last, mp[*k] + b);
        last = mp[d];
    }
    cout << mp[v[n-1].first];
}
