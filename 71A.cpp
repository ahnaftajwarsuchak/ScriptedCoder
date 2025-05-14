#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
    int n; cin >> n;
    string st;
    for(int i = 0; i < n; i++) {
        cin >> st;
        if(st.length() > 10) {
            cout << st[0] << st.length()-2 << st[st.length()-1];
        }else {
            cout << st;
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}