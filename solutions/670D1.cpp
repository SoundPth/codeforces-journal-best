// Решение задачи Magic Powder - 1
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> required(n), available(n);
    for (int i = 0; i < n; i++) cin >> required[i];
    for (int i = 0; i < n; i++) cin >> available[i];

    long long low = 0, high = 2e9;
    while (low < high) {
        long long mid = (low + high + 1) / 2;
        long long need = 0;
        for (int i = 0; i < n; i++) {
            if (required[i] * mid > available[i]) {
                need += required[i] * mid - available[i];
                if (need > k) break;
            }
        }
        if (need <= k) low = mid;
        else high = mid - 1;
    }
    cout << low << endl;
    return 0;
}
