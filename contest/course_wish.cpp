#include <bits/stdc++.h>
using namespace std;

int main() {

   

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(k + 2), b(n + 1);

        for (int i = 1; i <= k; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];

        vector<vector<int>> level(k + 2);

        for (int i = 1; i <= n; i++) {
            level[b[i]].push_back(i);
        }

        vector<int> ops;

        while (true) {
            bool all_done = true;

            for (int i = 1; i <= k; i++) {
                if (!level[i].empty()) {
                    all_done = false;
                    break;
                }
            }

            if (all_done) break;

            bool moved = false;

            for (int i = k; i >= 1; i--) {
                if (!level[i].empty()) {
                    if (i == k || level[i + 1].size() < a[i + 1]) {
                        int idx = level[i].back();
                        level[i].pop_back();
                        level[i + 1].push_back(idx);
                        ops.push_back(idx);
                        moved = true;
                        break;
                    }
                }
            }

            if (!moved || ops.size() > 1000) {
                cout << -1 << "\n";
                goto next_case;
            }
        }

        cout << ops.size() << "\n";
        for (int x : ops) cout << x << " ";
        cout << "\n";

        next_case:;
    }
}