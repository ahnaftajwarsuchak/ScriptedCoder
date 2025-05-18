#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    long long n,m,a; cin >>n >> m >> a;
    long long width = (n+a-1)/a;
    long long height = (m+a-1)/a;
    cout << width*height <<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}