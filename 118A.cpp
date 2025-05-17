#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

bool checkVowel(char c) {
    c = tolower(c);
    if(c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i') return 1;
    else return 0;
}

void solve() {
    string st; cin >> st;
    for(char c : st) {
        if(!checkVowel(c)) {
            cout << "." << (char)tolower(c);
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}