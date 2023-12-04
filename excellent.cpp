#include <bits/stdc++.h>
//#include "./stdc++.h"

using namespace std;

int main () {
    int n;
    cin>> n;
    if (n == 1) {cout<< -1; return 0;}
    if(n%2){
        for(int i = 1; i <= (n-3)/2; i++ ){
            cout<<15;
            //cout <<111;
        }
        cout<<111;
    } else {
        for(int i = 1; i <= (n/2); i++){
            cout << 15;
        }
    }
}