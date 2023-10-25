#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, t = 0, p = 0;
    cin >> n >> m;
    while (m--) {
        long long x;
        cin >> x;
        x--;
        if (x < p)
            t += n - abs(p - x);
        else
            t += abs(x - p);
        p = x;
    }
    cout << t << '\n';
    return 0;
}

