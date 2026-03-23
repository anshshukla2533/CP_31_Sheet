#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<long long> a;

        // Always push first element
        a.push_back(b[0]);

        for (int i = 1; i < n; i++) {
            if (b[i] >= b[i - 1]) {
                a.push_back(b[i]);
            } else {
                // If decreasing, duplicate
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
        }

        cout << a.size() << "\n";
        for (auto x : a) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}