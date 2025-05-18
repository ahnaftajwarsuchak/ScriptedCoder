#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    int n; cin >> n;
    int step = 0;
    if(n >= 5) {
        if(n % 5 == 0) step = n/5;
        else step = (n/5) + 1; 
    }else step = 1;

    cout << step << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}