#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> v[i][j];
        }
    }

    int max_cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n-2; ++j) {
            int curr_cnt = v[i][j] + v[i][j+1] + v[i][j+2];
            if (curr_cnt > max_cnt) {max_cnt = curr_cnt;}
        }
    }
    cout << max_cnt;
    
    return 0;
}