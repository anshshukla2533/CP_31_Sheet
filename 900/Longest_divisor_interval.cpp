#include <bits/stdc++.h>
using namespace std;

// Function to compute LCM 
long long get_lcm(long long a, long long b) {
    return (a / __gcd(a, b)) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long lcm = 1;
        int ans = 1;

        for (int i = 1; i <= 50; i++) {
            lcm = get_lcm(lcm, i);

            if (lcm > n) break;

            if (n % lcm == 0) {
                ans = i;
            } else {
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}