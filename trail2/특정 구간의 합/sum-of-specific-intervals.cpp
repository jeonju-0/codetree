#include <iostream>
#include <vector>
using namespace std;

vector<int> A;

int main() {
    int n, m;
    cin >> n >> m;
    A.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    while (m--) {
        int a1, a2;
        cin >> a1 >> a2;
        a1--; a2--;
        int sum = 0;
        for (int i = a1; i <= a2; ++i) {
            sum += A[i];
        }
        cout << sum << '\n';
    }

    return 0;
}