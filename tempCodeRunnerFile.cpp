#include <iostream>
#include <vector>
#include <numeric> // For std::gcd
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        bool all_same = true;
        for (int i = 1; i < n; ++i) {
            if (a[i] != a[0]) {
                all_same = false;
                break;
            }
        }

        if (all_same) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        vector<int> ans(n, 2);  // default assign all to group C (2)
        ans[0] = 1;             // first element to group B (1)
        for (int i = 1; i < n; ++i) {
            if (a[i] != a[0]) {
                ans[i] = 2;
            } else {
                ans[i] = 1;
            }
        }

        for (int x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}

