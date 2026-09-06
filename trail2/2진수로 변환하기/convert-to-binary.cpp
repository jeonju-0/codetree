#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    while (n >= 2) {
        v.push_back(n%2);
        n/=2;
    }
    v.push_back(n);

    reverse(v.begin(), v.end());
    for (int x : v) {cout << x;}

    return 0;
}