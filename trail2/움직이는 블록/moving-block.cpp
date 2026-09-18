#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum += v[i];
    }

    int avg = sum/n;
    int ans = 0;
    for (int x : v) {
        if (avg - x > 0) {ans += avg - x;}
    }
    cout << ans;

    return 0;
}