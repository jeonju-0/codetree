#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }

    int min_sum = INT_MAX;
    for (int target = 1; target <= n; ++target) {
        int curr_sum = 0;
        for (int i = 1; i <= n; ++i) {
            curr_sum += abs(i - target) * v[i];
        }
        if (curr_sum < min_sum) {min_sum = curr_sum;}
    }
    cout << min_sum;

    return 0;
}