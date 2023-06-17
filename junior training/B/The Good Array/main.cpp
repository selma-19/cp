#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        double n, k;
        int in, ik;
        cin >> n >> k;
        in = n;
        ik = k;

        vector<int> v; // Moved the vector initialization inside the while loop

        for (int i = 1; i <= (int)ceil(n / k); i++) {
            v.push_back(i);
            if (v[i - 1] <= ceil(n / k)/2) {
                v[i - 1] *= 2;
            } else if (v[i - 1] == ceil(n / k)/2) {
                v[i - 1] = v[i - 1] * 2 - 1;
            }
        }

        cout << *max_element(v.begin(), v.end()) << endl;
    }

    return 0;
}
