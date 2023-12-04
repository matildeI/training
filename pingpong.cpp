#include <bits/stdc++.h>

using namespace std;

void ex() {
    cout << -1<< " " << -1 << endl;
}
int main () {
    int n;
    cin>> n;
    while(n--){
        int a,b;
        cin >> a>> b;
        if( a< 33) ex();
        else if(a > 53) ex();
        else if(b > 52) ex();
        else if( a >33 && b < 11) ex();
        else if( a > 43 && b <22) ex();
        else {
            // prima 
            if(b > 30 || a > 33) {
                cout << min(10, max(a-33,0)) << " " << 11<< endl;
                b-=11;
                a -= min(10, max(a- 33, 0));
            }
            if(b > 30 || a > 33) {
                cout << min(10,max(a-33, 0)) << " " << 11<< endl;
                b-=11;
                a -= min(10, max(a- 33, 0));
            }
           //if( b>30) exit(1);
            cout << 11<< " " << min(b, 10) << endl;
            b-= min(b, 10);
            cout << 11<< " " << min(b, 10) << endl;
            b-= min(b, 10);
            cout << 11<< " " << min(b, 10) << endl;
            b-= min(b, 10);
        }
    }
}