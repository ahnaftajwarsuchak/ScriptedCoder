#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void ignoreDublicate(string &n) {
    sort(all(n));
    n.erase(unique(all(n)), n.end());
}

void solve() {
    string st; cin >> st;

    ignoreDublicate(st);

    if(sz(st) % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}