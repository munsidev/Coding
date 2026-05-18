#include<bits/stdc++.h>
using namespace std;

const int MAX_H = 1e6 + 5;

class FenwickTree {
    vector<long long> bit;
    int size;

public:
    FenwickTree(int n) {
        size = n;
        bit.assign(n + 1, 0);
    }

    void update(int index, long long value) {
        while (index <= size) {
            bit[index] = max(bit[index], value);
            index += index & -index;
        }
    }

    long long query(int index) {
        long long res = 0;
        while (index > 0) {
            res = max(res, bit[index]);
            index -= index & -index;
        }
        return res;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> h(n);
    vector<int> v(n);

    for (int i = 0; i < n; ++i) cin >> h[i];
    for (int i = 0; i < n; ++i) cin >> v[i];

    FenwickTree bit(MAX_H);
    long long max_sum = 0;

    for (int i = 0; i < n; ++i) {
        long long best_prev = bit.query(h[i] - 1);
        long long curr_sum = best_prev + v[i];
        bit.update(h[i], curr_sum);
        max_sum = max(max_sum, curr_sum);
    }

    cout << max_sum << endl;
    return 0;
}