#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

bool check(string st) {
    if(st == "X++" || st == "++X") return 1;
    else return 0;
}

void solve() {
    int t; cin >> t;
    int x = 0;
    while(t--) {
        string st; cin >> st;
        if(check(st)) x++;
        else x--;
    }
    cout << x << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}